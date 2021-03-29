#include <iostream>
#include <stdio.h>

using namespace std;


class Person {
	protected:
		string name;
		char gender;
	
	public:
		Person(){
		}
		void setName (string name){
		}
		void setGender (char gender){
		}
		string getName (){
			return name;
		}
		char getGender (){
			return gender;
		}
		
};

class Teacher : public Person {
	private:
		int nik;
		string faculty;
	
	public:
		void setNik (int nik){
		}
		int getNik (){
		}
		void setFaculty (string faculty){
		}
		string getFaculty (){
			return faculty;
		}
		void setData (){
		}
		void displayData(){
		}
		
};

class Student : public Person {
	private:
		int nim;
		string registration_number;
		string prodi;
		
	public:
		void setNim (int nim){
		}
		void setRegistrationNumber (string registration_number){
		}
		void setProdi (string prodi){
		}
		int getNim(){
		}
		string getRegistrationNumber(){
			return registration_number;
		}
		string getProdi(){
			return prodi;
		}
};

int main (){
	return 0;
}
