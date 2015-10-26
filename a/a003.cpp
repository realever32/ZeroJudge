#include <cstdio>
int main()
{
	int m,d;
	while(scanf("%d %d",&m,&d) != EOF)
	{
		int s = (m*2+d)%3;
		switch(s)
			{
			case 0:
				printf("%s\n","普通");
				break;
			case 1:
				printf("%s\n","吉");
				break;
			case 2:
				printf("%s\n","大吉");
				break;
			}
	}
}