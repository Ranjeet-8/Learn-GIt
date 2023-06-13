#include<iostream>
#include<thread>
#include<mutex>
#include<chrono>
using namespace std;

int myAmount =0;

mutex m;

void addMoney(){
	m.lock();
		++myAmount;
		cout<<myAmount<<" is incremented by thread :"<<this_thread::get_id()<<endl;
		this_thread::sleep_for(chrono::seconds(3));
	m.unlock();	
}


int main(){
	thread t1(addMoney);
	thread t2(addMoney);

	t1.join();
	t2.join();
	return 0;
}
