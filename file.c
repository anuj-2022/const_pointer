#include<stdio.h>
#include<stdlib.h>

void main()
{
FILE *fp=fopen("file.txt","r+");
if(fp)
	printf("memory allocated successfully\n");
else
{
	printf("memory not allocated\n");
	exit(0);
}
fputc('A',fp);
char c;
while((c=fgetc(fp))!=EOF)
{
		printf("%c",c);
}
}
