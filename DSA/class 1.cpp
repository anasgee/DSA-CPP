#include <iostream>
using namespace std;

class OOP{
	private:
		int a, b ,c;
	public:
		int d,e;
	void setData ( int a1,int b1,int c1)
	{		
		a=a1;
		b=1;
		c=c1;
	}
	void getData ( ){
		cout<<"The value of a is : "<<a<<endl;
		cout<<"The value of b is : "<<b<<endl;
		cout<<"The value of c is : "<<c<<endl;
		cout<<"The value of d is : "<<d<<endl;
		cout<<"The value of e is : "<<e<<endl;
	}
};


int main(){
	OOP o;
	o.d=10;
	o.e=5;
	o.setData(1,5,6);
	o.getData();
return 0;
}
