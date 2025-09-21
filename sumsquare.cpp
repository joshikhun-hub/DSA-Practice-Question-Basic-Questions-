#include<iostream>
using namespace std;
int main(){
	int num, sum;
	cout<<"Enter the numbers of digit:";
	cin>>num;
	
	for(int i=1;i<=num;i++){
		sum+=i*i;
	}
	cout<<"the sum of the first "<<num<<" square of there own is :"<<sum<<endl;
	return 0;
}
