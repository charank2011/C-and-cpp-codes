#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,d,k,min;
    printf("Enter the location of tom: ");
    scanf("%d%d",&a,&b);
    printf("Enter the location of jerry: ");
    scanf("%d%d",&c,&d);
    printf("Enter the k value: ");
     scanf("%d",&k);
     min=abs(c-a)+abs(d-b);
     if(min<k)
     {
        if((k-min)%2==0)
        {
            printf("Tom can reach jerry");

        }
        else
        printf("Tom can not reach jerry");
     }
      else
        printf("Tom can not reach jerry");

}