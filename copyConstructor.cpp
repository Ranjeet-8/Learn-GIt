#include<iostream>

using namespace std;

class copyCon{
	private:
		int x;
		int y;
	public:
		copyCon(int _x=0,int _y=0) : x{_x}, y{_y} {}

		copyCon(const copyCon& op){
			x=op.x;
			y=op.y;
		}

		int getValueofX()
		{			return x;}
		int getValueofY()
		{			return y;}
};

int main(){
	
	copyCon c(2,3);

	copyCon c1(c);

	cout<<c1.getValueofX()<<" "<<c1.getValueofY()<<endl;

	return 0;
}

