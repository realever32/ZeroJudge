#include <cstdio>
int main()
{
	char* input[0xFFFF];
	while(scanf("%s",&input) != EOF)
	{
		printf("hello, %s\n",input);
	}
	return 0;
}