#include<stdlib.h>
#include<sys/types.h>
#include<stdio.h>
#include<dirent.h>
#include<string.h>
#include<unistd.h>
#include<readline/history.h>
#include<readline/readline.h>
#include<sys/stat.h>
#include <libgen.h>

void remakee(char* path);
 int main(int argc, char *argv[])
{
//printf("%s\n","fdff" );



	if(strcmp(argv[1],"-v")==0)
	{
		int jgg=2;
		while(strcmp(argv[jgg],"NULL")!=0)
		{
		if(mkdir(argv[jgg],0700)==0)
{
	printf("%s %s \n","mkdir: created directory ",argv[jgg] );
}
else
perror("directory not created" );
jgg++;
}}
else if(strcmp(argv[1],"-p")==0)
{

	char some[500];
	getcwd(some,500);
	strcat(some,"/");
	strcat(some,argv[2]);
	printf("%s\n",some );
	remakee(some);
	}
else if(strcmp(argv[1],"-p")!=0 || strcmp(argv[1],"-v")!=0)
{

int jhg=1;
while(strcmp(argv[jhg],"NULL")!=0)
{if(mkdir(argv[jhg],0700)==0)
{
	printf("%s  %s \n",argv[jhg]," - directory created" );
}
else
printf("%s  %s \n",argv[jhg],"directory not created" );
jhg++;
}}
else
perror("Either the command is wrong or the file could not be created" );

return 0;
}
void remakee(char *path)
{

char *subpath,*fullpath;
fullpath=strdup(path);
subpath=dirname(fullpath);
if(strlen(subpath)>1)
{remakee(subpath);}
mkdir(path,0700);
free(fullpath);


	
}