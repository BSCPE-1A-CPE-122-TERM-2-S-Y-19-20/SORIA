//LOGIC
#include <iostream>
#include<string.h>
using namespace std;
class logic{
	public:
		int p,q;
		void input();
		void conjunction();
		void disjunction();
		void negation();
		void conditional();
		void biconditional();
};

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	logic a;
	a.input();
	a.conjunction();
	a.disjunction();
	a.negation();
	a.conditional();
	a.biconditional();
	return 0;
}

void logic::input(){
	cout<<"Based number is 100"<<endl;
	cin>>p;
	cin>>q;
}

void logic::conjunction(){
	if(p>=100&&q>=100){
		cout<<"Conjunction:"<<"(p>=100&&q>=100)"<<endl;
		cout<<"p="<<p<<"   q="<<q<<endl;
		cout<<"   TRUE"<<endl;
	}
	else{
		cout<<"Conjunction:"<<"(p>=100&&q>=100)"<<endl;
		cout<<"p="<<p<<"   q="<<q<<endl;
		cout<<"   FAlSE"<<endl;
	}
}
void logic::disjunction(){
	if(p>=100||q>=100){
		cout<<"____________________________"<<endl;
		cout<<"Disjunction:"<<"(p>=100||q>=100)"<<endl;
		cout<<"p="<<p<<"   q="<<q<<endl;
		cout<<"   TRUE"<<endl;
	}
	else{
		cout<<"____________________________"<<endl;
		cout<<"Disjunction:"<<"(p>=100||q>=100)"<<endl;
		cout<<"p="<<p<<"   q="<<q<<endl;
		cout<<"   FALSE"<<endl;
	}
}
void logic::negation(){
	cout<<"_____________________________"<<endl;
	cout<<"Negation:"<<endl;
	cout<<"True statement become false"<<"(p>=100) and (q>=100)"<<endl;
	if(p>=100){
		cout<<"p="<<p<<endl;
		cout<<"p>=100 is true and its negation is FALSE"<<endl;
	}
	else{
		cout<<"p="<<p<<endl;
		cout<<"p>=100 is false and its negation is TRUE"<<endl;
	}
	if(q>=100){
		cout<<"q="<<q<<endl;
		cout<<"q>=100 is true and its negation is FALSE"<<endl;
	}
	else{
		cout<<"q="<<q<<endl;
		cout<<"q>=100 is false and its negation is TRUE"<<endl;
	}
}

void logic::conditional(){
	
	cout<<"_____________________________"<<endl;
	if(p<=100&&q<=100)
	{
		cout<<"Conditional Proposition: (p<=100&&q<=100)\n";
		cout<<"TRUE\n";
	}
	if(p<=100&&q>=100)
	{
		cout<<"Conditional Proposition: (p<=100&&q<=100)\n";
		cout<<"FALSE\n";
	}
	if(p>=100&&q<=100)
	{
		cout<<"Conditional Proposition: (p<=100&&q<=100)\n";
		cout<<"TRUE\n";
	}
	if(p>=100&&q>=100)
	{
		cout<<"Conditional Proposition: (p<=100&&q<=100)\n";
		cout<<"TRUE\n";
	}
}

void logic::biconditional(){
	
	cout<<"_____________________________"<<endl;
	if((p<=100&&q<=100)||(p>=100&&q>=100))
	{
		cout<<"\nBiconditional Proposition: (p<=100&&q<=100)\n";
		cout<<"TRUE\n";
	}
	else cout<<"\nBicondiotional Proposition: (p<=100&&q<=100)\nFALSE\n";
}
