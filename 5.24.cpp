// U0924014劉承皓版權所有，翻版必究 
//5.24印沙漏 
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k1=1,k2=-2;
	cout<<"請輸入奇數"<<endl;
	cin>>n;
	int count1=n;  //count1控制印星號的迴圈 
	int count2=1;  //count2控制空格
	for(int i=1;i<=n;i++){  //控制行數 
		if(i==1||i==n){
			for(int x=1;x<=n;x++){  //第一列和最後一列井字 
				cout<<"#";
			}
			cout<<endl;
		}else{
				cout<<"#";  //左邊界井字 
			for(int a=3;a<=count2;a++){  //左邊空格 
				cout<<" ";
			}
			for(int b=1;b<=count1;b++){ //印星號 
				cout<<"*";
			}
			for(int a=3;a<=count2;a++){  //右邊空格 
				cout<<" ";
			}
			cout<<"#"<<endl;
		}
		if(count1==1){
			k2*=-1;
		}
		if(count2==n/2+1){
			k1*=-1;
		}
		count1+=k2;
		count2+=k1;
	}
} 
