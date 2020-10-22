#include<stdio.h>
#include<conio.h>

int main()
{
    int iNo1=0,iNo2=0;
    printf("\n Enter First Number=>");
    scanf("%d",&iNo1);

    printf("\n Enter Second Number=>");
    scanf("%d",&iNo2);

    clrscr();

    printf("\n********=======*****=======********\n");
    printf("\n Before Swapping First Number=>%d\n",iNo1);
    printf("\n Before Swapping Second Number=>%d\n",iNo2);
    printf("\n********=======*****=======********\n");

    iNo1=iNo1+iNo2;
    iNo2=iNo1-iNo2;
    iNo1=iNo1-iNo2;

    printf("\n********=======*****=======********\n");
    printf("\n After Swapping First Number=>%d\n",iNo1);
    printf("\n After Swapping Second Number=>%d\n",iNo2);
    printf("\n********=======*****=======********\n");
    return ;
}