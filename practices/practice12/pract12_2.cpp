#include<iostream>
#include<vector>
#include<cstdlib>
#include<string>

using namespace std;

template <class T>
class Bag {

  private:
    vector<T> items;

  public:

    void add(T const&);
    void print();

};

template <class T>
void Bag<T>::add (T const& i) {
   items.push_back(i);
}

template <class T>
void Bag<T>::print() {

  unsigned int i;

  for (i=0; i < items.size(); i++)
    cout << items[i] << endl;
}


int main() {

  Bag<int> intItem;
  Bag<string> stringItem;

  intItem.add(30);
  intItem.add(45);
  stringItem.add("HEllo");
  intItem.add(3);
  stringItem.add("bye");

  intItem.print();
  stringItem.print();

  return 0;


}
