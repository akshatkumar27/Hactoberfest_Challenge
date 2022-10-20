#include<iostream>
using namespace std;
main() {
   string str1 = "aabbabababbbaabb";
   string str2 = "abb";
   int pos = 0;
   int index;
   while((index = str1.find(str2, pos)) != string::npos) {
      cout << "Match found at position: " << index << endl;
      pos = index + 1; //new position is from next element of index
   }
}
