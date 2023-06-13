#include <iostream>

using namespace std;

class Singleton{
    private:
        static Singleton* instances;
        int data;
        Singleton(){
            data = 0;
        }
    public:
        static Singleton* getInstances(){
            if(instances == nullptr){
                instances = new Singleton();
            }
            return instances;
        }
        
        void setValue(int x){
            data = x;
        }
        
        int getValue(){
            return data;
        }
};

Singleton* Singleton::instances = nullptr;

int main(){
        Singleton* i = Singleton::getInstances();
        
        i->setValue(5);
        
        cout<<i->getValue()<<endl;
	return 0;
}
