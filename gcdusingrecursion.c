#include <stdio.h>  
int main()  
{  
register int a = 0;   
printf("%u",&a); // compile time error since we can not access the address of a register variable.   
}  
