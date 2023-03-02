#include <iostream>
#include <fstream>
using namespace std;

class Student
{

private:
    string firstName;
    string lastName;
    string dateBirth;
    string regNum;
    string faculty;
    //....................................................................................................................
public:
    void setName(string name)
    {
        firstName = name;
    }
    string getName()
    {
        return firstName;
    }
    //......................................................................
    void setNam(string nam)
    {
        lastName = nam;
    }
    string getNam()
    {
        return lastName;
    }
    //......................................................................
    void setDate(string date)
    {
        dateBirth = date;
    }
    string getDate()
    {
        return dateBirth;
    }
    //......................................................................
    void setReg(string reg)
    {
        regNum = reg;
    }
    string getReg()
    {
        return regNum;
    }
    //......................................................................
    void setFaculty(string fac)
    {
        faculty = fac;
    }
    string getFaculty()
    {
        return faculty;
    }
    //......................................................................
    void create_file()
    {
        ofstream MyFile("student_data.txt");
        MyFile << getName()<<endl;        
        MyFile << getNam()<<endl;
        MyFile << getReg()<<endl;
        MyFile << getDate()<<endl;
        MyFile << getFaculty()<<endl;
    }

    void read_file(){
        string myText;

        ifstream MyReadFile("student_data.txt");
        while (getline (MyReadFile, myText)) {
            cout << myText <<endl;
        }
        MyReadFile.close();
    }
};
int main()
{
    Student student1;

    student1.setName("Muhammad");
    student1.setNam("Musa");
    student1.setReg("2021421");
    student1.setDate("20/8/2001");
    student1.setFaculty("FCS");

    student1.create_file();
    student1.read_file();

    /*cout << student1.getName() << endl;
    cout << student1.getNam() << endl;
    cout << student1.getReg() << endl;
    cout << student1.getDate() << endl;
    cout << student1.getFaculty() << endl;
    */
}