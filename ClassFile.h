#ifndef CLASSFILE_H //used to include class as header
#define CLASSFILE_H //define class

class ClassFile {
  public:
    void inputFile1();
    void inputFile2();
    void classAvg(); 
    void printFile();
    void classLetter();
    void testAvg();
    void highTestGrade();
    void classOverall();
  private:
    // first variables for class CIT1325
    string first, last, g1, g2, g3, g4,gF; // Temp variables for getline when reading file
    vector <string> nameFirst1; // Takes temp variable first and adds to vector
    vector <string> nameLast1; // Takes temp variable last and adds to vector  
    vector <double> gradeOne1; // Takes temp variable g1 and adds to vector
    vector <double> gradeTwo1; // Takes temp variable g2 and adds to vector
    vector <double> gradeThree1; // Takes temp variable g3 and adds to vector
    vector <double> gradeFour1; // Takes temp variable g4 and adds to vector 
    vector <double> gradeFinal1; // Takes temp variable gF and adds to vector
    int classSize1;// defines CIT1325 vector size to use in for loops
    double tempAvg1; // Temp variable for calcuating average
    vector <double> studentAvg1; // Takes temp variable tempAvg1 and adds to vector
    vector <char> letterGrade1; // Takes temp variable and inputs each students letter grade
    char tempLetter1; // Temp variable for letterGrade1
    double testTemp1; // Temp variable for calculate test average
    double testAvgOne1; // Calculates test 1 average for class 1
    double testAvgTwo1; // Calculates test 2 average for class 1
    double testAvgThree1;// Calculates test 3 average for class 1
    double testAvgFour1; // Calculates test 4 average for class 1
    double testAvgFinal1; // Calculates final test average for class 1
    double classTestAvg1; // Total class test avergae
    double highTestGrade1; // Temp value for highestClassTestGrade1
    double highestClassTestGrade1; // Holds value for students highest test grade
    string topStudent1; // Holds top student in class 1
    int topStudentGrade1; // Holds top students final grade for later comparison 
    // second variables for class CIT1350
    string first2, last2, g12, g22, g32, g42,gF2; // Temp variables for getline when reading file
    vector <string> nameFirst2; // Takes temp variable first and adds to vector
    vector <string> nameLast2; // Takes temp variable last and adds to vector  
    vector <double> gradeOne2; // Takes temp variable g1 and adds to vector
    vector <double> gradeTwo2;  // Takes temp variable g2 and adds to vector
    vector <double> gradeThree2; // Takes temp variable g3 and adds to vector
    vector <double> gradeFour2; // Takes temp variable g4 and adds to vector
    vector <double> gradeFinal2; // Takes temp variable gF and adds to vector
    int classSize2; // defines CIT1350 vector size to use in for loops
    double tempAvg2; // Temp variable for calcuating average
    vector <double> studentAvg2;  // Takes temp variable tempAvg1 and adds to vector
    vector <char> letterGrade2; // Takes temp variable and inputs each students letter grade
    char tempLetter2; // Temp variable for letterGrade1
    double testTemp2; // Temp variable for calculate test average
    double testAvgOne2; // Calculates test 1 average for class 2
    double testAvgTwo2; // Calculates test 2 average for class 2
    double testAvgThree2; // Calculates test 3 average for class 2
    double testAvgFour2; // Calculates test 4 average for class 2
    double testAvgFinal2; // Calculates final test average for class 2
    double classTestAvg2; // Total class test avergae
    double highTestGrade2; // Temp value for highestClassTestGrade2
    string topStudent2; // Holds top student in class 2
    string topStudentOverall; // Holds top overall student after comparison
    int topStudentGrade2; // Holds top students final grade for later comparison 
    int topStudentOverallGrade; // Holds top overall students grade
};

#endif // ends if