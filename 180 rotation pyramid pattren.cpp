#include<iostream>
using namespace std;
int main(){
//	half pyramid 180 rotation
/*
    *
   **
  ***
 ****
*****    
*/
for(int i=1;i<=4;i++){
	for(int j=1 ;j<=4;j++){
		if(j<=4-i){
					cout<<" ";
		}
		else{
			cout<<"*";
		}
		
	}
	cout<<endl;
}
}