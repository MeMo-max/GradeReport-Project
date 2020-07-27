#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip> 
using namespace std;

//used to call ClassFile class header
#include "ClassFile.h" 

int main() {
  //used to call ClassFile
  ClassFile readAndPrint; 
  //user input to check to run program
  char userInput;        
  //ask if user would like to print grade report
  cout << "Would you like to print CIT1325 & CIT1350 to a file? Y/N \n" << "N to quit." << endl;
  cin >> userInput;
  //if user wants to print grade report will run ClassFile 
  if (userInput == 'Y'){
    readAndPrint.inputFile1();
    readAndPrint.inputFile2();
    readAndPrint.classAvg();
    readAndPrint.classLetter();
    readAndPrint.testAvg();
    readAndPrint.highTestGrade();
    readAndPrint.classOverall();  
    readAndPrint.printFile();

    cout << "Grade report for CIT1325 & CIT1350 has been created." << endl;
  }
  //if user does not want to print grade report will output goodbye
  else{
    cout << "Goodbye" << endl;
  }

  return 0;
}
