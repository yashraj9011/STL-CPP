#include<iostream>
using namespace std;
#include<array>

int main(){
int basic[4]={2,4,7};
array<int,4> a={1,2,5,6};

int size =a.size();

for(int i=0;i<size;i++)
{
	cout<<a[i]<<endl;
	}
	
cout<<"ele at index 2"<<a.at(2)<<endl;
}
