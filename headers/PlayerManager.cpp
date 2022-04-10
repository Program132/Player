#include <iostream>
#include <string>
#include "PlayerManager.h"

PlayerManager::PlayerManager() {
	_name = "Unknow";
	_health = 100;
	_size = 1.75;
	_damage = 1;
}

void PlayerManager::setName(std::string name) {
	_name = name;
}

std::string PlayerManager::getName() const {
	return _name;
}

void PlayerManager::setHealth(int health) {
	if (health != 100) {
		_health = health;
	}
}

int PlayerManager::getHealth() const {
	return _health;
}

void PlayerManager::setSize(double size) {
	if (size > 0) {
		_size = size;
	}
}

double PlayerManager::getSize() const {
	return _size;
}

void PlayerManager::setDamage(int damage) {
	if (damage > 0) {
		_damage = damage;
	}
}

int PlayerManager::getDamage() const {
	return _damage;
}