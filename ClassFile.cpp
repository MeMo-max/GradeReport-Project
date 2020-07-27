#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip> 
using namespace std;

#include "ClassFile.h" 

void ClassFile::inputFile1(){         // Function to input first file CIT1325

  ifstream inFile("CIT1325.txt");     // Opens CIT1325

  if (inFile.is_open()){              // Checks if CIT1325 is open
    while(!inFile.eof()){             // Reads from each line unitl end of file
      getline(inFile,first, ' ');     // Reads first line to the space or comma and inputs into vector
      nameFirst1.push_back(first);
      getline(inFile,last, ' ');      
      nameLast1.push_back(last);
      getline(inFile,g1, ',');
      gradeOne1.push_back(stod(g1));
      getline(inFile,g2, ',');
      gradeTwo1.push_back(stod(g2));
      getline(inFile,g3, ',');
      gradeThree1.push_back(stod(g3));
      getline(inFile,g4,',');
      gradeFour1.push_back(stod(g4));
      getline(inFile,gF, '\n');
      gradeFinal1.push_back(stod(gF));
    }
  }
  if (!inFile.is_open()){             // If file did not open will output error msg
    cout << "ERROR" << endl;
  }
  inFile.close();                     // Closes CIT1325
}
void ClassFile::inputFile2(){         // Function to input second file CIT1350

  ifstream inFile2("CIT1350.txt");    // Opens CIT1350

  if (inFile2.is_open()){             // Checks if CIT1325 is open
    while(!inFile2.eof()){            // Reads from each line unitl end of file
      getline(inFile2,first2, ' ');   // Reads first line to the space or comma and inputs into vector
      nameFirst2.push_back(first2);
      getline(inFile2,last2, ' ');
      nameLast2.push_back(last2);
      getline(inFile2,g12, ',');
      gradeOne2.push_back(stod(g12));
      getline(inFile2,g22, ',');
      gradeTwo2.push_back(stod(g22));
      getline(inFile2,g32, ',');
      gradeThree2.push_back(stod(g32));
      getline(inFile2,g42,',');
      gradeFour2.push_back(stod(g42));
      getline(inFile2,gF2, '\n');
      gradeFinal2.push_back(stod(gF2));
    }
    if (!inFile2.is_open()){             // If file did not open will output error msg
      cout << "ERROR" << endl;
    }
  inFile2.close();                     // Closes CIT1350
  }
}
//Function to find student's average. First they are calculated and put in a temp varriable and added to vector studentAvg1 or studentAvg2
void ClassFile::classAvg() {
  classSize1 = nameLast1.size();      // Inputs classSize based on vector size of nameLast1 for loops
  for(int i=0; i < classSize1; i++){
  tempAvg1 = ((gradeOne1.at(i) + gradeTwo1.at(i) + gradeThree1.at(i) + gradeFour1.at(i) + (gradeFinal1.at(i) *2)) / 6);
  studentAvg1.push_back(tempAvg1);
  }
  classSize2 = nameLast2.size();      // Inputs classSize based on vector size of nameLast2 for loops
  for(int i=0; i < classSize2; i++){
  tempAvg2 = ((gradeOne2.at(i) + gradeTwo2.at(i) + gradeThree2.at(i) + gradeFour2.at(i) + (gradeFinal2.at(i) *2)) / 6);
  studentAvg2.push_back(tempAvg2);
  }
}
//Function to find students final letter grade.
void ClassFile::classLetter() {
  for(int i=0; i < classSize1; i++){
    if (studentAvg1.at(i) > 89.50){
      tempLetter1 = 'A';
      letterGrade1.push_back(tempLetter1);
    }
      else if(studentAvg1.at(i) < 89.4 && studentAvg1.at(i) > 79.5 ){
        tempLetter1 = 'B';
        letterGrade1.push_back(tempLetter1);
      }
        else if (studentAvg1.at(i) < 79.4 && studentAvg1.at(i) > 69.5 ){
          tempLetter1 = 'C';
          letterGrade1.push_back(tempLetter1);
        }
          else{
            tempLetter1 = 'F';
            letterGrade1.push_back(tempLetter1);
          }
  }
  for(int i=0; i < classSize2; i++){
    if (studentAvg2.at(i) > 89.50){
      tempLetter2 = 'A';
      letterGrade2.push_back(tempLetter2);
    }
      else if(studentAvg2.at(i) < 89.4 && studentAvg2.at(i) > 79.5 ){
        tempLetter2 = 'B';
        letterGrade2.push_back(tempLetter2);
      }
        else if (studentAvg2.at(i) < 79.4 && studentAvg2.at(i) > 69.5 ){
          tempLetter2 = 'C';
          letterGrade2.push_back(tempLetter2);
        }
          else{
            tempLetter2 = 'F';
            letterGrade2.push_back(tempLetter2);
          }
  }
}
//Function to calculate each test class average (class1 and class2)
void ClassFile::testAvg(){
  for (int i=0; i< classSize1; i++){
    testTemp1 = (gradeOne1.at(i) + testTemp1);
    testAvgOne1 = testTemp1/classSize1;
  }
  testTemp1 = 0;
  for (int i=0; i< classSize1; i++){
    testTemp1 = (gradeTwo1.at(i) + testTemp1);
    testAvgTwo1 = testTemp1/classSize1;
  }
  testTemp1 = 0;
  for (int i=0; i< classSize1; i++){
    testTemp1 = (gradeThree1.at(i) + testTemp1);
    testAvgThree1 = testTemp1/classSize1;
  }
  testTemp1 = 0;
  for (int i=0; i< classSize1; i++){
    testTemp1 = (gradeFour1.at(i) + testTemp1);
    testAvgFour1 = testTemp1/classSize1;
  }
  testTemp1 = 0;
  for (int i=0; i< classSize1; i++){
    testTemp1 = (gradeFinal1.at(i) + testTemp1);
    testAvgFinal1 = testTemp1/classSize1;
  }
  testTemp1 = 0;
  for (int i=0; i< classSize1; i++){
    classTestAvg1 = ((testAvgOne1+testAvgTwo1+testAvgThree1+testAvgFour1+testAvgFinal1)/5);
  }

  for (int i=0; i< classSize2; i++){
    testTemp2 = (gradeOne2.at(i) + testTemp2);
    testAvgOne2 = testTemp2/classSize2;
  }
  testTemp2 = 0;
  for (int i=0; i< classSize2; i++){
    testTemp2 = (gradeOne2.at(i) + testTemp2);
    testAvgOne2 = testTemp2/classSize2;
  }
  testTemp2 = 0;
  for (int i=0; i< classSize2; i++){
    testTemp2 = (gradeTwo2.at(i) + testTemp2);
    testAvgTwo2 = testTemp2/classSize2;
  }
  testTemp2 = 0;
  for (int i=0; i< classSize2; i++){
    testTemp2 = (gradeThree2.at(i) + testTemp2);
    testAvgThree2 = testTemp2/classSize2;
  } 
  testTemp2 = 0;
  for (int i=0; i< classSize2; i++){
    testTemp2 = (gradeFour2.at(i) + testTemp2);
    testAvgFour2 = testTemp2/classSize2;
  }
  testTemp2 = 0;
  for (int i=0; i< classSize2; i++){
    testTemp2 = (gradeFinal2.at(i) + testTemp2);
    testAvgFinal2 = testTemp2/classSize2;
  }
  testTemp2 = 0;
  for (int i=0; i< classSize2; i++){
    classTestAvg2 = ((testAvgOne2+testAvgTwo2+testAvgThree2+testAvgFour2+testAvgFinal2)/5);
  }
}
void ClassFile::highTestGrade(){
  //Function for highest test grade in CIT1325 && CIT1350
  for (int i = 0; i < classSize1;i++){
    if (gradeOne1.at(i)>gradeTwo1.at(i) && gradeOne1.at(i)>gradeThree1.at(i) && gradeOne1.at(i)>gradeFour1.at(i) && gradeOne1.at(i)>gradeFinal1.at(i)){
      highTestGrade1 = gradeOne1.at(i);
      if (gradeTwo1.at(i)>gradeOne1.at(i) && gradeTwo1.at(i)>gradeThree1.at(i) && gradeTwo1.at(i)   >gradeFour1.at(i) && gradeTwo1.at(i)>gradeFinal1.at(i)){
        highTestGrade1 = gradeTwo1.at(i);
        if (gradeThree1.at(i)>gradeOne1.at(i) && gradeThree1.at(i)>gradeTwo1.at(i) && gradeThree1.at(i) >gradeFour1.at(i) && gradeThree1.at(i)>gradeFinal1.at(i)){
          highTestGrade1 = gradeThree1.at(i);
          if (gradeFinal1.at(i)>gradeOne1.at(i) && gradeFinal1.at(i)>gradeTwo1.at(i) && gradeFinal1.at(i)>gradeThree1.at(i) && gradeFinal1.at(i)>gradeFour1.at(i)){
            highTestGrade1 = gradeFinal1.at(i);
          }
        }
      }
    }
  }
  for (int i = 0; i < classSize2;i++){
    if (gradeOne2.at(i)>gradeTwo2.at(i) && gradeOne2.at(i)>gradeThree2.at(i) && gradeOne2.at(i)>gradeFour2.at(i) && gradeOne2.at(i)>gradeFinal2.at(i)){
        highTestGrade2 = gradeOne2.at(i);
      if (gradeTwo2.at(i)>gradeOne2.at(i) && gradeTwo2.at(i)>gradeThree2.at(i) && gradeTwo2.at(i)>gradeFour2.at(i) && gradeTwo2.at(i)>gradeFinal2.at(i)){
          highTestGrade2 = gradeTwo2.at(i);
        if (gradeThree2.at(i)>gradeOne2.at(i) && gradeThree2.at(i)>gradeTwo2.at(i) && gradeThree2.at(i)>gradeFour2.at(i) && gradeThree2.at(i)>gradeFinal2.at(i)){
          highTestGrade2 = gradeThree2.at(i);
          if (gradeFinal2.at(i)>gradeOne2.at(i) && gradeFinal2.at(i)>gradeTwo2.at(i) && gradeFinal2.at(i)>gradeThree2.at(i) && gradeFinal2.at(i)>gradeFour2.at(i)){
            highTestGrade2 = gradeFinal2.at(i);
          }
        }
      }
    }
  }
}
//Function to comapare CIT1325 highest test grade to CIT1350 to determine top student
void ClassFile::classOverall(){
  // Compare class 1 highest test grade to class 2 and output highest total test grade
  if (highTestGrade1>highTestGrade2){
    highestClassTestGrade1 = highTestGrade1;
  }
  else{
    highestClassTestGrade1 = highTestGrade2;
  }
  //Top student overall. First determine top student in class 1, then class 2 and compare and load value
  for (int i = 1; i < classSize1;i++){
    if (studentAvg1.at(i-1) > studentAvg1.at(i)){
      topStudent1 = nameFirst1.at(i-1) + ' ' + nameLast1.at(i-1);
      topStudentGrade1 = studentAvg1.at(i-1);
    }
  }
  for (int i=1; i < classSize2;i++){
    if (studentAvg2.at(i) > studentAvg2.at(i-1)){
      topStudent2 = nameFirst2.at(i) + ' ' + nameLast2.at(i);
      topStudentGrade2 = studentAvg2.at(i);
    }
  }
  if (topStudentGrade1>topStudentGrade2){
    topStudentOverall = topStudent1;
    topStudentOverallGrade = topStudentGrade1;
  }
  else{
    topStudentOverall = topStudent2;
    topStudentOverallGrade = topStudentGrade2;
  }
  }
  
