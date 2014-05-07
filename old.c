#include<stdio.h>
#include<stdlib.h>

#define BUFF_LINE 300

int main()
{
	char FileCont[BUFF_LINE];
	char* str=FileCont;
	int *ptr=(int *)0;
	int couter=0;
	FILE* fp;
	main();
	*ptr=100;
	if ( (fp = fopen( "she.c", "r" ) ) == NULL)
	{
		printf( "File could not be opened\n" );
		exit(0);
	}
	fgets(str,BUFF_LINE,fp);
	while(!feof(fp))
	{

		while(*str!='\0')
		{
			if (*str=='#')
			{
				couter++;
				break;
			}
			else
			  str++;
		}
		fgets(str,BUFF_LINE,fp);
	}
	fclose(fp);
	printf("%d",couter);
	return 0;
}
