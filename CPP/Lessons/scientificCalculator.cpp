#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
void mainMenu();
void arithControl();
void trigonoControl();
void inTriginiControl();
void expoControl();
void logControl();
void permuControl();
void combiControl();
void factControl();
double answer = NULL;

void printInstructions(){
	cout<<"......INSTRUCTIONS FOR CALCULATOR......"<<endl<<endl;
	cout<<"* All the trigonometric functions accept values in degrees."<<endl;
	cout<<"* Subtraction = Number 1 - Number 2"<<endl;
	cout<<"* Division = Number 1 / Number 2"<<endl;
	cout<<"* For trigonometric inverse function the input in required in 'Num1/Num2'."<<endl;
	cout<<"The resulted answer can be used for further operations."<<endl;
}

class arithOperations{
	float a, b;
	public:
		void getArithVar(){
			cout<<"\nNumber 1: ";
			cin>>a;
			cout<<"Number 2: ";
			cin>>b;
		}
		void ansExists(){
			int ansEx;
			if (answer == NULL){
				getArithVar();
			}
			else{
				cout<<"Do you want to use the previous answer(0/1): ";
				cin>>ansEx;
				switch(ansEx){
					case 1:
						a = answer;
						cout<<"Enter Number: ";
						cin>>b;
						break;
					case 0:
						getArithVar();
						break;
					default:
						cout<<"Please enter a valid input."<<endl;
				}
			}
		}
		void addition(){
			cout<<"Addition"<<endl;
			ansExists();
			answer = a+b;
			cout<<endl<<a<<" + "<<b<<" = "<<answer; 
		}
		void subtraction(){
			cout<<"Subtraction"<<endl;
			ansExists();
			answer = a-b;
			cout<<endl<<a<<" - "<<b<<" = "<<answer; 
		}
		void multiplication(){
			cout<<"Multiplication"<<endl;
			ansExists();
			answer = a*b;
			cout<<endl<<a<<" * "<<b<<" = "<<answer; 
		}
		void divide(){
			cout<<"Division"<<endl;
			ansExists();
			if(b!=0){
				answer = a/b;
				cout<<endl<<a<<" / "<<b<<" = "<<answer; 
			}
			else{
				cout<<endl<<"divideByZeroError";
			}
		}
		~arithOperations(){
		}
};

class trigonoOperations{
	double angle;
	public:
		void getTrigonoVar(){
			cout<<"Enter Angle in Degree: ";
			cin>>angle;
		}
		void ansExists(){
			int ansEx;
			if (answer == NULL){
				getTrigonoVar();
			}
			else{
				cout<<"Do you want to use the previous answer(0/1): ";
				cin>>ansEx;
				switch(ansEx){
					case 1:
						angle = answer;
						break;
					case 0:
						getTrigonoVar();
						break;
					default:
						cout<<"Please enter a valid input."<<endl;
				}
			}
		}
		void sinx(){
			cout<<"\n....Sine...."<<endl;
			ansExists();
			answer = sin((angle*22)/(180*7));
			cout<<"sin("<<angle<<"): "<<answer;
		}
		void cosx(){
			cout<<"\n....Cosine...."<<endl;
			ansExists();
			answer = cos((angle*22)/(180*7));
			cout<<"cos("<<angle<<"): "<<answer;
			
		}
		void tanx(){
			cout<<"\n....Tangent...."<<endl;
			ansExists();
			answer = tan((angle*22)/(180*7));
			cout<<"tan("<<angle<<"): "<<answer;
		}
		void cosecx(){
			cout<<"\n....Cosecant...."<<endl;
			ansExists();
			answer = 1/(sin((angle*22)/(180*7)));
			cout<<"cosec("<<angle<<"): "<<answer;
		}
		void secx(){
			cout<<"\n....Secant...."<<endl;
			ansExists();
			answer = 1/(cos((angle*22)/(180*7)));
			cout<<"sec("<<angle<<"): "<<answer;
			
		}
		void cotx(){
			cout<<"\n....Cotangent...."<<endl;
			ansExists();
			answer = 1/(tan((angle*22)/(180*7)));
			cout<<"cot("<<angle<<"): "<<answer;
		}
		~trigonoOperations(){
		}
};

