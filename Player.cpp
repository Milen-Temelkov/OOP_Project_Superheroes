#include "Player.h"


Player::Player(String Fname, String Lname, String Uname, String Email, String Pass, unsigned bal) : balance(bal) , turnsRemaining(3){
	setFirstName(Fname);
	setLastName(Lname);
	setUsername(Uname);
	setEmail(Email);
	setPassword(Pass);
}

void Player::setBalance(unsigned _balance) {
	balance = _balance;
}

void Player::setTurns(int _turns) {
	turnsRemaining = _turns;
}

void Player::resetTurns() {
	setTurns(3);
}

void Player::useTurn() {
	turnsRemaining -= 1;
}
//CHECK
void Player::buySuperhero(Superhero& a) {
	a.changeMode();
	heroes.pushBack(a);
	return;
}

<<<<<<< HEAD
void Player::winMoney(const unsigned amount) {
	setBalance(getBalance() + amount);
}

void Player::loseMoney(const unsigned amount) {
	int result = getBalance() - amount;
	result > 0 ? setBalance(result) : setBalance(0);
}

Vector<Superhero> Player::getHeroes() const {
	return heroes;
}

unsigned Player::getBalance() const {
	return balance;
}

int Player::getTurns() const {
	return turnsRemaining;
=======
void Player::destroyHero(const String& Fname, const String& Lname) {
	int heroesCount = heroes.getSize();
	for (int i = 0; i < heroesCount; i++) {
		if (heroes[i].getFirstName() == Fname && heroes[i].getLastName() == Lname) {
			heroes.popAt(i);
			return;
		}
		else {}//throw 
	}
}

void Player::winMoney(const unsigned amount) {
	setBalance(getBalance() + amount);
}

void Player::loseMoney(const unsigned amount) {
	int result = getBalance() - amount;
	result > 0 ? setBalance(result) : setBalance(0);
}

Vector<Superhero> Player::getHeroes() const {
	return heroes;
}

unsigned Player::getBalance() const {
	return balance;
>>>>>>> 11123104908f75a64170f523a4f3db16a17004d3
}

void Player::printHeroes() const {
	int heroesCount = heroes.getSize();
	for (int i = 0; i < heroesCount; i++) {
		std::cout << '\t' << i + 1 << ". ";
		heroes[i].printInfo();
		std::cout << std::endl;
	}
}
void Player::printInfoForPlayers() const {
	std::cout << getUsername() << ' ' << getBalance() << "$" << std::endl;
	printHeroes();
}

void Player::printInfoForAdmins() const {
	std::cout << getFirstName() << ' ' << getLastName() << std::endl;
	std::cout << "email:" << getEmail() << std::endl;
	std::cout << "username:" << getUsername() << std::endl;
	std::cout << "heroes:" << std::endl;
	printHeroes();
}