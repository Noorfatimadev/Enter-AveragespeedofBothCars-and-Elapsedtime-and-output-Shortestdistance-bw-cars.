#include<iostream>
#include<iomanip>
 using namespace std;
 int main ()
 {double speedA, speedB, Distance, average ; 
 int timeMin, timeHr ,totaltime;
 cout<<"Enter the speed of Car A travelling towards west = "<<endl;
 cin>>speedA;
cout<<"Enter the speed of Car b travelling towards south = "<<endl;
 cin>>speedB;
 cout<<"Give the elapsed time :"<<endl;
 cout<<"In hours:"<<endl;
 cin>>timeHr;
 cout<<"In minutes:"<<endl;
 cin>>timeMin;
 totaltime = timeHr+(timeMin/60);
 cout<<"total time in hrs:"<<totaltime<<endl;
 average=(speedA+speedB)/2;
 cout<<"Average speed of both cars:"<<average<<endl;
 Distance=average*totaltime;
 cout<<"The smallest distance bw Car A and Car B is : Miles"<<Distance;
 return 0;
 
 }
