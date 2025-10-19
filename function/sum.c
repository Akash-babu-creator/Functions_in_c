#include<stdio.h>
void sum()
{
    int a,b,c;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    c=a+b;
    printf("the sum of number=%d",c);
}
int main()
{
    
    
    int a=7 ,*p;
    //value of a is input by the user and assumed it is equal to 7.
    p = &a;
    scanf("%d", p);
    printf("%d",a);

    // if (x=y%2)
    // {
    //     z=2;
    //     printf("%d",z);
    //     a=2;
    // }
    // printf("%d,%d",z,x);
    // for ( i = 5; i > 0; --i)
    // {
    //     printf("%d\n",i);
    // }
    // printf("second");
    // for ( i = 5; i > 0; i--)
    // {
    //     printf("%d\n",i);
    // }
    
    return 0;
}
 