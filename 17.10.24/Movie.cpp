#include <iostream>
#include "Movie.h"
using namespace std;

Movie::Movie()
{
	name = nullptr;
	time = 0.0;
	year = 0;
	director = nullptr;
	genre = nullptr;
	releaseDate = nullptr;
}

Movie::Movie(const char* n, double t, int y, const char* d, const char* g, const char* r)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	time = t;
	year = y;
	director = new char[strlen(d) + 1];
	strcpy_s(director, strlen(d) + 1, d);
	genre = new char[strlen(g) + 1];
	strcpy_s(genre, strlen(g) + 1, g);
	releaseDate = new char[strlen(r) + 1];
	strcpy_s(releaseDate, strlen(r) + 1, r);
}

Movie::Movie(const Movie& obj)
{
	name = new char[strlen(obj.name) + 1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);
	time = obj.time;
	year = obj.year;
	director = new char[strlen(obj.director) + 1];
	strcpy_s(director, strlen(obj.director) + 1, obj.director);
	genre = new char[strlen(obj.genre) + 1];
	strcpy_s(genre, strlen(obj.genre) + 1, obj.genre);
}

Movie::~Movie()
{
	delete[] name;
	delete[] director;
	delete[] genre;
	delete[] releaseDate;
	time = 0.0;
	year = 0;
	cout << "D" << endl;
}

void Movie::Print()
{
	cout << "\tMovie\n" << "Title: " << name << "\nDuration: " << time << "\nYear: " << year << "\nDirector's name: " << director << "\nGenre: " << genre << "\nRelease date: " << releaseDate << endl;
}

char* Movie::GetName()
{
	return name;
}

double Movie::GetTime()
{
	return time;
}

int Movie::GetYear()
{
	return year;
}

char* Movie::GetDirector()
{
	return director;
}

char* Movie::GetGenre()
{
	return genre;
}

char* Movie::GetReleaseDate()
{
	return releaseDate;
}

void Movie::SetName(const char* n)
{
	if (name != nullptr)
	{
		delete[] name;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}

void Movie::SetTime(double t)
{
	time = t;
}

void Movie::SetYear(int y)
{
	year = y;
}

void Movie::SetDirector(const char* d)
{
	if (director != nullptr)
	{
		delete[] director;
	}
	director = new char[strlen(d) + 1];
	strcpy_s(director, strlen(d) + 1, d);
}

void Movie::SetGenre(const char* g)
{
	if (genre != nullptr)
	{
		delete[] genre;
	}
	genre = new char[strlen(g) + 1];
	strcpy_s(genre, strlen(g) + 1, g);
}

void Movie::SetReleaseDate(const char* r)
{
	if (releaseDate != nullptr)
	{
		delete[] releaseDate;
	}
	releaseDate = new char[strlen(r) + 1];
	strcpy_s(releaseDate, strlen(r) + 1, r);
}


