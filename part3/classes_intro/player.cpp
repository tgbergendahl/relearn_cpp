#include "player.h"
#include <iostream>

using namespace std;

Player::Player(const string &name, const string &team, const string &position, const int &age)
    : name(name), team(team), position(position), age(age) {}

Player::~Player() {}

void Player::displayInfo() const {
    cout << "Name: " << name << endl;
    cout << "Team: " << team << endl;
    cout << "Position: " << position << endl;
    cout << "Age: " << age << endl;
}

string Player::getTeam() const {
    return team;
}

string Player::getName() const {
    return name;
}

int Player::getAge() const {
    return age;
}

string Player::getPosition() const {
    return position;
}