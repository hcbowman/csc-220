#include<iostream>
#include"caesar.hpp"

using namespace std;

void Caesar::encrypt(std::string key) {
  unsigned int i;

  for( i=0; i<message.length(); i++) {

    if (isupper(message[i])) {
      message[i] += char(int(message[i]+key[i]-65)%26 +65);
    } else {
      message[i] += char(int(message[i]+key[i]-97)%26 +97);
    }

  }

}

void Caesar::decrypt(std::string key) {
  unsigned int i;

  for( i=0; i<message.length(); i++) {

    if (isupper(message[i])) {
      message[i] += char(int(message[i]+(26-key[i])-65)%26 +65);
    } else {
      message[i] += char(int(message[i]+(26-key[i])-97)%26 +97);
    }

  }

}
