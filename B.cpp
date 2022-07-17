#include <iostream>
using namespace std;
int main(){
	long long x,y,z;
	cin>>x>>y>>z;
	if(x>0&&y>0){
		if(x%z==0&&y%z==0){
		cout<<"Both"<<endl;
	}else if(x%z==0&&y%z!=0){
		cout<<"Memo"<<endl;
	}else if(x%z!=0&&y%z==0){
		cout<<"Momo"<<endl;
	}else if(x%z!=0&&y%z!=0){
		cout<<"No One"<<endl;
	}
	}
}
