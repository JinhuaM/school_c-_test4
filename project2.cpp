#include<iostream>
using namespace std;

class Cat{
public:
	Cat(int maxNum):max(maxNum){
	numOfCats++;
	}
	Cat(Cat &c){
		max=c.max;
		numOfCats++;
	}

	~Cat(){}

	static int getNumOfCat(){return numOfCats;}

private:
	int max;
	static int numOfCats;
};

int Cat::numOfCats=0;

int main(){
	
	int i;
	for(i=0;i<5;i++){
		Cat a(i);
		cout<<"there are "<<a.getNumOfCat()<<" cats alive!"<<endl;
	}
}