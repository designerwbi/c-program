#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10,11};
	int start=0,end=sizeof(arr)/sizeof(arr[0]);
	while(start<=end)
	{
		arr[start]=arr[end];
		start++;
		end--;
	}
	for(int i=0;i<=10;i++)
	{
		cout<<arr[i];
	}
}

