//midterm

#include <iostream>
#include <stdio.h>

using namespace std;
class Nilai{
	private:
		int Assignment,Quiz, Attendance,  Midterm, Finalterm, score;
		string grade;
		
	public:	
		void first(int assingment, int quiz, int attendance, int midterm, int finalterm);
		void display(int a);
		void last();
};

void Nilai::first(int assignment, int quiz, int attendance, int midterm, int finalterm){
	Assignment = (assignment*20)/100;
	Quiz = (quiz*10)/100;
	Attendance = (attendance*10)/100;
	Midterm = (midterm*30)/100;
	Finalterm = (finalterm*30)/100;
}


void Nilai::last(){
	score = Assignment + Attendance + Quiz + Midterm + Finalterm;

	if (score >= 91 && score <=100){
		grade = "A";
	}
	else if (score >= 85 && score <=90){
		grade = "A-";
	}
	else if (score>= 82 && score <=84){
		grade = "B+";
	}
	else if (score>= 78 && score <=81){
		grade = "B";
	}
	else if (score>= 75 && score <=77){
		grade = "B-";
	}
	else if (score>= 70 && score <=74){
		grade = "C+";
	}
	else if (score>= 67 && score <=69){
		grade = "C";
	}
	else if (score>= 60 && score <=66){
		grade = "C-";
	}
	else if (score>= 40 && score <=59){
		grade = "D";
	}
	else if (score>= 0 && score <=39){
		grade = "F";
}
}
void Nilai::display(int a){
	cout << a << "\t" << score << "(" << grade << ")" << endl;
}

int main()
{
	int Total,total1,assignment,quiz,attendance,midterm,finalterm;
	cout << " ==================" << endl;
	cout << " = Grading System =" << endl;
	cout << " ==================" << endl;		
	cout << "Enter the number of Students : "; cin >> total1;
		
	Nilai student[total1+1];

	for(int i=0; i<total1; i++) {
		cout << "Masukan nilai student " << i+1 << endl;
		cout << "Assignment\t:"; 	cin >> assignment;
		cout << "Quiz\t\t:"; 		cin >> quiz;
		cout << "Attendance\t:"; 	cin >> attendance;
		cout << "Mid Exam\t:"; 		cin >> midterm;
		cout << "Final Exam\t:"; 	cin >> finalterm;
		student[i].first(assignment,quiz,attendance,midterm,finalterm);	
		student[i].last();
	}
	

	
	cout << " ================" << endl;
	cout << " =Student  Grade=" << endl;
	cout << " ================" << endl;
	
	for(int j=0; j<total1; j++){
		student[j].display(j+1);
	}
	
	
	return 0;
}
