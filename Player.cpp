#include <iostream>
#include <string>

#include "headers/PlayerManager.h"

int main()
{
    std::cout << "Welcome! In this program you can create your own player: name, health, size (metter), damage." << std::endl;

    PlayerManager player;

    bool end = false;
    bool endType = false;

    while (!end) {
        std::cout << "Tell us 'N' if you want to continue or 'Y' if you want to leave !" << std::endl;

        std::string arg;
        std::cin >> arg;

        if (arg == "Y" || arg == "y") {
            end = true;
            std::cout << "Your player: \n- Name:" << player.getName() << "\n- Health:" << player.getHealth() << "\n- Size:" << player.getSize() << " m" << "\n- Damage:" << player.getDamage() << std::endl;
            break;
        }
        else if (arg == "N" || arg == "n") {
            while (!endType) {
                std::cout << "Now you can set the name, the health, the size and the damage. Use the arguments: name, health, size or damage to update these values." << std::endl;
                std::cout << "If you want to leave the program, tell us 'leave' !" << std::endl;

                std::string argument;
                std::cin >> argument;

                if (argument == "leave") {
                    endType = true;
                    break;
                }
                else if (argument == "name") {
                    std::cout << "The name of your player:" << std::endl;
                    std::string name;
                    std::cin >> name;
                    player.setName(name);
                }
                else if (argument == "health") {
                    std::cout << "The health of your player:" << std::endl;
                    int health;
                    std::cin >> health;
                    player.setHealth(health);
                }
                else if (argument == "damage") {
                    std::cout << "The damage of your player:" << std::endl;
                    int damage;
                    std::cin >> damage;
                    player.setDamage(damage);
                }
                else if (argument == "size") {
                    std::cout << "The size of your player:" << std::endl;
                    double size;
                    std::cin >> size;
                    player.setSize(size);
                }
                else {
                    std::cout << "Wrong command, try again !" << std::endl;
                }
            }
        }
    }

    return 0;
}