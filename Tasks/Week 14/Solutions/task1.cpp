#include <iostream>
#include <string>
using namespace std;

class Player {
private:
	string name;
	double hp, atk;

public:
	Player();
	Player(string, double, double);

	string getName() { return name; }
	double getHp() { return hp; }
	double getAtk() { return atk; }

	void setName(string _name) { name = _name; }
	void setHp(double _hp);
	void setAtk(double _atk);

	void Attack(Player& oponent);
	bool isDead() { return (hp == 0 ? true : false); }

};

Player::Player() {
	name = "Dummy";
	hp = 100;
	atk = 0;
}

Player::Player(string _name, double _hp, double _atk) {
	name = _name;
	hp = _hp;
	atk = _atk;
}

void Player::setHp(double _hp) {
	if (_hp < 0) {
		hp = 0;
		return;
	}

	hp = _hp;
}
void Player::setAtk(double _atk) {
	if (_atk < 0) {
		atk = 0;
		return;
	}

	atk = _atk;
}

void Player::Attack(Player& opponent) {
	opponent.hp -= this->atk;
	if (opponent.hp < 0) {
		opponent.hp = 0;
	}
}

int main() {

	Player opponents[100];

	string name;
	double hp, atk;
	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter hit points: ";
	cin >> hp;
	cout << "Enter attack points";
	cin >> atk;

	Player mainPlayer(name, hp, atk);

	int size;

	cout << "Enter how many opponents you will have:";
	cin >> size;

	if (!(size >= 1 && size <= 100)) return 0;


	for (int i = 0; i < size; i++) {
		cout << "Enter opponent "<<i+1<<" name: ";
		cin >> name;
		cout << "Enter opponent " << i + 1 << " hit points: ";
		cin >> hp;
		cout << "Enter opponent " << i + 1 << " attack points";
		cin >> atk;

		opponents[i].setName(name);
		opponents[i].setHp(hp);
		opponents[i].setAtk(atk);
	}

	int pos = 0;

	while (!mainPlayer.isDead() && pos < size) {
		mainPlayer.Attack(opponents[pos]);

		if (opponents[pos].isDead()) {
			pos++;
			continue;
		}

		opponents[pos].Attack(mainPlayer);
	}

	if (!mainPlayer.isDead()) {
		cout << "You beat every one! Congrats!\n";
		cout << "Total death count : " << size;
	}
	else {
		cout << "You died fighting and managed to kill " << pos << " enemies";
	}

}