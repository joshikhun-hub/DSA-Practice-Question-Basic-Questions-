#include<iostream>
using namespace std;
int main(){
	int a,b,hcf,lcm;
	
	cout<<"Enter the first number=";
	cin>>a;
	cout<<"Enter the second number=";
	cin>>b;
	
	for(int i=1;i<=a && i<=b;i++){
		
		if(a%i==0 && b%i==0){
		hcf=i;
		
		}
	}
	cout<<"The HCF is: "<<hcf<<endl;

	//lcm=(a*b)/hcf;
	
	lcm=(a*b)/hcf;
    cout<<"The LCM is: "<<lcm;
	
	return 0;
}
