#include <iostream>
#include "Data.h"

using namespace std;

int main()
{
    Data test1 = Data(31, 12, 2019);//next year test
    Data test2 = Data(20, 8, 2019);//default test
    Data test3 = Data(28, 2, 2019);//february test

    cout<<"Test1: "<< test1.getDay() <<"/"<< test1.getMonth() <<"/"<< test1.getYear() <<endl;
    cout<<"Test2: "<< test2.getDay() <<"/"<< test2.getMonth() <<"/"<< test2.getYear() <<endl;
    cout<<"Test3: "<< test3.getDay() <<"/"<< test3.getMonth() <<"/"<< test3.getYear() <<endl;

    test1.avancarDia();
    test2.avancarDia();
    test3.avancarDia();

    cout<<"Test1: "<< test1.getDay() <<"/"<< test1.getMonth() <<"/"<< test1.getYear() <<endl;
    cout<<"Test2: "<< test2.getDay() <<"/"<< test2.getMonth() <<"/"<< test2.getYear() <<endl;
    cout<<"Test3: "<< test3.getDay() <<"/"<< test3.getMonth() <<"/"<< test3.getYear() <<endl;

    return 0;
}
