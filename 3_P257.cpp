#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char s1[101],s2[101],t[101];
	int i,j;
	float len1,len2,max=0;
	int a[100][100]={0};
	float similar;
	gets(s1);
	gets(s2);
	len1=strlen(s1);
	len2=strlen(s2);
	
	for(i=0;i<len1;i++)
	{
		for(j=0;j<len2;j++)
		{
			if(s1[i]==s2[j]||abs(s1[i]-s2[j])==32)
			{
				if(i!=0&&j!=0)
				a[i][j]=a[i-1][j-1]+1;
				else a[i][j]=1;
			}
		}
	}
	
	for(i=0;i<len1;i++)
	{
		for(j=0;j<len2;j++)
		{
			if(a[i][j]>max) max=a[i][j];
		}
	}
	similar=2.0*max/(len1+len2);
	printf("%.3f",similar);
 } 
