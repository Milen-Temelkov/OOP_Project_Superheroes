#pragma once
#include"String.h"

enum class Element {

	fire, earth, water,
};

struct ElementUtils {
	static bool lessThan(const Element& lhs, const Element& rhs) {
		if (lhs == Element::fire) {
			return rhs == Element::water;
		}
		if (lhs == Element::earth) {
			return rhs == Element::fire;
		}
		if (lhs == Element::water) {
			return rhs == Element::earth;
		}
	}

	static bool greaterThan(const Element& lhs, const Element& rhs) {
		if (lhs == Element::fire) {
			return rhs == Element::earth;
		}
		if (lhs == Element::earth) {
			return rhs == Element::water;
		}
		if (lhs == Element::water) {
			return rhs == Element::fire;
		}
	}
};


enum class Mode {
	offencive, defencive, nonDetermined
};

class Superhero
{
	String firstName;
	String lastName;
	String nickname;
	Element element;
	unsigned short power;
	unsigned short price;
	Mode mode = Mode::nonDetermined;

public:

	void setFirstName(const String& otherName);
	void setLastName(const String& otherName);
	void setNickname(const String& otherName);
	void setPower(const unsigned short other);
	void setPrice(const unsigned short other);
	void setElement(const Element& other);
	void setMode(const Mode& other);

	String getFirstName() const;
	String getLastName() const;
	String getNickname() const;
	unsigned short getPower() const;
	unsigned short getPrice() const;
	Element getElement() const;
	Mode getMode() const;

	void printElement() const;
	void printInfo() const;
	void changeMode();
	
	Superhero();

	Superhero(String _firstName,
		String _lastName,
		String _nickname,
		unsigned short _power,
		unsigned short _price,
		Element _element);


};

