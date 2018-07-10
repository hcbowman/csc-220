#include<iostream>
#include"vigenere.hpp"

using namespace std;

void Vigenere::encrypt(std::string key) {
  unsigned int i, j;

  for (i = 0, j = 0; i < message.length(); ++i) {

    char c = message[i];
    message[i] += (c + key[j] - 2 * 'A') % 26 + 'A';
    j = (j + 1) % key.length();

  }

}

void Vigenere::decrypt(std::string key) {
  unsigned int i, j;

  for (i = 0, j = 0; i < message.length(); ++i) {

    char c = message[i];
    message[i] += (c - key[j] + 26) % 26 + 'A';
    j = (j + 1) % key.length();

  }

}
