#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
string Name,Gender;
int Age,Score,IDnumber;
string Grade;
    cout << "PLEASE ENTER YOUR DETAILS\n"<<endl;
    cout<<"ID NUMBER:";
    cin>>IDnumber;
    cout<<endl;
    cout<<"NAME:";
    cin>>Name;
    cout<<endl;
    cout<<"AGE:";
    cin>>Age;
    cout<<endl;
    cout<<"GENDER:";
    cin>>Gender;
    cout<<endl;
    cout<<"SCORE:";
    cin>>Score;
    if(Score>=80)
    cout<<"Grade:A "<<endl;
    else if(Score>=70&&80)
    cout<<"Grade:B"<<endl;
    else if(Score>=60&&70)
        cout<<"Grade:C"<<endl;
    else if(Score>=50&&60)
        cout<<"Grade:D"<<endl;
    else if(Score>=40&&50)
        cout<<"Grade:E"<<endl;
    else
        cout<<"Grade:F"<<endl;
    return 0;
}
