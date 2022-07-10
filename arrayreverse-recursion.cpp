#include<iostream>
using namespace std;
void reversearray(int arr[],int start,int end)
{
	int temp;
	temp=arr[start];
	arr[start]=arr[end];
	arr[end]= temp;
	reversearray(arr,start+1,end-1);
}

int main()
{
	int arr[]={1,2,3,4,5};
	int len = sizeof(arr)/sizeof(arr[0]);
	reversearray(arr,0,len-1);
}
