#include <iostream>
using namespace std;

int main()
{
    int hours,minuts;
    cout<<"Enter in hours: ";
    cin>>hours;
    cout<<"Enter in minutes: ";
    cin>>minuts;

    int h_sec = hours*60*60;
    int m_sec = minuts*60;

    int sec= h_sec+m_sec;

    cout<<sec<<" seconds.";
    return 0;
}
