#include <iostream>

using namespace std;

//BCS370 Lab 1 Recursion Thomas Barrella

int getSum(int list[], int size, int testNum = 0) {
  //if the test number is less than the size than add the number from list at that position
    if (testNum < size) {
      //return the num and call the function again but increase the testNum by 1, this will cause the recursion
      return list[testNum] + getSum(list, size, testNum + 1);
    }
    //if the testNum is equal to or less than size, return 0
    return 0;   
}
int main()
{
    int list[6] = {1,2,3,4,5,6};
    cout<<getSum(list,6)<<endl;
    return 0;
} 