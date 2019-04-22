
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
    // valeur age
    int annee(0);
    int age(0);
    // valeur nom
    string nom("");
    string status("");

    cout << "Coucou les gens. :)" << endl << "Comment vous appelez vous ?" << endl;
    getline(cin, nom);

    cout << "Quelle est votre année de naisance ?" << endl;
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

    cout << "Vous vous appelez : " << nom << " et avez " << age << " ans." << endl;
    cout << status << endl;
    return 0;
}