class inTrigonoOperations{
	double num, denom;
	public:
		void getInTrigonoVar(){
			cout<<"Enter Numerator: ";
			cin>>num;
			cout<<"Enter Denominator: ";
			cin>>denom;
		}
		void ansExists(){
			int ansEx;
			if (answer == NULL){
				getInTrigonoVar();
			}
			else{
				cout<<"Do you want to use the previous answer(0/1): ";
				cin>>ansEx;
				switch(ansEx){
					case 1:
						num = answer;
						denom = 1;
						break;
					case 0:
						getInTrigonoVar();
						break;
					default:
						cout<<"Please enter a valid input."<<endl;
				}
			}
		}
		void inSinx(){
			cout<<"\n....Sine Inverse...."<<endl;
			cout<<"For Sine Inverse the input in required in 'Num1/Num2'."<<endl;
			ansExists();
			answer = ((asin(num/denom))*180*7)/22;
			cout<<"SinInverse("<<num<<" / "<<denom<<"): "<<asin(num/denom)<< " radians or " <<answer<< " degrees."<<endl;
		}
		void inCosx(){
			cout<<"\n....Cosine Inverse...."<<endl;
			cout<<"For CosInverse the input in required in 'Num1/Num2'."<<endl;
			ansExists();
			answer = ((acos(num/denom))*180*7)/22;
			cout<<"CosInverse("<<num<<" / "<<denom<<"): "<<acos(num/denom)<< " radians or " <<answer<< " degrees."<<endl;
			
		}
		void inTanx(){
			cout<<"\n....Tangent Inverse...."<<endl;
			cout<<"For TanInverse the input in required in 'Num1/Num2'."<<endl;
			ansExists();
			answer = ((atan(num/denom))*180*7)/22;
			cout<<"TanInverse("<<num<<" / "<<denom<<"): "<<atan(num/denom)<< " radians or " <<answer<< " degrees."<<endl;
		}
		~inTrigonoOperations(){
		}
};

class logarithmic{
	double arg, base;
	public:
		void getArg(){
			cout<<"Enter Argument: ";
			cin>>arg;
		}
		void getBase(){
			cout<<"Enter Base: ";
			cin>>base;
		}
		void ansExists(){
			int ansEx;
			if (answer == NULL){
				getArg();
			}
			else{
				cout<<"Do you want to use the previous answer(0/1): ";
				cin>>ansEx;
				switch(ansEx){
					case 1:
						arg = answer;
						break;
					case 0:
						getArg();
						break;
					default:
						cout<<"Please enter a valid input."<<endl;
				}
			}
		}
		void getLogBaseE(){
			cout<<"\n....Log(Argument) to base e...."<<endl;
			ansExists();
			answer = log(arg);
			cout<<"Log("<<arg<<") to base e: "<<answer<<endl;
		}
		void getLogBase10(){
			cout<<"\n....Log(Argument) to base 10...."<<endl;
			ansExists();
			answer = log10(arg);
			cout<<"Log("<<arg<<") to base 10: "<<answer<<endl;
		}
		void getLogBaseCustom(){
			cout<<"\n....Log(Argument) to base x...."<<endl;
			ansExists();
			getBase();
			answer = log(arg)/log(base);
			cout<<"Log("<<arg<<") to base "<<base<<": "<<answer<<endl;
		}
		~logarithmic(){
		}
};

