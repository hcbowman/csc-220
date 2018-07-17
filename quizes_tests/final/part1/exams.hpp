#ifndef EXAMS_HPP
#define EXAMS_HPP

class Exams {

  private:
		std::string names;
		int grade;

  public:

		Exams(std::string n, int g) {
			names = n;
			grade = g;
		}
    ~Exams(){}

		void display();

};
#endif
