#include <iostream>
#include<iomanip>

using namespace std;

int star(int num, int base);
int starP(int num, int base);

int main() {
    // Write your main here
    int num = 0;
    int base = 0;

    cout << "Number of lines? ";
    cin >> base;
    cout << setw(base);
    starP(num, base);
    return 0;
}

int star(int num, int base){
  int static count;
  if (num == base - 1){
    count = 1;
    cout << setw(count + 2);
  }
  if(num == 0){
     return num;
  }
  else {
    for(int i = 0; i < num; i++){
      cout << " !";
    }
    cout << endl;
    count++;
    cout << setw(count + 2);
    return star(num - 1, base);
  }
}

int starP(int num, int base){
  int static count;
  if (num == 0){
      count = base;
  }
  if(num > base) {
    //cout << setw(base);
    return star(num - 2, base);
  }
  else {
    for(int i = 0; i < num; i++){
      cout << " !";
    }
    cout << endl;
    cout << setw(count + 1);
    count--;
    return starP(num + 1, base);
  }
}
