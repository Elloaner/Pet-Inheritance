#pragma once
#include <iostream>
#include <string>

using namespace std;

class Pet
{
protected:
	string animal;
public:
	Pet(string Animal) : animal(Animal) {}

	void ShowAnimal() const
	{
		cout << "Animal - " << animal << endl;
	}
};

class Cat : public Pet
{
protected:
	string breed;
	string color;
	string name;
public:
	Cat(string Animal, string Breed, string Color, string Name)
		: Pet(Animal), breed(Breed), color(Color), name(Name)
	{}

	void ShowAnimal() const
	{
		Pet::ShowAnimal();
		cout << "Breed : " << breed << endl;
		cout << "Color : " << color << endl;
		cout << "Name : " << name << endl;
	}
};

class Dog : public Pet
{
protected:
	string breed;
	string color;
	string name;
public:
	Dog(string Animal, string Breed, string Color, string Name)
		: Pet(Animal), breed(Breed), color(Color), name(Name)
	{}

	void ShowAnimal() const
	{
		Pet::ShowAnimal();
		cout << "Breed : " << breed << endl;
		cout << "Color : " << color << endl;
		cout << "Name : " << name << endl;
	}
};

class Parrot : public Pet
{
protected:
	string breed;
	string color;
	string name;
public:
	Parrot(string Animal, string Breed, string Color, string Name)
		: Pet(Animal), breed(Breed), color(Color), name(Name)
	{}

	void ShowAnimal() const
	{
		Pet::ShowAnimal();
		cout << "Breed : " << breed << endl;
		cout << "Color : " << color << endl;
		cout << "Name : " << name << endl;
	}
};