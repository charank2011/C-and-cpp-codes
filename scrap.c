#include <stdio.h>

int main() {
	// your code goes here
	int t,n;
	scanf("%d",&n);
	while(t--)
	{
	    scanf("%d",&n);
	    if(n%9==0)
	    printf("9\n");
	    else
	    printf("%d\n",n%9);
	}

}

