#include<bits/stdc++.h>
using namespace std ;
void comprasion(int a , char c , int b  ){
	int val1 = a , val2 = b ;
	char ch = c ;
	if ( ch == '>'){
		if(a > b ){
			cout << "Right";
			
		}else {
			cout <<"Wrong";
		
		}
	}else if (ch == '<'){
		if(a < b ){
			cout << "Right";
			
		}else {
			cout <<"Wrong";
			 
		}	
		}else if (ch == '='){
				if(a == b ){
			cout << "Right";
		 
		}else {
			cout <<"Wrong";
		
		}
		}
	
}

int main() {
int a , b ;
char c ; 
cin>>a>>c >> b ;
	comprasion(a,c , b);
	
	

}
