#include <iostream>
using namespace std;
int main(){
	int num;
    cin>>num;
    int last=num%10;
    int first = (num-last)/10;
    
	if(last%first==0||first%last==0){
		cout<<"YES"<<endl;
	}	else{
		cout<<"NO"<<endl;
	}
}
