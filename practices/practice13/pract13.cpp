#include<iostream>
#include<thread>
#include<mutex>

// compile with:
//  g++ pract13.cpp --std=c++11 -pedantic -Wall -pthread

std::mutex m;

int main() {

  int matrix[ROWS][COLS];
  int ii, jj;

  srand(time(NULL));

  std::unique_lock<std::mutex> lock(m);

  for (ii=0;ii<ROWS;ii++) {
    for (jj=0;jj<COLS;jj++) {
      matrix[ii][jj] = rand() % 10;
    }
  }

  lock.unlock();
  std::this_thread::sleep_for(std::chrono::milliseconds(1000));


}
