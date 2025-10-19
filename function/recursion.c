#include<stdio.h>
#include<conio.h>
int febo(int a);
void main()
{
    int n;
    printf("Enter the number till you want to print the series=\n");
    scanf("%d",&n);
    febo(n);
}
int febo(int a)
{
    int f;
    f=f+febo(f);
    printf("%d",f);

    // int f1 = 1,f2=2,f3;
    // if (a==2)
    // {
    //     printf("%d\n%d",f1,f2);
    // }
    // else
    // {
        
    // }
    
    


}