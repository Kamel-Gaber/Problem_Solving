#include<bits/stdc++.h>
using namespace std ;
int main (){
	int num1 , num2 , num3 ;
	cin>> num1>>num2>>num3 ;
	if ((num1>=num2)&&(num1>=num3)){//5 2 3 
	 
		if (num2>num3)
		cout<<num3<<" "<<num1; 
		else 
		cout<<num2<<" "<<num1;
	
	         }
	else if ((num2>=num1)&&(num2>=num3)){
		if (num1>num3)
		cout<<num3<<" "<<num2; 
		else 
		cout<<num1<<" "<<num2;
	}
	else if ((num3>=num2)&&(num3>=num1))
	if (num2>num1)
		cout<<num1<<" "<<num3; 
		else 
		cout<<num2<<" "<<num3;
	 
}
