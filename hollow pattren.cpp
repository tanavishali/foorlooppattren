#include<iostream>
using namespace std;
int main(){
//	hollow rectangle pattren
/*
****
*  *
*  *
*  *
****
*/
int row,colom,i,j;
cin>>row>>colom;
for(i=1;i<=row;i++){
	for(j=1;j<=colom;j++){
		if(i==1 || i==row ||  j==1 || j==colom){
			cout<<"*";
		}
		else{
			cout<<" ";
		}
	}
	cout<<endl;
}
}