#include <iostream>
#include<string>
using namespace std;

class vehical{
public:
    string name;
    int milage; 
    int gear;
};
class truck : public vehical{
    public:
    string battery;


    

};

class car :public truck{
    public:
    string sunroof;
    string doors;
};
int main()
{
    truck s1;
   s1.gear=6;
   s1.milage=23;
   s1.name="Honda";
   s1.battery="NO";
   cout<<s1.name<<" "<<s1.gear<<" "<<s1.milage<<s1.battery<<endl;
   car c1;
   c1.gear=6;
   c1.milage=23;
   c1.name="Toyota";
   c1.sunroof="Yes";
   c1.doors="4";
   cout << c1.name << " " << c1.gear << " " << c1.milage << " " << c1.sunroof << " " << c1.doors << endl;
    
    return 0;

};