// U0924014劉承皓版權所有，翻版必究
//4.26印圖型 
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){  //i表示第幾列 
		if(i==1||i==n){
			for(int a=1;a<=n;a++){  //印上邊界與下邊界的迴圈 
				cout<<"*";
			}
			cout<<endl;
		}else{
			cout<<"*"; //頭 
			for(int b=1;b<=n-2;b++){  //印空格的迴圈 
				cout<<" ";
			}
			cout<<"*"<<endl; //尾 
		}
	}
}
