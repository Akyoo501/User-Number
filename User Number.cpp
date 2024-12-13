#include <iostream>
using namespace std;

int main(){
	int number[10];
	int n;
	
	cout<<"Enter your Ten favorite Numbers: "<<endl;
	for(n=0; n<10; n++){
		cin>>number[n];
	}
	cout<<"Your Favorite Numbers is: ";
	for(n=0; n<10; n++){
		cout<<number[n]<<" ";
	}
	
	return 0;
}
