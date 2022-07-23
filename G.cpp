#include <iostream>
using namespace std;
int main(){
	long long eye,mouth,body,res;
	cin>>eye>>mouth>>body;
	if(eye==0||body==0){
		cout<<0<<endl;
	}else{
		if((mouth>=eye&&mouth>=body)||(mouth>=eye&&mouth<body)||(mouth<eye&&mouth>=body)){
			res=min(eye,body);
			cout<<res<<endl;
		}else if(mouth<eye&&mouth<body){
			res=mouth;
			eye-=mouth;
			body-=mouth;
			res+=min(eye/2,body);
			cout<<res<<endl;
		}
	}
}
