#include <cstdio>
int main()
{
	int count;
	scanf("%d",&count);
	for (int i = 0; i < count; ++i)
	{
		int a,b,c,d,e;
		scanf("%d %d %d %d",&a,&b,&c,&d);
		if(b-a == c-b)		    //等差
			{e = 2*d-c ;}
		elseif(a/b == b/c)		//等比
			{e = d*d/c ;}
		printf("%d %d %d %d %d\n", a,b,c,d,e);
	}

}