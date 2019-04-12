#include<iostream>
using namespace std;

void fn1(){
	static int n=0;
	n++;
	cout<<"n="<<n<<endl;
}

int main(){
	int i;
	for(i=0;i<10;i++){
	fn1();
	}

	return 0;
}