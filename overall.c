#include<stdio.h>

#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdio.h>
#include<stdio.h>
#include <stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
#include<string.h>
#include<sys/wait.h>
#include<readline/history.h>
#include<readline/readline.h>


int takeInpt(char* star)
{
	char* buf;
buf=readline("\n>>>");
strcpy(star,buf);


	}

int main()
{
int h=0;
char qinline[200];
char* history[150];
int maxs=150;




char cg[400];
		strcat(getcwd(cg,400),"/outputmkdir");
char cg1[400];
		strcat(getcwd(cg1,400),"/outputdate");
		char cg2[400];
		strcat(getcwd(cg2,400),"/outputcat");
		char cg3[400];
		strcat(getcwd(cg3,400),"/outpy");
		char cg4[400];
		strcat(getcwd(cg4,400),"/outp");

char ck[500];
strcat(getcwd(ck,500),"/history1.txt");
while(1)
{
//memset(qinline,'\0',sizeof(qinline));
takeInpt(qinline);
//char* ghgh=qinline+" ";
//strcpy(history,q);
history[h]=strndup(qinline,sizeof(qinline));
FILE *qw;
qw=fopen(ck,"a+");
fprintf(qw,"%s\n",history[h] );
// printf("%s\n",history[h] );

//printf("%s\n",qinline );
fclose(qw);
char* lis[120];
char* lip[120];
char* lip1[120];
char* lip2[120];
char* lip3[120];
lip[0]="outpy";
lip1[0]="outputmkdir";
lip2[0]="outp";
lip3[0]="outputcat";
for(int ig=0;ig<120;ig++)
	lis[ig]="";
int xyz=0;
char* p=strtok(qinline," ");
int kkk=0;

while(p!=NULL)
{if(kkk!=0)
	{
		lip[kkk]=p;
		lip1[kkk]=p;
		lip2[kkk]=p;
		lip3[kkk]=p;
	}
	lis[kkk]=p;

	kkk=kkk+1;
	xyz=xyz+1;
	p=strtok(NULL," ");
}
lip[kkk]="NULL";
lip1[kkk]="NULL";
lip2[kkk]="NULL";
lip3[kkk]="NULL";
if(strcmp(lis[0],"cd")==0)
{
	char ss[100];

 if(strcmp(lis[1],"..")==0) 
	{//printf("%s\n","ddskhgk" );
	chdir("..");
}
else if(strcmp(lis[1],"")==0 || strcmp(lis[1],"~")==0)
	{//printf("%s\n","Fu" );
chdir(getenv("HOME"));
}

else if(chdir(lis[1])!=-1)
{chdir(lis[1]);}
else if(strcmp(lis[1],"--help")==0)
{

	printf("%s\n","cd: cd [-L][-P[-e]] [-@]] [dir]" );
printf("%s\n","Change the shell worknig directory " );
printf("%s\n","Change the current directory to DIR. Defautt value is the home shell directory");
printf("%s\n","The variable CD path defines the search paths for the directory containing DIR.If Dir begins with / the CD PATH is not found ");
printf("    %s\n"," Options:" );
printf("       %s      %s\n ","-L ","  forces symlinks to be followed" );
printf("\n");
printf("%s\n","For cd .. the previous directory is now the current directory");
printf("%s\n","For cd ~ the home directory is now the current directory");
	printf("%s\n","For cd . the same directory is now the current directory");
printf("%s\n","For cd the home directory is now the current directory");
printf("%s\n","Exit status" );
printf("%s\n","returns a 0 if directory  si changed and" );
}

else if(strcmp(lis[1],"-L")==0 )

{
	chdir(lis[2]);// is a default 

}



else
printf("%s\n","file not found or command not interpreted " );}
else if(strcmp(lis[0],"exit")==0)
{
	if(strcmp(lis[1],"")==0)
	//printf("%s\n","bug off" );
	exit(1);
else if(strcmp(lis[1],"--help")==0)
	{printf("%s\n","exit : exit [n]" );
printf("%s\n","To exit the current shell" );
}
else
printf("%s\n","wrong command" );
}

else if(strcmp(lis[0],"pwd")==0)
{
if(strcmp(lis[1],"--help")==0)
{
	printf("%s\n","pwd: pwd [-LP]" );
printf("%s\n","Print the name of the current working directory" );
printf("    %s\n"," Options:" );
printf("       %s      %s\n ","-L "," print the value of $pwd if it names the current working directory" );
printf("       %s      %s\n ","-P "," print the physical directory as if there were no symbolic links" );
printf("%s\n","Exit status" );
printf("%s\n","returns a 0 unless an invalid option is given or the current directory cannot be read " );
}
else if(strcmp(lis[1],"-P")==0)
{
char ss[400];
	printf("%s\n",getcwd(ss,400) );	


}

else if(strcmp(lis[1],"")==0)
	{char ss[400];
	printf("%s\n",getcwd(ss,400 ));
}

else
	printf("%s\n","command not interpreted" );



}

else if(strcmp(lis[0],"history")==0)
{
	


if(strcmp(lis[1],"")==0)
{

FILE* filer;
char buf[300];
filer=fopen(ck,"r");
while(fgets(buf,300,filer))
{

	printf("%s\n",buf );
}
fclose(filer);


}





else if(strcmp(lis[1],"--help")==0)
{

	printf("%s\n","history: history [-c] [-d offset] [n] " );
printf("%s\n","Display or manipulate the history list" );
printf("    %s\n"," Options:" );
printf("       %s      %s\n ","-c "," clear the history list by deleting all of the entries" );
printf("       %s      %s\n ","-w "," print the physical directory as if there were no symbolic links" );
printf("%s\n","Exit status" );
printf("%s\n","returns succes unless an invalid option is given or an error occurs " );



}



else if(strcmp(lis[1],"-a")==0)
{
	printf("%s\n", "have already appended" );
}else if(strcmp(lis[1],"-c")==0)
{
	FILE *gg;
	gg=fopen(ck,"w");
fclose(gg);

}
else
printf("%s\n","command not interpreted" );



//printf("%s\n",history );

}
else if(strcmp(lis[0],"echo")==0)
{



if(strcmp(lis[1],"-E")==0)//is a default one
{


int hhh=2;



	while(lis[hhh]!="")
{//printf("%c\n",lis[hhh][strlen(lis[hhh])-1] );
	if(lis[hhh][0]=='"')
		{lis[hhh][0]=' ';}
	if(lis[hhh][strlen(lis[hhh])-1]=='"')
		{

			lis[hhh][strlen(lis[hhh])-1]=' ';}
printf("%s ",lis[hhh]);

hhh++;
}printf("\n");



}
else if(strcmp(lis[1],"-n")==0)
{
int hb=2;
while(strcmp(lis[hb],"")!=0)
{if(lis[hb][0]=='"')
		{lis[hb][0]=' ';}
	if(lis[hb][strlen(lis[hb])-1]=='"')
		{

			lis[hb][strlen(lis[hb])-1]=' ';}
printf("%s ",lis[hb]);

hb++;
}



}else if(strcmp(lis[1],"--help")==0)// you should have updeade ( enable -n echo)
{


	printf("%s\n","Usage: echo: [SHORT-OPTION]... [STRING]... " );
printf("%s\n","or: echo LONG_OPTION" );
printf("    %s\n"," Options:" );
printf("       %s      %s\n ","-n "," not to output the trailing new line" );
printf("       %s      %s\n ","-E ","disbling interpretation of backslash escapes(dafault)" );
printf("%s\n","               --help    Display the help and exit " );


}

else
{
	int hhh=1;
	while(lis[hhh]!="")
{
if(lis[hhh][0]=='"')
		{lis[hhh][0]=' ';}
	if(lis[hhh][strlen(lis[hhh])-1]=='"')
		{

			lis[hhh][strlen(lis[hhh])-1]=' ';}
printf("%s ",lis[hhh]);

hhh++;
}printf("\n");}






}
else if(strcmp(lis[0],"ls")==0)
{

	pid_t pid=fork();
	if(pid<0)
	{
		printf("%s\n"," Fork  Failed" );
	}
	else if(pid==0)
	{
 if(strcmp(lis[1],"")==0)
	{


		
	//	printf("%s\n",cg );
			execv(cg4,lip2);
}
else if(strcmp(lis[1],"-a")==0)
{
execv(cg4,lip2);

}

else if(strcmp(lis[1],"-r")==0)
{
	execv(cg4,lip2);
}
else if(strcmp(lis[1],"-1")==0)
{
execv(cg4,lip2);

}

else if(strcmp(lis[1],"-r")!=0 || strcmp(lis[1],"-1")!=0 || strcmp(lis[1],"-a")!=0)
{char tr[200];
	strcpy(tr,lis[1]);
	printf("%c\n",tr[0] );
if(tr[0]=='-')
	{printf("%s\n","Command not found" );exit(1);
}
	//if(nb[0]=='-')
	//	printf("%s\n"," Command not found" );
	else
	execv(cg4,lip2);
}
else 
{
	printf("%s\n","Command not interpreted" );
}
	}
	else
		wait(NULL);//parent 
}





else if(strcmp(lis[0],"rm")==0)
{
	pid_t pid1;
	pid1=fork();
	if(pid1<0)
		printf("%s\n","fork error" );
	else if(pid1==0)
	{
		if(strcmp(lis[1],"")==0)
	{
printf("%s\n","you need to provide an option with the command" );

		//char cg[400];
			//execl("/home/ayushmahant/Desktop/assign1part2/outpy","outpy",NULL);
}

else if(strcmp(lis[1],"-i")==0)

{



	execv(cg3,lip);
}
else if(strcmp(lis[1],"-v")==0)
{


	execv(cg3,lip);
}
else if(strcmp(lis[1],"-v")!=0 || strcmp(lis[1],"-i")!=0)

{
	if(lis[1][0]=='-')
		{printf("%s\n","command not found error" );}
	else
	
execv(cg3,lip);

}
else 
printf("%s\n","Command not found" );
}
else
wait(NULL);
}
else if(strcmp(lis[0],"mkdir")==0)
{


	pid_t pid1;
	pid1=fork();
	if(pid1<0)
		printf("%s\n","fork error" );
	else if(pid1==0)
	{
		if(strcmp(lis[1],"")==0)
	{
printf("%s\n","error(command is wrong , missing option" );

	//	char cg[400];
			//execl("/home/ayushmahant/Desktop/assign1part2/outpy","outpy",NULL);
}
else if(strcmp(lis[1],"-v")==0)

{
	//char cg[400];
		//strcat(cg,"/outputmkdir");

execv(cg,lip1);


}
else if(strcmp(lis[1],"-p")==0)
{

//char cg[400];
//		strcat(getcwd(cg,400),"/outputmkdir");

execv(cg,lip1);


}
else if(strcmp(lis[1],"-p")!=0 || strcmp(lis[1],"-v")!=0)
{

//char cg[400];
	//	strcat(getcwd(cg,400),"/outputmkdir");
	if(lis[1][0]=='-')
		printf("%s\n","command is wrong(not interpreted" );
	else
	
execv(cg,lip1);



}
else 
{
	printf("%s\n","Command not interpreted" );
}
}
else
{wait(NULL);}}


else if(strcmp(lis[0],"date")==0)
{pid_t pid;
	pid=fork();
	if(pid<0)
		{printf("%s\n","fork error" );
exit(1);}
else if(pid==0)
{
	if(strcmp(lis[1],"")==0)
	{

		//char cfd[500];
		//getcwd(cfd,500);
		//strcat(cfd,"/outputdate");
execl(cg1,"/outputdate",NULL);


			}
			else if(strcmp(lis[1],"-u")==0)
			{

			//	char cfd[500];
		//getcwd(cfd,500);
		//strcat(cfd,"/outputdate");
execl(cg1,"/outputdate",lis[1],NULL);


		
			}
			else if(strcmp(lis[1],"-r")==0)
			{

//char cas[560];
//getcwd(cas,500);
//strcat(cas,"/outputdate");
execl(cg1,"/outputdate",lis[1],lis[2],NULL);



			}
			else
				printf("%s\n","command not provided for the same" );

}
else
	{wait(NULL);}



}
else if(strcmp(lis[0],"cat")==0)
{

pid_t pid;
pid=fork();
if(pid<0)
	{printf("%s\n","fork Error" );}
else if(pid==0)
{
	if(strcmp(lis[1],"")==0)
	{perror("incomplete command");
		
}

else if(strcmp(lis[1],"-n")==0)
{
	//char cas1[560];

//getcwd(cas1,560);
//strcat(cas1,"/outputcat");
execv(cg2,lip3);
}
else if(strcmp(lis[1],"-e")==0)
{
	//char cas1[560];
//printf("%s\n","ddq" );
//getcwd(cas1,560);
//strcat(cas1,"/outputcat");
execv(cg2,lip3);
}
else if(strcmp(lis[1],"-e")!=0 || strcmp(lis[1],"-n")!=0)
{
//char cas1[560];
//getcwd(cas1,560);
//strcat(cas1,"/outputcat");
	if(lis[1][0]=='-')
		perror("Command is not interpreted");
	else
execv(cg2,lip3);
}
else
{perror("command is not interpreted");}

}
else
	{wait(NULL);
}




}

else 
	{perror("Wrong command,enter the correct command");}




h++;


}


return 0;





}
