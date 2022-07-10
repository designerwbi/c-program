#include<iostream>
using namespace std;
int main()
{
	int arr[]={0,0,0,0,1,2,1,2,1,2,1,2,
	5,4,3,2,3,1,1,2,3,4,5,6,7,8
	};
	int count1=0;
	int count2=0;
	int count0=0;
	int n = sizeof(arr) / sizeof(arr[0]);
	for(int i=0;i<n;i++)
	{if(arr[i]==0)count0++;
	if(arr[i]==1)count1++;
	if(arr[i]==2)count2++;}
	
	for(int i=0;i<count0;i++)
	arr[i]=0;
	for(int i=count0;i<count1+count0;i++)
	arr[i]=1;
	for(int i=count0+count1;i<n;i++)
	arr[i]=2;
	for(int i=0;i<n;i++)
	cout<<arr[i];
//	cout<<"0:-"<<count0<<"times"<<endl;
//	cout<<"1:-"<<count1<<"times"<<endl;
//	cout<<"2:-"<<count2<<"times"<<endl;
}
