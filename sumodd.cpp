#include<iostream>
using namespace std;
int main(){
	int num, sum;
	cout<<"Enter the numbers of odd numbers:";
	cin>>num;
	
	for(int i=1;i<=num;i++){
		sum+=2*i-1;
	}
	
	cout<<"The sum of first "<<num<<" odd numbers is: "<< sum<<endl;
	
	return 0;
}
