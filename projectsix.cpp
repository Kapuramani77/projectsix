#include<iostream>
using namespace std;

class time{
    private:
        int hours;
        int minutes;
        int seconds;
        int thetimeis;
        int timeintotalseconds;

        public:
            entertime();


};
time :: entertime(){
    cout<<"Enter time:";
    int hh;
    cout<<"\n1. Hours? ";
    cin>>hh;
    int mm;
    cout<<"\n2. Minutes? ";
    cin>>mm;
    int ss;
    cout<<"\n3. Seconds? ";
    cin>>ss;
    cout<<"\n4. The time is ="<<"0"<<hh<<":"<<"0"<<mm<<":"<<"0"<<ss;
    cin>>thetimeis;
    cout<<"\n5. Time in total seconds: ";
    int result;
    result=hh*3600 + mm*60 +ss;
    cout<<result;
    cin>>result;
}

main()
{
    time t1;
    t1.entertime();
}
