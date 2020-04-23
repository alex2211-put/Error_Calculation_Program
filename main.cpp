#include <iostream>
#include "interfeis.h"
#include "MNK.h"
#include "functionsForMeasurements.h"


int main()
{
    while (isWork)
    {
        setlocale(LC_ALL, "Russian");
        helloFunction();
        int answer0 = cinFromPeople();
        switch (answer0)
        {
            case 1:
            {
                MNK();
                break;
            }
            case 2:
            {
                functionForMeasurements();
                break;
            }
            default:
                std::cout << "Something go wrong...\n";
        }
    }

    return 0;
}
