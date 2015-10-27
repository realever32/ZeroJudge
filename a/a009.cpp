#include <cstdio>
int main()
{
	char in[0xFFFF];
	while (scanf("%s", &in) != EOF)
	{
		for(int a = 0;in[a] != '\0';++a)
		{
			in[a] -= 7 ; 
		}
		printf("%s\n",in);
	}
}