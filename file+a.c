#include<stdio.h>

void main()
{
FILE *fp=fopen("file.txt","a+");
if(fp)
	printf("file open successfully\n");
else
	printf("file is not open successfully");

fputc(' ',fp);
fputc('A',fp);
fputc('N',fp);
fputc('U',fp);
fputc('J',fp);
fputc('S',fp);

char c;
rewind(fp);

while((c=fgetc(fp))!=EOF)
{
		printf("%c",c);
}
}
