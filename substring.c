#include<stdio.h>
#include<string.h>
int main()
{
    char string[30];
    char suba[30];
    int i;
    int p;
    int l;
    int q;
    l = strlen(string);
    printf("enter a string ");
    scanf("%s",&string[i]);
     printf("enter a position ");
     scanf("%d",&p);
      printf("enter last position ");
         scanf("%d",&p);

    char suba = substr(string,p,q) ;

    printf(" the substring is %s ", suba);
return 0 ;
}