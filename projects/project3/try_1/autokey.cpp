#include<iostream>
#include"autokey.hpp"

using namespace std;

void Autokey::encrypt(std::string key) {
  unsigned int i;

  for( i=0; i<message.length(); i++) {

    if (isupper(message[i])) {
      message[i] += char(int(message[i] + message[i]-65)%26 +65);
    } else {
      message[i] += char(int(message[i] + message[i]-97)%26 +97);
    }

  }
  cout << "Message: " << message << endl;


}

void Autokey::decrypt(std::string key) {
  unsigned int i;

  for( i=0; i<message.length(); i++) {

    if (isupper(message[i])) {
      message[i] += char(int((message[i]/2)-65)%26 +65);
    } else {
      message[i] += char(int((message[i]/2)-97)%26 +97);
    }

  }
  cout << "Message: " << message << endl;

}
