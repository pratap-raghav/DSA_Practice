#include<iostream>
using namespace std;

class mammals{
	public:
		void mammalTest(){
			cout<<"I am mammal"<<endl;
		}
};

class marineAnimals{
	public:
		void MarineTest(){
			cout<<"I am a marine animal"<<endl;
		}
};

class blueWhale : public mammals, public marineAnimals{
	public:
		void whaleTest(){
			cout<<"I belong to both the categories: Mammals as well as Marine Animals"<<endl;
		}
};

int main(){
	mammals m1;
	marineAnimals m2;
	blueWhale b1;
	cout<<"\n____Mammal____"<<endl;
	m1.mammalTest();
	cout<<"\n____Marine____"<<endl;
	m2.MarineTest();
	cout<<"\n____Blue Whale____"<<endl;
	b1.whaleTest();
	b1.mammalTest();
	b1.MarineTest();
	
	
	
	return(0);
}
