#include<stdlib.h>
#include<sys/types.h>
#include<stdio.h>
#include<dirent.h>
#include<string.h>
#include<unistd.h>
#include<readline/history.h>
#include<readline/readline.h>
#include<sys/stat.h>
#include <assert.h>
#include<time.h>

 int main(int argc, char *argv[])
{
//printf("%s\n","fdff" );

	if(strcmp(argv[1],"-n")==0)
{

if(strcmp(argv[2],"NULL")==0)
{
	perror("need for commands");}
else
{
	int hgq=2;
	while(strcmp(argv[hgq],"NULL")!=0)
	{
	FILE *file2;
	char liner[200];
	file2=fopen(argv[hgq],"r");
	if(file2==NULL)
		perror("file not found");
	else
		{
			int gg=1;
	while(fgets(liner,200,file2)!=NULL)
	{

		printf("    %d  %s\n",gg,liner );
		gg++;
	}}hgq++;
fclose(file2);

}
}

}
else if(strcmp(argv[1],"-e")==0)
{
	if(strcmp(argv[2],"NULL")==0)
	{
perror("need more arguments");
}

else
{int ob11=2;
	while(strcmp(argv[ob11],"NULL")!=0)
	{
	FILE *file2;
	char liner[200];
	file2=fopen(argv[ob11],"r");
	if(file2==NULL)
		printf("%s\n","File not found");
	else
	{printf("%s\n","ree" );
	while(fgets(liner,200,file2)!=NULL)
	{
		
		for(int hg=0;hg<sizeof(liner);hg++)
		{
if(liner[hg]=='\n')
{

	liner[hg]='$';

}
}

char* str22=malloc(strlen(liner)+1);
strcpy(str22,liner);
str22[strlen(liner)]='\0';

		printf("%s\n",str22);
		free(str22);
		
	}}ob11++;
fclose(file2);

}

}}
else
{//printf("%s\n","ob" );
	int hgo=1;
	while(strcmp(argv[hgo],"NULL")!=0)
	{
	FILE *file1;
	char line[200];
	file1=fopen(argv[1],"r");
	if(access(argv[hgo],F_OK)!=-1)
	{
	printf("%s ","output of the file" );
	printf("%s \n",argv[hgo] );
	while(fgets(line,200,file1)!=NULL)
	{

		printf(" %s\n",line );
		
	}hgo++;
fclose(file1);
}
else
{perror("file not found");
hgo++;}


}}


return 0;

}