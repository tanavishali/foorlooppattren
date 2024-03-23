#include<iostream>
using namespace std;
int main(){
	/*
	
	****
	***
	**
	*
	
	*/
//	inverted half pyramid
//for(int i=4;i>=1;i--){
//	for(int j=1;j<=i;j++){
//		cout<<"*";
//	}
//	cout<<endl;
	for(int i=1;i<=4;i++){
		for(int j=4;j>=i;j--){
			cout<<"*";
		}
		cout<<endl;
	}

}
