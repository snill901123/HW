// U0924014�B�ӵq���v�Ҧ��A½�����s 
//4.35
#include<bits/stdc++.h>
using namespace std;
int fac(int x);
double b(int n);
double c(int accuracy,int x);
int main(){
	//a �p�ⶥ��
	int n;
	cout<<"��J�n�p�ⶥ�����Ʀr"<<endl;
	cin>>n;
	cout<<n<<"!="<<fac(n)<<endl;
	
	//b  ��J��T�רæ��pe���� 
	double e;
	int accuracy;
	cout<<"��Je����T��"<<endl;
	cin>>accuracy;
	cout<<"e:"<<b(accuracy)<<endl;
	
	//c  ��J��T�רæ��pe^x����  
	double e_x;
	int c_accuracy,c_x;
	cout<<"�п�Je^x����T��"<<endl;
	cin>>c_accuracy;
	cout<<"�п�Jx��"<<endl;
	cin>>c_x;
	cout<<"e^"<<c_x<<"="<<c(c_accuracy,c_x);
}

int fac(int x){
	int sum=1,count=1;
	while(count!=x&&x!=0){
		count++;
		sum*=count;
	}
	return sum;
}
double b(int n){
	double e_sum=1;
	for(int i=1;i<=n;i++){
		e_sum+=1.0/fac(i);
	}
	return e_sum;
}
double c(int accuracy,int x){
	double c_sum=1;
	for(int i=1;i<=accuracy;i++){
		c_sum+=double(pow(x,i))/fac(i);
	}
	return c_sum;
}
