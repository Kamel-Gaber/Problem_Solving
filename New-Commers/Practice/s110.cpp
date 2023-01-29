#include<bits/stdc++.h>
using namespace std ; 

int main(){
	long long a , c, b  ;
	
 cin>>a>>b>>c;
// mod = a b; 
 cout<<min(a , min(c,b))<<" "<<max(a,max(c,b));
}
