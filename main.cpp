#include <iostream>
#include <cstdlib>

using namespace std;

// additions-funktion
    double addition(double a, double b) {
        return a+b;
    }
// subtraktions-funktion
    double subtraktion(double a, double b) {
        return a-b;
    }
// multiplikation:
    double multiplikation(double a, double b) {
        return a * b;
    }
// division
    double division(double a, double b) {
        return a / b;
    }



int main()
{
    int raknesatt;
    double tal1, tal2, summa;

    std::cout << "Välj räknesätt: \n1 = Addition\n2 = Subtraktion\n3 = Multiplikation\n4 = Division\n>";
    std::cin >> raknesatt;
    std::cout << "Skriv in två tal (tryck enter mellan): \n>";
    std::cin >> tal1;
    std::cout << ">";
    std::cin >> tal2;
    if (raknesatt == 1) {
        summa = addition(tal1, tal2);
        std::cout << "Svaret blir: "<< summa;
    } else if (raknesatt == 2) {
        summa = subtraktion(tal1, tal2);
        cout << "Svaret blir: " << summa;
    } else if (raknesatt == 3) {
        summa = multiplikation(tal1, tal2);
        cout << "Svaret blir: " << summa;
    } else if (raknesatt == 4) {
        summa = division(tal1, tal2);
        cout << "Svaret blir: " << summa;
    } else {
    cout << "Valde du verkligen 1-4?";
    }


    return 0;
}
