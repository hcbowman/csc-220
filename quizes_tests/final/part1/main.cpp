#include<iostream>
#include"exams.hpp"

using namespace std;

void print_exam(StaffMember * s) {
  s->display();
}

int main() {
  int i;

  Exams * exam_submission[5];

  exam_submission[0] = new Exams("Hunter", 100);
  exam_submission[1] = new Exams("Joe", 95);
  exam_submission[2] = new Exams("Timmy", 85);
  exam_submission[3] = new Exams("Jimbo", 55);
  exam_submission[4] = new Exams("John", 90);

  for(i=0;i<5;i++)  {
    cout <<"\nExam " << i << ": " << endl;
    print_exam(exam_submission[i]);
  }

  cout << "Done!" << endl;

  return 0;
}
