#ifndef EXAMS_HPP
#define EXAMS_HPP

class Exams {

  private:
		std::string names;
		int grade;

  public:

		Secret(std::string n, int g) {
			names = n;
			grade = g;
		}

		void display();

};
#endif
