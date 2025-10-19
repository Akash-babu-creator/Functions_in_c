#include<stdio.h>
#include<conio.h>
int rct(int l,int b);
void main()
{
    int l,b,ar;
    printf("Enter length and breadth of the rectangle respectively");
    scanf("%d%d",&l,&b);
    ar=rct(l,b);
    printf("area of the rectangle is = %d",ar);
}
int rct(int l,int b)
{
    int a;
    a=l*b;
    return a;
}
