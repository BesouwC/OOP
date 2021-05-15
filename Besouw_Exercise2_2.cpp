#include <iostream>
using namespace std;

class TollBooth{
	private:
	int car;
	double money;

public:
	TollBooth(){
		car = 0;
		money = 0;
}
	void payingCar(){
        car = car + 1;
        money = money + 0.5;
}
	void nopayCar(){
    	car = car + 1;
}
	void displayMoney(){
    	cout << "Money in TollBoth =  $" << money << endl << endl;
}
	void displayCar(){
        cout << "Cars Passed in TollBoth  = " << car << endl;
}
};

int main()
{
int Pilihan;
TollBooth tol;

do{
	cout << "1. Pay " << endl;
	cout << "2. Does not Pay " << endl;
	cout << "3. Exit : "<< endl;
	cout << "Choose : "; cin >> Pilihan;
		switch (Pilihan){
   			case 1:
    			tol.payingCar();
        		tol.displayCar();
        		tol.displayMoney();
        		break;
    		case 2:
    			tol.nopayCar();
    		    tol.displayCar();
    		    tol.displayMoney();
    		    break;
    		case 3:
    			tol.displayCar();
    			tol.displayMoney();
    		};
	}while(Pilihan!=3);

	return 0;
}
