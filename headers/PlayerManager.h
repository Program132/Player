#ifndef PLAYERMANAGER_HPP_INCLUDED
#define PLAYERMANAGER_HPP_INCLUDED

#include <iostream>

class PlayerManager
{	
	public:
		PlayerManager(); // Constructor

		void setName(std::string name);
		std::string getName() const;

		void setHealth(int health);
		int getHealth() const;

		void setSize(double size);
		double getSize() const;

		void setDamage(int damage);
		int getDamage() const;

	private:
		std::string _name;
		int _health;
		double _size;
		int _damage;

};

#endif // PLAYERMANAGER_HPP_INCLUDED