#include<stdio.h>
int main()
{
	int a,b;
    printf("enter 1st no");
    scanf("%d",&a);
        printf("enter 2nd no");
    scanf("%d",&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("after swapping %d and %d",a,b);
	
}
