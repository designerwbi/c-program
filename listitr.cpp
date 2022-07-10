#include<iostream>
#include<list>
using namespace std;
void display()
{
	
}
int main()
{
	list<int> l1;
	l1.remove(9);
//	l1.pop_back();
	l1.sort();
//	l1.pop_front();
	list<int> :: iterator itr;
	for(itr=l1.begin();itr!=l1.end();itr++)
	{
		cout<<*itr;
	}
}