class exponential{
	double pwr, base;
	public:
		void getPwr(){
			cout<<"Enter Power: ";
			cin>>pwr;
		}
		void getBase(){
			cout<<"Enter Base: ";
			cin>>base;
		}
		void ansExists(){
			int ansEx;
			if (answer == NULL){
				getBase();
			}
			else{
				cout<<"Do you want to use the previous answer(0/1): ";
				cin>>ansEx;
				switch(ansEx){
					case 1:
						base = answer;
						break;
					case 0:
						getBase();
						break;
					default:
						cout<<"Please enter a valid input."<<endl;
				}
			}
		}
		void getEToPower(){
			cout<<"\n....e to the power x...."<<endl;
			getPwr();
			cout<<"e to the power "<<pwr<<": "<<exp(pwr)<<endl;
		}
		void getXToPowerE(){
			cout<<"\n....x to the power e...."<<endl;
			ansExists();
			cout<<base<<" to the power e: "<<pow(base, exp(1))<<endl;
		}
		void getXToPowerA(){
			cout<<"\n....x to the power a...."<<endl;
			ansExists();
			getPwr();
			cout<<base<<" to the power "<<pwr<<": "<<pow(base, pwr)<<endl;
		}
		~exponential(){
		}
};

class pAndC{
	float n, r, num;
	public:
		void getNR(){
			cout<<"n: ";
			cin>>n;
			cout<<"r: ";
			cin>>r;
		}
		void getFactNum(){
			cout<<"Enter Number: ";
			cin>>num;
		}
		void factorial(){
			cout<<"Factorial"<<endl;
			int j, fact = 1;
			
			getFactNum();
			for(j=1; j<=num; j++){
				fact = fact*j;
			}
			answer = fact;
			cout<<"Factorial of "<<num<<": "<<answer<<endl;
		}
		double fact(double token){
			int j, fact = 1;
			for(j=1; j<=token; j++){
				fact = fact*j;
			}
			return fact;
		}
		void nPr(){
			cout<<"Permutation"<<endl;
			getNR();
			answer = (fact(n))/(fact(n-r));
			cout<<"nPr : "<<n<<"P"<<r<<": "<<answer;
		}
		void nCr(){
			cout<<"Combination"<<endl;
			getNR();
			answer = (fact(n))/((fact(r))*(fact(n-r)));
			cout<<"nCr : "<<n<<"C"<<r<<": "<<answer;
		}
		~pAndC(){
		}
};


void mainMenu(){
	int mMChoice;
	cout<<"\n\n----------------------X----------------------\n\nCalculator Operations:"<<endl;
	cout<<"1. Arithmetic Operations"<<endl;
	cout<<"2. Trigonometric Operations"<<endl;
	cout<<"3. Inverse Trigonometric Operations"<<endl;
	cout<<"4. Logarithmic Operations"<<endl;
	cout<<"5. Exponential Operations"<<endl;
	cout<<"6. Permutation(nPr)"<<endl;
	cout<<"7. Combination(nCr)"<<endl;
	cout<<"8. Factorial(r!)"<<endl;
	cout<<"9. Exit"<<endl;
	cout<<endl<<"Enter Choice: ";
	cin>>mMChoice;
	
	switch(mMChoice){
		case 1:
			arithControl();
			break;
		case 2:
			trigonoControl();
			break;
		case 3:
			inTriginiControl();
			break;
		case 4:
			logControl();
			break;
		case 5:
			expoControl();
			break;
		case 6:
			permuControl();
			break;
		case 7:
			combiControl();
			break;
		case 8:
			factControl();
			break;
		case 9:
			cout<<"Exiting..."<<endl;
			exit(0);
		default:
			cout<<"Please enter a valid input."<<endl;
	}
}

void arithControl(){
	arithOperations a1;
	int ach;
	cout<<"\nArithmetic Operations: "<<endl;
	cout<<"1. Addition"<<endl;
	cout<<"2. Subtraction"<<endl;
	cout<<"3. Multiplication"<<endl;
	cout<<"4. Division"<<endl;
	cout<<"5. Exit"<<endl;
	cout<<"\nEnter Choice: ";
	cin>>ach;
	switch(ach){
		case 1:
			a1.addition();
			break;
		case 2:
			a1.subtraction();
			break;
		case 3:
			a1.multiplication();
			break;
		case 4:
			a1.divide();
			break;
		case 5:
			cout<<"Returning to the Main Menu..."<<endl;
			break;
		default:
			cout<<"Please enter a valid input."<<endl;
	}
	getch();
}

