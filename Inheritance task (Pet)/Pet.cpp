#include "Pet.h"

using namespace std;

int main()
{
	Cat cat("Cat", "British", "Gray", "Luna");
	Dog dog("Dog", "Akita", "White", "Rex");
	Parrot parrot("Parrot", "Macaws", "Blue", "Kiwi");

	cat.ShowAnimal();
	cout << "-------------------------" << endl;
	dog.ShowAnimal();
	cout << "-------------------------" << endl;
	parrot.ShowAnimal();

	return 0;
}