// MVS_FizzBuzz.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//


#include <stdio.h>
#include <stdlib.h>
#define FIZZ "Fizz"
#define BUZZ "Buzz"
int main(void) {
	for (int i = 1; i <= 100; i++) {
		if (i % 15 == 0) {
			printf("%s%s\n", FIZZ, BUZZ);
		}
		else if (i % 3 == 0) {
			printf("%s\n", FIZZ);
		}
		else if (i % 5 == 0) {
			printf("%s\n", BUZZ);
		}
		else {
			printf("%d\n", i);
		}
	}
	return EXIT_SUCCESS;
}


// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
