#include<stdio.h>

void main()
{
FILE *fp;
fp=fopen("read.txt","r+");
if(fp)
	printf("open successfully\n");
else
	printf("failed to open");

char c;
fputc('H',fp);
fputc('E',fp);
fputc('L',fp);
fputc('L',fp);
fputc('O',fp);

rewind(fp);

while((c=fgetc(fp))!=EOF)
	printf("%c",c);

fclose(fp);
}

