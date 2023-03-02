#include <iostream>
using namespace std;

const int CITY = 5;
const int MONTH = 12;

class MonthlyHighTemperature{

private:
    int city;
    double temperature;
public:
    double mTemp;
    double aveTemp;

};


int main()
{
    cout<<"City 1 is Karachi"<<endl;
    cout<<"City 2 is Quetta"<<endl;
    cout<<"City 3 is Peshawar"<<endl;
    cout<<"City 4 is Lahore"<<endl;
    cout<<"City 5 is Islamabad"<<endl;

    double temperature[CITY][MONTH];

    cout << "Enter all temperature for Months of cities. \n";

    // Inserting the values into the temperature array
    for (int i = 0; i < CITY; ++i)
    {
        for(int j = 0; j < MONTH; ++j)
        {
            cout << "City " << i + 1 << ", Month " << j + 1 << " : ";
            cin >> temperature[i][j];
        }
    }

    cout << "\n\nDisplaying Values:\n";

    // Accessing the values from the temperature array
    for (int i = 0; i < CITY; ++i)
    {
        for(int j = 0; j < MONTH; ++j)
        {
            cout << "City " << i + 1 << ", Month " << j + 1 << " = " << temperature[i][j] << endl;
        }
    }
    
    float a=temperature[1][1]+temperature[1][2]+temperature[1][3]+temperature[1][4]+temperature[1][5]+temperature[1][6]+temperature[1][7]+temperature[1][8]+temperature[1][9]+temperature[1][10]+temperature[1][11]+temperature[1][12];
    float b=temperature[2][1]+temperature[2][2]+temperature[2][3]+temperature[2][4]+temperature[2][5]+temperature[2][6]+temperature[2][7]+temperature[2][8]+temperature[2][9]+temperature[2][10]+temperature[2][11]+temperature[2][12];
    float c=temperature[3][1]+temperature[3][2]+temperature[3][3]+temperature[3][4]+temperature[3][5]+temperature[3][6]+temperature[3][7]+temperature[3][8]+temperature[3][9]+temperature[3][10]+temperature[3][11]+temperature[3][12];
    float d=temperature[4][1]+temperature[4][2]+temperature[4][3]+temperature[4][4]+temperature[4][5]+temperature[4][6]+temperature[4][7]+temperature[4][8]+temperature[4][9]+temperature[4][10]+temperature[4][11]+temperature[4][12];
    float e=temperature[5][1]+temperature[5][2]+temperature[5][3]+temperature[5][4]+temperature[5][5]+temperature[5][6]+temperature[5][7]+temperature[5][8]+temperature[5][9]+temperature[5][10]+temperature[5][11]+temperature[5][12];

    cout<<"___________________________________________________"<<endl;
    cout<<"-----AVERAGE TEMPERATURE-----";
    cout<<"Average temperature of Karachi is"<<a/12<<endl;
    cout<<"Average temperature of Quetta is"<<b/12<<endl;
    cout<<"Average temperature of Peshawar is"<<c/12<<endl;
    cout<<"Average temperature of Lahore is"<<d/12<<endl;
    cout<<"Average temperature of Islamabad is"<<e/12<<endl;
    
    return 0;
}
