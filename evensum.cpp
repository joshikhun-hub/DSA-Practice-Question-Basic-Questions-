#include<iostream>
using namespace std;

int main(){
	int num,sum;
	cout<<"Enter the n even numbers:";
	cin>>num;
	
	for(int i=1;i<=num;i++){
		sum+=2*i;
		
	}
	cout<<"The sum of the "<<num<<" even numbers is "<< sum<<endl; 
	return 0;
}
