#include<iostream>
using namespace std;
int main()
{
	int arr[]={-2,3,5,-4,-7,9,11,23,-10};
	int left=0,right=sizeof(arr)/sizeof(arr[0]);
	int len=sizeof(arr)/sizeof(arr[0]);
	while(left<right)
	{
		while(arr[left]<0)left++;
		while(arr[right]>0)right--;
		if(left>right)break;
		int temp=arr[left];
		arr[left]=arr[right];
		arr[right]=temp;
	}
	for(int i=0;i<len;i++)
	{
		cout<<arr[i];
	}
}
