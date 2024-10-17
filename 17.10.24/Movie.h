#pragma once
class Movie
{
	char* name;
	double time;
	int year;
	char* director;
	char* genre;
	char* releaseDate;
public:
	Movie();
	Movie(const char* n, double t, int y, const char* d, const char* g, const char* r);
	Movie(const Movie& obj);
	~Movie();
	void Print();
	char* GetName();
	double GetTime();
	int GetYear();
	char* GetDirector();
	char* GetGenre();
	char* GetReleaseDate();
	void SetName(const char* n);
	void SetTime(double t);
	void SetYear(int y);
	void SetDirector(const char* d);
	void SetGenre(const char* g);
	void SetReleaseDate(const char* r);
};

