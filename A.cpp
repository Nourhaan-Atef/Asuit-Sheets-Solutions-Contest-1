#include <iostream>
using namespace std;
int main(){
	int x,y;;
	double price,p;
    cin>> x>>p;
    y = 100-x;
    price= (p / y)*x;
    price +=p;
	printf("%0.2f",price);
}
