// U0924014劉承皓版權所有，翻版必究 
//8.12
#include<bits/stdc++.h>
using namespace std;
void moveTortoise(int*);
void moveHare(int*);
int main(){
	bool game=1;
	int count=1,tortoise=1,hare=1;
	srand(time(NULL));
	cout << "ON YOUR MARK, GET SET\nBANG !!!!!\nAND THEY'RE OFF!!!!!\n";
	cout<<"T\nH\n";
	while(game){
		moveTortoise(&tortoise);
		moveHare(&hare);
		cout<<"\nAfter movement "<<count<<"\n";
		if(tortoise>=70&&hare>=70){  //抵達終點 
			cout<<"\nIt's a tie.";
			break;
		}else if(hare>=70){
			cout<<"\nHARE wins. Yuck.";
			break;
		}else if(tortoise>=70){
			cout<<"\nTORTOISE WINS!!!";
			break;
		}
		for(int i=1;i<=70;i++){  //display Tortoise's 70-position
			i==tortoise?cout<<"T":cout<<"=";
		}
		cout<<"\n";
		for(int i=1;i<=70;i++){  //display Hare's 70-position
			i==hare?cout<<"H":cout<<"=";
		}
		if(tortoise==hare){  //OUCH
			cout<<"\nOUCH!!!";
		}
		count++;
	}
}
void moveTortoise(int* position){
	int i=rand()%50+1;
	if(i<=25){        //Fast plod
		*position=*position+3;
	}else if(i<=33){  //Slip
		*position=*position-6;
	}else{
		*position=*position+1;  //Slow plod
	}
	if(*position<=0){ //secure position>0
		*position=1;
	}
}
void moveHare(int* position){
	int i=rand()%50+1;
	if(i<=19){        //Sleep
	
	}else if(i<=27){  //Big hop
		*position=*position+11;
	}else if(i<=35){  //Big slip
		*position=*position-9;  
	}else if(i<=45){  //Small hop
		*position=*position+1;
	}else{            //Small slip
		*position=*position-2;
	}
	if(*position<=0){ //secure position>0
		*position=1;
	}
}
