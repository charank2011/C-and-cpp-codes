#include<stdio.h>
int main()
{
    FILE *fp;
    int a;
    printf("data input\n");
    fp=fopen("name.txt", "w");
    printf("enter a value");
    scanf("%d",&a);
    fprintf(fp,"%d",a); 
    fclose(fp);

}