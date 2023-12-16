#include <iostream>
#include <iomanip>  // For std::setprecision

class Gun {
public:
    std::string name;
    double weight; // in kilograms
    int magazineCapacity;
    double range; // in meters
    double fireRate; // in rounds per minute
    double reloadTime; // in seconds
    int bulletsInMagazine;
    double damageHead;
    double damageTorso;
    double damageLimbs;

    Gun(const std::string& gunName, double gunWeight, int magCapacity, double gunRange,
        double rateOfFire, double reloadDur, double head, double torso, double limbs)
        : name(gunName), weight(gunWeight), magazineCapacity(magCapacity),
          range(gunRange), fireRate(rateOfFire), reloadTime(reloadDur), bulletsInMagazine(0),
          damageHead(head), damageTorso(torso), damageLimbs(limbs) {}

    void printProperties() const {
        std::cout << "\nProperties for: " << name << std::endl;
        std::cout << "Gun: " << name << std::endl;
        std::cout << "Weight: " << weight << " kilograms" << std::endl;
        std::cout << "Magazine Capacity: " << magazineCapacity << " rounds" << std::endl;
        std::cout << "Range: " << range << " meters" << std::endl;
        std::cout << "Fire Rate: " << fireRate << " rounds per minute" << std::endl;
        std::cout << "Reload Time: " << reloadTime << " seconds" << std::endl;
        std::cout << "Bullets in Magazine: " << bulletsInMagazine << std::endl;
        std::cout << "Damage Properties:" << std::endl;
        std::cout << "Head: " << std::fixed << std::setprecision(2) << damageHead << "% per shot" << std::endl;
        std::cout << "Torso: " << std::fixed << std::setprecision(2) << damageTorso << "% per shot" << std::endl;
        std::cout << "Limbs: " << std::fixed << std::setprecision(2) << damageLimbs << "% per shot" << std::endl;
    }
};

int main() {
    Gun remington870("Remington Model 870", 3.40234, 5, 50.0, 2.0, 3.0, 70.0, 40.0, 20.0);  // Weight in kg
    Gun m4a1("M4A1", 3.40234, 30, 300.0, 800.0, 2.5, 80.0, 50.0, 30.0);  // Weight in kg
    Gun nineMillimeter("9mm Pistol", 1.13398, 10, 25.0, 400.0, 2.0, 60.0, 30.0, 15.0);  // Weight in kg
    Gun ar15("AR-15", 3.17515, 20, 600.0, 700.0, 2.0, 75.0, 45.0, 25.0);  // Weight in kg
    Gun ak47("AK-47", 4.54716, 30, 400.0, 600.0, 3.5, 85.0, 60.0, 35.0);  // Weight in kg

    int choice;
    std::cout << "Select a gun:" << std::endl;
    std::cout << "[1] Remington Model 870" << std::endl;
    std::cout << "[2] M4A1" << std::endl;
    std::cout << "[3] 9mm Pistol" << std::endl;
    std::cout << "[4] AR-15" << std::endl;
    std::cout << "[5] AK-47" << std::endl;
    std::cout << "Choose a Weapon: ";
    std::cin >> choice;

    const Gun* selectedGun;

    switch (choice) {
        case 1:
            selectedGun = &remington870;
            break;
        case 2:
            selectedGun = &m4a1;
            break;
        case 3:
            selectedGun = &nineMillimeter;
            break;
        case 4:
            selectedGun = &ar15;
            break;
        case 5:
            selectedGun = &ak47;
            break;
        default:
            std::cout << "Invalid choice. Exiting." << std::endl;
            return 1;
    }

    // Print selected gun's properties
    selectedGun->printProperties();

    return 0;
}
