#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Bag {

  protected:
    int size, width, length;


  public:

    Bag(int s, int w, int l);

    void add(int s, int w, int l);

    void print();

};

Bag::Bag() {

  size = 0;
  width = 0;
  length = 0;

}

void Bag::add(int s, int w, int l) {

  size = s;
  width = w;
  length = l;

}

void Bag::print() {


}


int main() {

  vector<MyClass> my_objects;


}
