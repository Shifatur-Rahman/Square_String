#include <iostream>
#include <string>
using namespace std;
int main(){

int t,sz,limit;
cin>>t;

string s1,s2,s3;

while(t--){
	cin>>s1;
    sz = s1.length();
	limit = sz/2;

	s2 = s1.substr(0, limit);
	s3 = s1.substr(limit);
	if(s2 == s3){
		cout<<"YES"<<endl;
	} else{
	    cout<<"NO"<<endl;
	}

}





}
