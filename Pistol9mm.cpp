#include <iostream>
#include <thread>  //to use the function for sleep_for

class Weapon {
public:
    int capacity;
    int bullets;
    float reload_time;

    Weapon(int cap, int initialBullets, float reloadTime)
        : capacity(cap), bullets(initialBullets), reload_time(reloadTime) {}

    void fire() {
        if (bullets > 0) {
            std::cout << "Pistol fired!" << std::endl;
            bullets--;

            if (bullets == 0) {
                std::cout << "No ammo! Press 'R' to reload." << std::endl;
            }
        } else {
            std::cout << "No ammo! Press 'R' to reload." << std::endl;
        }
    }

    void reload() {
        std::cout << "Reloading..." << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(static_cast<int>(reload_time * 1000)));
        bullets = capacity;
        std::cout << "Pistol reloaded." << std::endl;
    }
};

int main() {
    Weapon Pistol(1, 14, 5.5);

    char input;
    while (true) {
        std::cout << "Press 'E' to fire: ";
        std::cin >> input;

        if (input == 'E' || input == 'e') {
            Pistol.fire();
        } else if (input == 'R' || input == 'r') {
            Pistol.reload();
        } else {
            std::cout << "Invalid input. Press 'E' to fire or 'R' to reload." << std::endl;
        }
    }

    return 0;
}
