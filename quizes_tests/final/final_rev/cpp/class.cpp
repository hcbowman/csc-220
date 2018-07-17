#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;


class Review {
    private:
        char * str;
        int len;
        int * num;

    public:
        Review(int, const char *); 
        ~Review(); 
        void print ();
};

Review::Review(int x, const char * s) {
    len = x;
    num = new int[len];
    for(int ii=0;ii<len;ii++) {
        num[ii] = ii;
    }
    str = (char *) malloc(strlen(s));
    strncpy (str, s, strlen(s));
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

