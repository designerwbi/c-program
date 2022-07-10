#include<iostream>
#include<list>
using namespace std;
void display(list<int> &list1)
{
	list<int> :: iterator itr;
	for(itr=list1.begin();itr!=list1.end();itr++)
	{
		cout<<*itr;
	}
}
int main()
{
	list<int> list1;
	list1.push_back(5);
	list1.push_back(10);
	list1.push_back(39);
	list1.push_back(33);
	display(list1);
//	list<int> :: iterator itr;
//	itr = list1.begin();
//	for(itr=list1.begin();itr!=list1.end();itr++)
//	{
//		cout<<*itr;
//	}
}
