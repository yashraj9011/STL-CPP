/*#include <iostream>
#include<array>
using namespace std;

int main() { 
  int basic[3] ={1,2,3};

  array<int,4> a = {1,2,3,4};
  int size = a.size();
  for(int i=0;i<size;i++ ){ 
    cout<<a[i]<<endl;
  }

  cout<<"Element at 2nd Index-> "<<a.at(2)<<endl;
  cout<<"First Element-> "<<a.front()<<endl;
  cout<<"last Element-> "<<a.back()<<endl;

}*/

//#include<bits/stdc++.h>
#include<iostream>
using namespace std;



template<class T>
class LinearArray{
	private:
		T *a;
		int n;
		int capacity;
	public:
		LinearArray(int size)
		{
			n=0;
			capacity=size;
			a=new T[capacity];
			
		}
		~LinearArray()
		{
			delete a;
		}
		int getcapacity(){
			return capacity;
		}
		int getelements(){
			return n;
		}
		void displayArray();
		void inputArray();
		
};
template <class T>
void LinearArray<T>::displayArray()
	{
		int i;
		cout<<endl;
		for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
		cout<<endl;
	}
	
template<class T>
void LinearArray<T>::inputArray()
{
	char choice;
	while(1){
		cout<<"entre element a["<<(n+1)<<"]:"<<endl;
		cin>>a[n++];
		cout<<"more element Y/N :";
		cin>>choice;
		if (choice=='Y' || choice =='y')
		continue;
		else 
		break;
	}
}
	
int main(){
	LinearArray<int> la(10);
	LinearArray<int> lb(13);
	LinearArray<int> lc(16);
	int ele,pos;
	cout<<"enter elem of array"<<endl;
	la.inputArray();
	cout<<"\n elements of array LA";
	la.displayArray();
	cout<<"\n enter new ele to insert";
	cin>>ele;
}


