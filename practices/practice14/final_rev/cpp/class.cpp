#include<iostream>
//#include<string.h>
//#include<stdlib.h>
using namespace std;


class Review {
    private:
        //char * str;
        string str;
        int len;
        int * num;

    public:
        Review(int, string s);
        //~Review();
        void print ();
};

Review::Review(int x, string s) {
    str = s;
    len = x;
    num = new int[len];
    for(int ii=0;ii<len;ii++) {
        num[ii] = ii;
    }

}

void Review::print () {
    cout << "Review " << str << endl;
    for(int ii=0;ii<len;ii++) {
        cout << num[ii] << " ";
    }
    cout << endl;
}

int main() {
    Review m(5, "Name");
    m.print();
}
