#include<stdio.h>
int main()
{
	int i,j,cnt,k,c=0;
	for(i=1;i<1000000;i++)
	{
		cnt=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
				cnt++;
		}
		if(cnt==1 && c<10002)
		{
			c++;
			printf("%d..%d\n",c,i);	
		}
	}
	return 0;
}                                  
