#ifndef CONTRACTOR_HPP
#define CONTRACTOR_HPP
#include"employee.hpp"

class Contractor : public Employee {
  private:
    int hours = 40;
  public:
    Contractor(std::string n, std::string a, std::string p, 
              std::string s, int r, int h) :
       Employee(n, a, p, s, r)
    {
       hours = h;
    }
	int getHours() const {return hours;}
	void setHours(const int Hours) {hours = Hours;}

  int pay();
};
#endif