#include<stdlib.h>
#include<sys/types.h>
#include<stdio.h>
#include<dirent.h>
#include<string.h>
#include<unistd.h>

 int main(int argc, char *argv[])
{
if(strcmp(argv[1],"NULL")==0 || strcmp(argv[1],"")==0)
{//printf("%s\n","1" );
	DIR *directory;
struct dirent *sd1;
char fff[333];
getcwd(fff,333);
directory=opendir(fff);
char arr1[1000][1000];
if(directory== NULL)
{
	perror("Directory not found" );
	
}else
{
int aza=0;
while((sd1=readdir(directory))!=NULL)
{
	if(sd1->d_name[0]=='.')
{}
	else
	{char ph[1000];
strcpy(ph,sd1->d_name);
strcpy(arr1[aza],ph);
aza++;
}
}
char temp[1000];
for(int i=1;i<=aza;i++)
{
	for(int j=0;j<aza-i;j++)
	{
if(strcasecmp(arr1[j],arr1[j+1])>0)
	{strcpy(temp,arr1[j]);
strcpy(arr1[j],arr1[j+1]);
strcpy(arr1[j+1],temp);
	}
	}
}
for(int i=0;i<=aza;i++)
printf("%s      ", arr1[i]);

closedir(directory);}}

else if(strcmp(argv[1],"-1")==0)
	{
//printf("%s\n","1" );
if(strcmp(argv[2],"NULL")==0)
{//printf("%s\n","2" );
DIR *direct4;struct dirent *sdp4;char fff1[400];getcwd(fff1,400);printf("%s\n",fff1 );direct4=opendir(fff1);
char arr2[1000][1000];

if(direct4== NULL)
{perror("Directory not found" );
	

}
int gggg=0;
while((sdp4=readdir(direct4))!=NULL)
{
	char ph[1000];strcpy(ph,sdp4->d_name);strcpy(arr2[gggg],ph);gggg++;
	//printf("%s\n",sdp4->d_name );
}
char temp[1000];
for(int i=1;i<=gggg;i++)
{
	for(int j=0;j<gggg-i;j++)
	{
if(strcasecmp(arr2[j],arr2[j+1])>0)
	{strcpy(temp,arr2[j]);strcpy(arr2[j],arr2[j+1]);strcpy(arr2[j+1],temp);
}}}
for(int i=0;i<=gggg;i++)
printf("%s      ", arr2[i]);

closedir(direct4);}
else
{
	int gfd=2;
	while(strcmp(argv[gfd],"NULL")!=0)
	{
	DIR *direct2;struct dirent *sdp2;char fff2[400];getcwd(fff2,400);strcat(fff2,"/");strcat(fff2,argv[gfd]);
printf("%s\n",fff2 );direct2=opendir(fff2);printf("%s\n",argv[gfd]);char off[1000][1000];

if(direct2== NULL)
{
	perror("Directory not found" );
}

int azq=0;
while((sdp2=readdir(direct2))!=NULL)
{char ph[1000];strcpy(ph,sdp2->d_name);strcpy(off[azq],ph);azq++;
	//printf("%s\n",sdp2->d_name );
}
char temp[1000];
for(int i=1;i<=azq;i++)
{
	for(int j=0;j<azq-i;j++)
	{
if(strcasecmp(off[j],off[j+1])>0)
	{strcpy(temp,off[j]);strcpy(off[j],off[j+1]);strcpy(off[j+1],temp);
}
	}
}
for(int i=0;i<=azq;i++)
printf("%s      ", off[i]);


closedir(direct2);
gfd++;

}
}
}

else if(strcmp(argv[1],"-a")==0)
{
if(strcmp(argv[2],"NULL")==0)
{
	DIR *directory4;struct dirent *sd8;char fff2[333];getcwd(fff2,333);directory4=opendir(fff2);
char off11[1000][1000];
	if(directory4== NULL)
{
	perror("Directory not found" );

}else
{
int j11=0;
while((sd8=readdir(directory4))!=NULL)
{char ph[1000];
	strcpy(ph,sd8->d_name);
	strcpy(off11[j11],ph);
	j11++;
	//printf("%s ",sd8->d_name );
}

char temp[1000];
for(int i=1;i<=j11;i++)
{
	for(int j=0;j<j11-i;j++)
	{
if(strcasecmp(off11[j],off11[j+1])>0)
	{strcpy(temp,off11[j]);
strcpy(off11[j],off11[j+1]);
strcpy(off11[j+1],temp);



	}


	}
}
for(int i=0;i<=j11;i++)
printf("%s      ", off11[i]);



}
closedir(directory4);

}
else
{

	int gfff=2;
	while(strcmp(argv[gfff],"NULL")!=0)
	{
	DIR *directory4;
struct dirent *sd8;
char fff2[333];
getcwd(fff2,333);
strcat(fff2,"/");
strcat(fff2,argv[gfff]);
directory4=opendir(fff2);
char arr4[1000][1000];
printf("%s %s\n",argv[gfff],":" );
	if(directory4== NULL)
{
	printf("%s\n","Directory not found" );
	
}else
{
int gg=0;
while((sd8=readdir(directory4))!=NULL)
{char ph[1000];
	strcpy(ph,sd8->d_name);
	strcpy(arr4[gg],ph);
	gg++;
	//printf("%s ",sd8->d_name );
}
char temp[1000];
for(int i=1;i<=gg;i++)
{
	for(int j=0;j<gg-i;j++)
	{
if(strcasecmp(arr4[j],arr4[j+1])>0)
	{strcpy(temp,arr4[j]);
strcpy(arr4[j],arr4[j+1]);
strcpy(arr4[j+1],temp);



	}


	}
}
for(int i=0;i<=gg;i++)
printf("%s      ", arr4[i]);

closedir(directory4);
printf("\n");}
gfff++;
}
}



}


	
	else if(strcmp(argv[1],"-r")==0)

	{

	/* code */
		if(strcmp(argv[2],"NULL")==0)
		{
DIR *direct;
struct dirent *sdp;

char fff[1000];
getcwd(fff,1000);
printf("%s\n", fff);
direct=opendir(fff);

if(direct== NULL)
{
	perror("Directory not found" );
	
}
else 
{
char* filena[1000];
char aqq[1000][1000];
int hfd=0;
while((sdp=readdir(direct))!=NULL)
{//printf("%s\n","fjgf" );

	filena[hfd]=sdp->d_name;
	hfd++;
}int sumer=0;
for(int aa=hfd-1;aa>=0;aa--)
{
	if(filena[aa][0]=='.')
	{}
else
{char ph[1000];
	strcpy(ph,filena[aa]);
	strcpy(aqq[sumer],ph);
	sumer++;
	//printf("%s\n",filena[aa] );
}
}
char temp[1000];
for(int i=1;i<=sumer;i++)
{
	for(int j=0;j<sumer-i;j++)
	{
if(strcasecmp(aqq[j],aqq[j+1])>0)
	{strcpy(temp,aqq[j]);
strcpy(aqq[j],aqq[j+1]);
strcpy(aqq[j+1],temp);



	}


	}
}
for(int i=sumer;i>=0;i--)
printf("%s      ", aqq[i]);

}

closedir(direct);
}
else
{
	int hghg=2;
	while(strcmp(argv[hghg],"NULL")!=0)
	{
DIR *direct;
struct dirent *sdp;
char fff[400];

getcwd(fff,400);
strcat(fff,"/");
strcat(fff,argv[hghg]);

direct=opendir(fff);
printf("%s %s\n",argv[hghg],":" );
if(direct== NULL)
{
	perror("Directory not found" );
	
}

else
{char* filena[1000];
	char qqq[1000][1000];
int hfd=0;
while((sdp=readdir(direct))!=NULL)
{//printf("%s\n","fjgf" );
	filena[hfd]=sdp->d_name;
	hfd++;
}int sv=0;
for(int aa=hfd-1;aa>=0;aa--)
{
	if(filena[aa][0]=='.')
	{}
else
{char ph[1000];
	strcpy(ph,filena[aa]);
	strcpy(qqq[sv],ph);
	sv++;
	//printf("%s\n",filena[aa] );
}
}char temp[1000];
for(int i=1;i<=sv;i++)
{
	for(int j=0;j<sv-i;j++)
	{
if(strcasecmp(qqq[j],qqq[j+1])>0)
	{strcpy(temp,qqq[j]);
strcpy(qqq[j],qqq[j+1]);
strcpy(qqq[j+1],temp);



	}


	}
}
for(int i=sv;i>=0;i--)
printf("%s      ", qqq[i]);





}
closedir(direct);

hghg++;
}}
}
else
{
	//printf("%s\n","qq" );

int khg=1;
while(strcmp(argv[khg],"NULL")!=0)
{



	DIR *directory2;
struct dirent *sd11;
//printf("%d\n",argc);
char cas[1000];
getcwd(cas,1000);
strcat(cas,"/");
strcat(cas,argv[khg]);
//printf("%s\n",cas );
directory2=opendir(cas);
printf("%s %s \n",argv[khg],":" );
printf("\n");
char azz[1000][1000];

if(directory2== NULL)
{
	perror("Directory not found" );
	

}else
{
int hgf=0;
while((sd11=readdir(directory2))!=NULL)
{if(sd11->d_name[0]=='.')
{}
else
{	char ph[1000];
	strcpy(ph,sd11->d_name);
	strcpy(azz[hgf],ph);
	hgf++;
//printf("%s     ",sd11->d_name );
}}

char temp[1000];
for(int i=1;i<=hgf;i++)
{
	for(int j=0;j<hgf-i;j++)
	{
if(strcasecmp(azz[j],azz[j+1])>0)
	{strcpy(temp,azz[j]);
strcpy(azz[j],azz[j+1]);
strcpy(azz[j+1],temp);
	}
}}
for(int i=0;i<=hgf;i++)
printf("%s      ", azz[i]);
}
closedir(directory2);
khg++;}
}


	return 0;
}
