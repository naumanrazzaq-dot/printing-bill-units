#include <iostream>

using namespace std;

int main()
{
    int unit,bill;
    cout<<"enter units";
    cin>>unit;

    if (unit<=100){
            bill=unit*5;
            cout<<bill;
    }
    else if(unit<=200){

            bill=(100*5)+(unit-100)*10;
            cout<<bill;

    }

    else{
        bill=(100*5)+(100*10)+(unit-200)*15;
        cout<<bill;
    }
    return 0;
}
