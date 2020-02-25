#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &, int &, int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() here 
void shuffle(int &a,int &b, int &c, int &d){
	int k=a,m=b,n=c,o=d;
	int x[4]={k,m,n,o};
	int y[]={0,1,2,3};
	y[0] = rand()%4;
	while(1){
		y[1] = rand()%4;
		if(y[1] != y[0]) break;
	}
	while(1){
		y[2] = rand()%4;
		if((y[2] != y[0]) && (y[2] != y[1])) break;
	}
	while(1){
		y[3] = rand()%4;
		if((y[3]!=y[2])&&(y[3] != y[0]) && (y[3] != y[1])) break;
	}
	a=x[y[0]];
	b=x[y[1]];
	c=x[y[2]];
	d=x[y[3]];
}