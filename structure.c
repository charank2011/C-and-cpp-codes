#include<stdio.h>
struct student
{
    int stid;
    char stname[15];
    char gender;
    float per;
};
int main()
{
    struct student s[5];
    int i;
    printf("Enter the student details\n");
    for(i=1;i<=5;i++)
    {
    
    printf("Enter the studentid  studentname  gender  and  percentage of the %dth student ",i);
    scanf("%d%s %c%f",&s[i].stid,s[i].stname,&s[i].gender,&s[i].per);
   for(i=1;i<=5;i++)
   {
     printf("%d\t%s\t%c\t%f\n",s[i].stid,s[i].stname,s[i].gender,s[i].per);
   }
    
}
