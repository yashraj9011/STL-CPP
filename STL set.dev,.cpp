#include<set>
#include<iostream>
using namespace std;

int main()
{
	set<int> s={1,2,3,4,5,6};
/*	for(auto it:s){
		cout<<it;
	}*/
	for(auto it=s.begin();it!=s.end();it++)
	{
		cout<<*it;
	}
}
