// U0924014�B�ӵq���v�Ҧ��A½�����s 
//5.24�L�F�| 
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k1=1,k2=-2;
	cout<<"�п�J�_��"<<endl;
	cin>>n;
	int count1=n;  //count1����L�P�����j�� 
	int count2=1;  //count2����Ů�
	for(int i=1;i<=n;i++){  //������ 
		if(i==1||i==n){
			for(int x=1;x<=n;x++){  //�Ĥ@�C�M�̫�@�C���r 
				cout<<"#";
			}
			cout<<endl;
		}else{
				cout<<"#";  //����ɤ��r 
			for(int a=3;a<=count2;a++){  //����Ů� 
				cout<<" ";
			}
			for(int b=1;b<=count1;b++){ //�L�P�� 
				cout<<"*";
			}
			for(int a=3;a<=count2;a++){  //�k��Ů� 
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