void trigonoControl(){
	trigonoOperations t1;
	int tch;
	cout<<"\nTrigonometric Operations: "<<endl;
	cout<<"1. Sin(x)"<<endl;
	cout<<"2. Cos(x)"<<endl;
	cout<<"3. Tan(x)"<<endl;
	cout<<"4. Cot(x)"<<endl;
	cout<<"5. Sec(x)"<<endl;
	cout<<"6. Cosec(x)"<<endl;
	cout<<"7. Exit"<<endl;
	cout<<"\nEnter Choice: ";
	cin>>tch;
	switch(tch){
		case 1:
			t1.sinx();
			break;
		case 2:
			t1.cosx();
			break;
		case 3:
			t1.tanx();
			break;
		case 4:
			t1.cotx();
			break;
		case 5:
			t1.secx();
			break;
		case 6:
			t1.cosecx();
			break;
		case 7:
			cout<<"Returning to the Main Menu..."<<endl;
			break;
		default:
			cout<<"Please enter a valid input."<<endl;
	}
	getch();
	
}

void inTriginiControl(){
	inTrigonoOperations it1;
	int ach;
	cout<<"\nTrigonometric Operations: "<<endl;
	cout<<"1. Sin Inverse (x)"<<endl;
	cout<<"2. Cos Inverse (x)"<<endl;
	cout<<"3. Tan Inverse (x)"<<endl;
	cout<<"4. Exit"<<endl;
	cout<<"\nEnter Choice: ";
	cin>>ach;
	switch(ach){
		case 1:
			it1.inSinx();
			break;
		case 2:
			it1.inCosx();
			break;
		case 3:
			it1.inTanx();
			break;
		case 4:
			cout<<"Returning to the Main Menu..."<<endl;
			break;
		default:
			cout<<"Please enter a valid input."<<endl;
	}
	getch();
}

void expoControl(){
	exponential e1;
	int ech;
	cout<<"\Exponential Operations: "<<endl;
	cout<<"1. e to the power x"<<endl;
	cout<<"2. x to the power e"<<endl;
	cout<<"3. x to the power a"<<endl;
	cout<<"4. Exit"<<endl;
	cout<<"\nEnter Choice: ";
	cin>>ech;
	switch(ech){
		case 1:
			e1.getEToPower();
			break;
		case 2:
			e1.getXToPowerE();
			break;
		case 3:
			e1.getXToPowerA();
			break;
		case 4:
			cout<<"Returning to the Main Menu..."<<endl;
			break;
		default:
			cout<<"Please enter a valid input."<<endl;
	}
	getch();
}

void logControl(){
	logarithmic l1;
	int lch;
	cout<<"\nLogarithmic Operations: "<<endl;
	cout<<"1. Log(Argument) to base e"<<endl;
	cout<<"2. Log(Argument) to base 10"<<endl;
	cout<<"3. Log(Argument) to base x"<<endl;
	cout<<"4. Exit"<<endl;
	cout<<"\nEnter Choice: ";
	cin>>lch;
	switch(lch){
		case 1:
			l1.getLogBaseE();
			break;
		case 2:
			l1.getLogBase10();
			break;
		case 3:
			l1.getLogBaseCustom();
			break;
		case 4:
			cout<<"Returning to the Main Menu..."<<endl;
			break;
		default:
			cout<<"Please enter a valid input."<<endl;
	}
	getch();
}

void permuControl(){
	pAndC p1;
	p1.nPr();
	getch();
}

void combiControl(){
	pAndC c1;
	c1.nCr();
	getch();
}

void factControl(){
	pAndC f1;
	f1.factorial();
	getch();
}

int main(){
	printInstructions();
	while(1){
		mainMenu();
	}
	return 0;
}
