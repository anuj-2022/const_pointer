#include<stdio.h>

void main()
{
FILE *fp=fopen("str.txt","r+");
if(fp)
	printf("open successfully\n");
else 
	printf("failed to open");

char str1[10]="HYDERABAD";
char str2[10];
fputs(str1,fp);
rewind(fp);

fgets(str2,10,fp);

printf("%s\n",str2);
}

