#include<iterator>
#include<iostream>
using namespace std;
#include<vector>
int main()
{
	vector<int> v={1,2,3,4,5};
	vector<int>::iterator it;
	
	for(it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<endl;
		
	}
}
