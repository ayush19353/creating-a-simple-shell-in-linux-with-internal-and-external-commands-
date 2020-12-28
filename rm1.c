#include<stdlib.h>
#include<sys/types.h>
#include<stdio.h>
#include<dirent.h>
#include<string.h>
#include<unistd.h>
#include<readline/history.h>
#include<readline/readline.h>
 int main(int argc, char *argv[])
{

if(strcmp(argv[1],"-i")==0)
{
fprintf(stderr,"Want to remove the file" );
char obc[100];
scanf("%s",obc);

if(strcmp(obc,"y")==0||strcmp(obc,"Yes")==0|| strcmp(obc,"Y")==0 ||strcmp(obc,"yes")==0|| strcmp(obc,"YES")==0)
{
int jh=2;
	while(strcmp(argv[jh],"NULL")!=0)
	{
		

	int slr=remove(argv[jh]);


if(slr==0)
{
	printf("%s %s %s\n","file ",argv[jh], "deleted" );
}
else
	{perror("file not  deleted(it could be wrong file name" );

}
jh++;
}
	
}

else
	perror("Not deleting because you entered no" );
}
else if(strcmp(argv[1],"-v")==0)
{
	int jh=2;
	while(strcmp(argv[jh],"NULL")!=0)
	{
		

	int slr=remove(argv[jh]);


if(slr==0)
{
	printf("%s %s %s\n","file ",argv[jh], "deleted" );
}
else
	{perror("file not deleted(it could be wrong file name" );

}
jh++;
}}
	

else if(strcmp(argv[1],"-i")!=0 || strcmp(argv[1],"-v")!=0)
{ int jh=1;
	while(strcmp(argv[jh],"NULL")!=0)
	{

	int slr=remove(argv[jh]);


if(slr==0)
{
	printf("%s %d %s\n","file ",jh, "deleted" );
}
else
	printf("%s\n","file  not deleted(it could be wrong file name)" );
jh++;
}}
else
	perror("wrong command");




	return 0;
}
