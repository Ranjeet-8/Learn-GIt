#include<iostream>

using namespace std;

class Animal{
	public:
		virtual string speak() = 0;		
};

class Dog : public Animal{
	public:
		string speak(){
			return "woof";			
		}
};

class Cat : public Animal{
	public:
		string speak(){
			return "meow";
		}
};

class AnimalFactory{
	public:
	Animal* createAnimal(string type){
		if(type == "DOG"){			
			return new Dog();
		}
		else if(type == "CAT"){
			return new Cat(); 
		}			
		else{
			return nullptr;
		}
	}
};

int main(){
	AnimalFactory factory;

	Animal* Dog = factory.createAnimal("DOG");
	Animal* Cat = factory.createAnimal("CAT");


	cout<<Dog->speak()<<endl;
	cout<<Cat->speak()<<endl;
	return 0;
}
