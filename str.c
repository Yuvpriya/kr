#include<stdio.h>
#include<conio.h>
#include<string.h>
void rec(char *s,int N,int i)
{
int j;
if(i>0)
{
if(s[i]==' ')
{
for(j=i+1;j<=N;j++)
printf("%c",s[j]);
n=i;
}
i=i-1;
rec(s,N,i);
}
else if(i==0)
{
for(j=0;j<N;j++)
printf("%c",s[j]);
return;
}
}
int main()
{
char *s;
int N,i,j;
clrscr();
gets(s);
n=strlen(s);
i=N;
rec(s,N,i);
getch();
return 0;
}
