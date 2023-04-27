#include <iostream>
using namespace std;
#include <string>

void printDataType(int x)
{
    cout << "My data type is an int: " << x << endl;
}
void printDataType(double x)
{
    cout << "My data type is double: " << x << endl;
    
}
void printDataType(float x)
{
    cout << "My data type is float: " << x << endl;
    
}
void printDataType(char x)
{
    cout << "My data type is char: " << x << endl;
    
}
void printDataType(string x)
{
    cout << "My data type is string: " << x << endl;
    
}

int main()
{
    int a = 1;
    double b = 1.1234;
    float c = 2.2345;
    char d = 'd';
    string e = "string";
    
     printDataType(a);
     printDataType(b);
     printDataType(c);
     printDataType(d);
     printDataType(e);
    
    return 0;
}