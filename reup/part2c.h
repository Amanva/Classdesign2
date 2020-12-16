#pragma once
#include <string>
#include <iostream>

std::string file = "PNG";
std::string type = "PNG";
std::string name = "Name";
int month = 3;
int day = 15;
int year = 2002;
int numerator = 1;
int denominator = 8;
int ISO = 3000;
bool flash = true;
int apesize = 8;
int width = 200;
int height = 200;

class metadata {

private:
	double size = 100;
	

public:

	void setFile(std::string fname) {
		file = fname;

	}
	std::string getFile() const {

		return file;
	}


	void setType(std::string ftype) {
		type = ftype;

	}
	std::string getType() const {

		if (type == "JPEG" || type == "GIF" || type == "PNG")
		{
			return type;
		}
		else
		{
			std::cout << "invalid type, only JPEG, PNG, and GIF allowed.";
		}
	}
	int setDate(int fmonth, int fday, int fyear) {
		month = fmonth;
		day = fday;
		year = fyear;

	}
	int getDate() const {
		std::cout << "Date: "<< month << "/" << day << "/";
		return year;
	}

	void setSize(double fsize) {
		size = fsize;

	}
	double getSize() const {
		return size;
	}

	void setName(std::string fauthor) {
		name = fauthor;

	}
	std::string getName() const {
		return name;
	}

	void setDimension(int fwidth, int fheight) {
		width = fwidth;
		height = fheight;

	}
	int getDimension() const {
		return width;
		return height;
	}

	void setApe(int fape) {
		apesize = fape;


	}
	int getApe() const {
		std::cout << "Aperture size: " << "f/";
		return apesize;
	}
	void setExo(int fnumerator, int fdenominator) {
		numerator = fnumerator;
		denominator = fdenominator;


	}
	int getExo() const {
		std::cout << "Exposure time: " << numerator << "/";
		return denominator;
	}

	void setIso(int fISO) {
		ISO = fISO;

	}

	int getIso() const {
		return ISO;
	}

	void setFlash(bool fflash) {
		flash = fflash;

	}

	int getFlash() const {
		return flash;
	}

};