#include<bits/stdc++.h>
using namespace std ;
void int_float(double  value ){
	double num = value ;
	int n  ;
	double res = 0 ; 
	n =  num ;
	res  = num - n  ; 
	if (res != 0 ){
		cout <<"float "<< n <<" "<< res <<endl ; 
	}else cout << "int "<< n << endl;	
}

int main() {
double f ; 
cin >> f ;
int_float(f);	
	
	

}
