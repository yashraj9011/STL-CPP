
#include <iostream>
#include<vector>
using namespace std;
int main() {
  
 int basic[3]={2,4,5};
 
 array<int,4> a={2,3,4,5};
 
 int size = a.size();
 
 for(int i=0;i<=size;i++)
 {
 	cout<<a[i]<<endl;
 }
 
 cout<<"element at 2nd index"<<a.at(2)<<endl;
 
  



}

