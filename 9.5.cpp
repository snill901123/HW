// U0924014劉承皓版權所有，請勿抄襲
//9.5一元二次方程式運算 
#include<bits/stdc++.h>
using namespace std;
class Quadratic{
	public:
		Quadratic(double x=1,double y=0,double z=0){  //constructor
			x!=0?a=x:a=1;
			b=y;
			c=z;
		}
		void add(Quadratic object){  //(a)add
			a+=object.a;
			b+=object.b;
			c+=object.c;
		}
		void subtract(Quadratic object){  //(b)subtract
			a-=object.a;
			b-=object.b;
			c-=object.c;
		}
		string toString(){   //(c)toString
			stringstream ss;
			string str,equation;
			ss<<a;
			ss>>str;
			equation+=str;
			equation+="x^2 + ";
			ss.clear();
			ss<<b;
			ss>>str;
			equation+=str;
			equation+="x + ";
			ss.clear();
			ss<<c;
			ss>>str;
			equation+=str;
			equation+=" = 0";
			return equation;
		}
		void solve(){   //(d)solve
			if(pow(b,2)-4*a*c>=0){
				double answer1,answer2;
				answer1=((-1*b)+sqrt(pow(b,2)-4*a*c))/(2*a);
				answer2=((-1*b)-sqrt(pow(b,2)-4*a*c))/(2*a);
				cout<<"The solutions are "<<answer1<<" and "<<answer2<<"\n";
			}else{
				cout<<"No Real Roots";
			}
		}
	private:
		double a,b,c;
};
int main(){
	Quadratic a(1,2,1),b(2,-5,2);
	cout<<"Equation_1 : "<<a.toString()<<"\n";
	cout<<"Equation_2 : "<<b.toString()<<"\n\n";
	a.add(b);
	cout<<"After Equation_1 + Equation_2\n";
	cout<<"Equation_1 : "<<a.toString()<<"\n\n";
	a.subtract(b);
	cout<<"After Equation_1 - Equation_2\n";
	cout<<"Equation_1 : "<<a.toString()<<"\n\n";
	cout<<"Equation_1 :";
	a.solve();
	cout<<"\n";
	cout<<"Equation_2 :";
	b.solve();
}
