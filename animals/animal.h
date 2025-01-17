#pragma once

#include <iostream>
#include <sstream>
#include <string>

class Animal {
private: 
	int Number_life;  //years
public:
    Animal(){};
	Animal(int Number_life)
	{
		Number_life = Numberl;
	}
    void setNumber_life(int Numberl) {Numberl = Number_life;}
    int getNumber_life() {return Numberl;} 
	virtual string about()
	{
		stringctream str;
		str << "Number of life = " << Numberl;
        return str.str();
	}
};

class Mammal : public Animal {
private:
	int Fertility;  //number per year
public:
    Mammal(){};
	Mammal(int Fertility)
	{
		fert = Fertility;
	}
	void setFertility(int Fertility) {fert = Fertility;}
    int getFertility() {return fert;}
    virtual string about()
	{
        stringstream str;
        str << "Fertility = " << fert;
        return str.str();
    }
};

class Amphibia : public Animal {
private:
    bool Virulence;  //poisonous or not
public:
    Amphibia(){};
	Amphibia(bool Virulence)
	{
		toxic = Virulence;
	}
    bool getVirulence() {return toxic;}
    void setVirulence(bool value) {toxic = value;}
    virtual string about() 
	{
        stringstream ss;
        ss << "Virulence = " << toxic;
        return ss.str();
    }
};

class Dog : public Mammal {
private:
    string Сoat_color;  //colour
public:
    Dog(){};
	Dog(string Сoat_color)
	{
		сolor = Сoat_color;
	}
    string getСoat_color() {return сolor;}
    void setСoat_color(string value) {сolor = value;}
    virtual string about()
	{
        stringstream ss;
        ss << "Сoat color = " << getСoat_color();
        return ss.str();
    }
};

class Сhihuahua : public Dog {
private:
	int Barking_volume; //decibel
public:
	Сhihuahua() {}
	Сhihuahua(int Barking_volume)
	{
		Barking = Barking_volume;
	}
	int getBarking_volume() {return Barking;}
	void setBarking_volume(int value) { Barking = value; }
	virtual string about()
	{
		stringstream ss;
		ss << "Barking volume = " << getSpeed() << "; "
            << "Сoat color = " << getСoat_color() << endl;
		return ss.str();
	}
}

class Сamel : public Mammal {
private:
    int Number_humps;  //amount
public:
    Сamel() {}
	Сamel(int Number_humps)
	{
		Humpsk = Number_humps;
	}
    void setNumber_humps(int Humpsk) {Humpsk = Number_humps;}
    float getNumber_humps() {return Humpsk;}
    virtual string about()
	{
        stringstream str;
        str << "Number of humps = " << Humpsk;
        return str.str();
    }
};

class Snake : public Amphibia {
private:
    bool Molt;  //was or not
public:
    Snake(){};
	Snake(bool Molt)
	{
		molt = Molt;
	}
    bool getMolt() {return molt;}
    void setMolt(bool value) {molt = value;}
    virtual string about() 
	{
        stringstream ss;
        ss << "Was there a molt = " << getMolt();
        return ss.str();
    }
};

class Turtle : public Amphibia {
private:
    int Age;  //years
public:
    Turtle() {}
	Turtle(int Age)
	{
		age = Age;
	}
    int getAge() {return age;}
    void setAge(int age) {age = Age;}
    virtual string about()
	{
        stringstream str;
        str << "Age = " << age << "; "
            << "Number of life = " << Numberl << endl;
        return str.str();
    }
};
