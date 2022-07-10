#include<iostream>
using namespace std;
void duplicate_remove(int arr[],int n)
{
	int j=0;
	int temp[n];
	for(int i=0;i<n;i++)
		if(arr[i]!=arr[i+1])
		temp[j++]=arr[i];
	
	for(int i=0;i<j;i++)
	arr[i]=temp[i];
	
	for(int i=0;i<j;i++)
	cout<<arr[i];
}
int main()
{
	int arr[]={1,1,1,2,2,2,3,4,4,4,5,5,5};
	int len= sizeof(arr)/sizeof(arr[0]);
	duplicate_remove(arr,len);
}
