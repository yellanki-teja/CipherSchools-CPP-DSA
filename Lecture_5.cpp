#include<iostream>
using namespace std;
int main(){
	int a;
	int b;
	int c;
	int d;
	
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	
	
	
	cout<<(a>b && c>d)<<endl;
	//in c++ interprets true as 1
	cout<<(a>b || c>d);
  return 0;
	}