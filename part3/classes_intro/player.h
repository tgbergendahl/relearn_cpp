#ifndef PLAYER_H
#define PLAYER_H

using namespace std;
#include <string>

class Player {
    public:
        Player(const string &name, const string &team, const string &position, const int &age);
        ~Player();
        void displayInfo() const;
        void setTeam(const string &team) { this->team = team; }
        void nextYear() { age++; }
        void setPosition(const string &position) { this->position = position; }
        string getTeam() const;
        string getName() const;
        int getAge() const;
        string getPosition() const;

    private:
        string name;
        string team;
        string position;
        int age;
};

#endif // PLAYER_H