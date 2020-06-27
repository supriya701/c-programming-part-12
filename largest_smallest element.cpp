#include<stdio.h>
#include<limits.h>
int main()
{
	int arr[]={100,5,201,13,4,-8,12,91,3,56};
	int l,s,i;
	int arr_size=sizeof(arr)/sizeof(int);

s=INT_MAX;
l=INT_MIN;
for(i=0;i<arr_size;i++)
{
	if(s>arr[i])
	s=arr[i];
	if(l<arr[i])
	l=arr[i];
}
printf("smallest element is %d\n",s);
printf("largest element is %d",l);
}
