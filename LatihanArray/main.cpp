#include <iostream>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

int main()
{
    int i;
    string xiirpl[] = {"Rega", "Saiful", "Hendra", "Fajar", "IqbalCKP"};
    cout << "Yang paling cakep di XII RPL 1 adalah " << xiirpl[1]<< endl;
    cout << "Diantara";
    for(i=0; i<5; i++){
            cout << xiirpl[i] << ", ";
    }

    return 0;
}
