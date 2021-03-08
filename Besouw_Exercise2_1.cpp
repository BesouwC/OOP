//exercise #2 
//number 1

#include <stdio.h>
#include <iostream>
using namespace std;
class Employee{
 private:
  int emp_num;
  float emp_comp;
 public:
	Employee(){
			emp_num = 0;
			emp_comp = 0;
		}
		
		void input_num(int number){
			emp_num = number;
		}
		
		void input_comp(float compensation){
			emp_comp = compensation;
		}
 	  void display(){
   cout << "Employee number:  " << emp_num << endl;
   cout << "Employee compensation: " << emp_comp << endl;
  }
};
int main(){
	int number;
	float compensation;
	
	Employee info[5];
	
	for(int i=1; i<=3; i++){
		cout << "Enter Employee Number: "; cin >> number;
		info[i].input_num(number);
		cout << "Enter Employee compensation: "; cin >> compensation;
		info[i].input_comp(compensation);
	}
	
	for(int j=1;j<=3; j++){
		info[j].display();
		cout << endl;
	}
	
	return 0;
}
