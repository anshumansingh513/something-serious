#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
    int n,r,result;
    printf("enter value of n");
    scanf("%d",&n);
    printf("enter value of r");
    scanf("%d",&r);
    if(n<r)
    printf("error");
    else
        result=fact(n)/(fact(r)*fact(n-r));
        printf("%d",result);
        getch();

}
int fact(int n)
{
    if(n==0)
return 1;
else
    return n*fact(n-1);

}
