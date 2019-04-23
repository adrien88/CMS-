
/*
    including
*/
#include <iostream>
#include <string>
// #include <cmath>

// namespace
using namespace std;

/*
    core
*/
int main ()
{

    int annee, age;
    string nom, status;

    cout << "Coucou les gens. :)\n\nComment vous appelez vous ?\n";
    getline(cin, nom);

    cout << "\nQuelle est votre année de naisance ?\n";
    cin >> annee;

    // calcul de l'âge
    age = (2019-annee);

    // test
    if (age >= 18) {
        status = "Vous êtes majeur.";
    }
    else {
        status = "Vous êtes mineur.";
    }

    //
    cout <<  "\nVous vous appelez : " << nom << " et avez " << age << " ans." << endl;
    cout << status << endl;
    return 0;
}
