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
if(argc==1)
{
	time_t t=time(NULL);
	struct tm *tm=localtime(&t);
	char s[444];
assert(strftime(s,sizeof(s),"%c",tm));
printf("%s\n",s );
}
else if(argc==2)
{
	//printf("%s\n","dggggggggggggggggggggggggg" );
	if(strcmp(argv[1],"-u")==0)
	{//printf("%s\n", "oh pz");
		time_t t1=time(NULL);
		char cas[555];
		struct tm *tmp1;
		tmp1=gmtime(&t1);
		assert(strftime(cas,sizeof(cas),"%c",tmp1));
printf("%s\n",cas );

		
	}
	else
		{perror("command not interpreted for the same");}
}
else if(argc==3)
{
	if(strcmp(argv[1],"-r")==0)
	{
		if(access(argv[2],F_OK)!=-1)
		{
struct stat atrribute;
stat(argv[2],&atrribute);
char timer[100];
printf("%s\n",ctime(&atrribute.st_ctime));
//printf("%s\n",timer );
}else
{
	perror("FILE does not exist or the required command is not complete" );
}}else
perror("command not interpreted for the same" );
	
}
else
	perror("command not interpreted for the same" );


return 0;
}