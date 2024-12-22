#include <stdio.h>
int main() {
    int n=153;
    int temp=n;
    int p=0,result;
	while(n>0)
	{
		int rem = n%10;
		result=result+rem*rem*rem;
		int originalnum=originalnum/10;
	}
	if(result==n)
		printf(" is an armstrong number");
    else
    printf(" is not an armstrong number");
   return 0;
}