//Function to output to file in tabular 
void ClassFile::printFile(){
  ofstream outMyFile;
  outMyFile.open("GradeReport.txt");

    if (!outMyFile.is_open()){
      cout << "ERROR" << endl;
      return;
    }

    outMyFile << left << "_________________________________________________________________________" << endl;
    outMyFile << left << "-------------------------------------------------------------------------" << endl;
    outMyFile << left << "_________________________________________________________________________" << endl;
    outMyFile << left << "****************************CLASS 1325***********************************" << endl;
    outMyFile << left << "FIRST****LAST*****TEST 1**TEST 2**TEST 3**TEST 4**FINAL***AVG****LETTER**" << endl;
  
    for (int i=0; i < classSize1; i++){
      outMyFile << setprecision(4);
      outMyFile << left << setw(9) << setfill(' ') << nameFirst1.at(i);
      outMyFile << left << setw(9) << setfill(' ') << nameLast1.at(i);
      outMyFile << left << setw(8) << setfill(' ') << gradeOne1.at(i);
      outMyFile << left << setw(8) << setfill(' ') << gradeTwo1.at(i);
      outMyFile << left << setw(8) << setfill(' ') << gradeThree1.at(i);
      outMyFile << left << setw(8) << setfill(' ') << gradeFour1.at(i);
      outMyFile << left << setw(8) << setfill(' ') << gradeFinal1.at(i);
      outMyFile << left << setw(8) << setfill(' ') << studentAvg1.at(i);
      outMyFile << left << setw(4) << setfill(' ') << setfill(' ') << letterGrade1.at(i) << endl;
      }
  
      outMyFile << left << "_________________________________________________________________________" << endl;
      outMyFile << left << "-------------------------------------------------------------------------" << endl;
      outMyFile << left << "_________________________________________________________________________" << endl;
      outMyFile << left << "****************************CLASS 1350***********************************" << endl;
      outMyFile << left << "FIRST****LAST*****TEST 1**TEST 2**TEST 3**TEST 4**FINAL***AVG****LETTER**" << endl;
    for (int i=0; i < 19; i++){
      outMyFile << setprecision(4);
      outMyFile << left << setw(9) << setfill(' ') << nameFirst2.at(i);
      outMyFile << left << setw(9) << setfill(' ') << nameLast2.at(i);
      outMyFile << left << setw(8) << setfill(' ') << gradeOne2.at(i);
      outMyFile << left << setw(8) << setfill(' ') << gradeTwo2.at(i);
      outMyFile << left << setw(8) << setfill(' ') << gradeThree2.at(i);
      outMyFile << left << setw(8) << setfill(' ') << gradeFour2.at(i);
      outMyFile << left << setw(8) << setfill(' ') << gradeFinal2.at(i);
      outMyFile << left << setw(8) << setfill(' ') << studentAvg2.at(i);
      outMyFile << left << setw(4) << setfill(' ') << setfill(' ') << letterGrade2.at(i) << endl;
      }

      outMyFile << left << "_________________________________________________________________________" << endl;
      outMyFile << left << "-------------------------------------------------------------------------" << endl;
      outMyFile << left << "_________________________________________________________________________" << endl;
      outMyFile << left << "***************************CLASS TOTALS**********************************" << endl;
      outMyFile << left << "****************************CLASS 1325***********************************" << endl;outMyFile << left << "Test 1 Average: ";
      outMyFile << left << setw(8) << setfill(' ') << testAvgOne1 << endl;
      outMyFile << left << "Test 2 Average: ";
      outMyFile << left << setw(8) << setfill(' ') << testAvgTwo1 << endl;
      outMyFile << left << "Test 3 Average: ";
      outMyFile << left << setw(8) << setfill(' ') << testAvgThree1 << endl;
      outMyFile << left << "Test 4 Average: ";
      outMyFile << left << setw(8) << setfill(' ') << testAvgFour1 << endl;
      outMyFile << left << "Final Test Average: ";
      outMyFile << left << setw(8) << setfill(' ') << testAvgFinal1 << endl;
      outMyFile << left << "_________________________________________________________________________" << endl;
      outMyFile << left << "****************************CLASS 1350***********************************" << endl;
      outMyFile << left << "Test 1 Average: ";
      outMyFile << left << setw(8) << setfill(' ') << testAvgOne2 << endl;
      outMyFile << left << "Test 2 Average: ";
      outMyFile << left << setw(8) << setfill(' ') << testAvgTwo2 << endl;
      outMyFile << left << "Test 3 Average: ";
      outMyFile << left << setw(8) << setfill(' ') << testAvgThree2 << endl;
      outMyFile << left << "Test 4 Average: ";
      outMyFile << left << setw(8) << setfill(' ') << testAvgFour2 << endl;
      outMyFile << left << "Final Test Average: ";
      outMyFile << left << setw(8) << setfill(' ') << testAvgFinal2 << endl;
      outMyFile << left << "_________________________________________________________________________" << endl;
      outMyFile << left << "*****************************OVERALL*************************************" << endl;
      outMyFile << left << "Highest Test Grade: ";
      outMyFile << left << setw(8) << setfill(' ') << highestClassTestGrade1 << endl;
      outMyFile << left << "Top Overall Student: ";
      outMyFile << left << setw(8) << setfill(' ') << topStudentOverall << " with a " << topStudentOverallGrade <<  endl;
  outMyFile.close();
  }