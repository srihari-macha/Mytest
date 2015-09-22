#include<stdio.h>

int main(int argc, char *argv[])
{
	int a[1000],ch,x,i=0;
	int n,p,q;
	FILE *fp;
	fp=fopen(argv[1],"r");
	while((ch=getc(fp))!=EOF)
	{
		a[i]=ch;
		i++;
	}
	for(x=0;x<i;x++)
		printf("%d\t",a[x]);
	printf("\n");
	printf("0 is %d, and i is %d",a[0],a[i]);
	if((a[0]==45)&&(a[i-2]==45))
	{
		for(x=0;x<i;x++)
			printf("%c",a[x]);
	}
	else
	{
	for(x=0;x<i;x++)
	{
		
		if(a[x]==45)
		{
			p=a[x-1],q=a[x+1];
			//printf("p is %d and q is %d\n",p,q);
			
			if((p<58 && q>96) || p>96 &&q<58)
			{
				printf("%c",a[x]);
			}
			else if(p<q)
			{
			for(n=p+1;n<q;n++)
			{
				printf("%c",n);
			}
			}
			else
			{
				for(n=p-1;n>q;n--)
					printf("%c",n);
			}
		}
		else
			printf("%c",a[x]);
	}
	}
	printf("\n");
}




