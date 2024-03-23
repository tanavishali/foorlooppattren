#include<iostream>
using namespace std;
int main(){
	int days=7,week=3;
	for(int i=1;i<=week;i++){
		cout<<"week:"<<i<<endl;
		for(int j=1;j<=days;j++){
			if(i==2){
				break;
			}
			cout<<"day: "<<j<<endl;
		}
		cout<<endl;
	}
	return 0;
}
