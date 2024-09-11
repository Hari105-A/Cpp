#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double height, weight, bmi;

    // Input
    std::cout << "Masukkan tinggi badan (dalam meter): ";
    std::cin >> height;
    std::cout << "Masukkan berat badan (dalam kilogram): ";
    std::cin >> weight;

    // Proses: Menghitung BMI
    bmi = weight / pow(height, 2);

    // Output
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "BMI Anda adalah: " << bmi << std::endl;

    // Conditional statement
    if (bmi < 18.5) {
        std::cout << "Kategori: Berat badan kurang" << std::endl;
    } else if (bmi < 25) {
        std::cout << "Kategori: Berat badan normal" << std::endl;
    } else if (bmi < 30) {
        std::cout << "Kategori: Berat badan berlebih" << std::endl;
    } else {
        std::cout << "Kategori: Obesitas" << std::endl;
    }

    return 0;
}