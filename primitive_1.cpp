#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int usn;
    string department;
};
int main(){
    student myobj1;
    myobj1.usn = 23;
    myobj1.name = "Krishna";
    myobj1.department= "AI&DS";
    
    student myobj2;
    myobj2.usn = 89;
    myobj2.name = "Ram";
    myobj2.department= "AI&DS"; 
    
cout<<"USN:"<<myobj1.usn<<endl<<"Name:"<<myobj1.name<<endl<<"Department:"<<myobj1.department<<endl;
cout<<"USN:"<<myobj2.usn<<endl<<"Name:"<<myobj2.name<<endl<<"Department:"<<myobj2.department<<endl;
return 0;
}

