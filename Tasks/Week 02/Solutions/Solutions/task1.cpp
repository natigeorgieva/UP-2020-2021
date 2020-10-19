#include <iostream>
using namespace std;

int main()
{
    int inpt;

    cout << "Enter a number: ";
    cin >> inpt;


    /**
    * Едно цяло число b дели цялото число а ако остатъка по модул е нула.
    * 
    * От това условие следва, че въведеното число трябва да дава остатък 0 по модул 2, 3 и 5.
    * Затова сравняваме остатъка на всеки модул с 0. Като ги свържем с логическо И ознчава,
    * че искаме и трите условия да са изпълнени 
    */
    if (inpt % 2 == 0 && inpt % 3 == 0 && inpt % 5 == 0) {
        //Този блок се изпълнява ако израза е true
        cout << "The number is divisible by 2 and 3 and 5!\n";
    }
    else {
        //Този блок се изпълнява ако израза е false
        cout << "The number isn't divisible by 2 and 3 and 5!\n";
    }
}
