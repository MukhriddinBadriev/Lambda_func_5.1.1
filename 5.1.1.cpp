#include <iostream>

#include <vector>
#include <algorithm>

int main()
{
    setlocale(LC_ALL, "rus");

    std::vector<int> v = { 4, 7, 9, 14, 12 };

    std::cout << "Входные данные:   ";
    for (int j = 0; j < 5; j++) {
        std::cout << v[j] << " ";
    }std::cout << "\n";

    std::cout << "Выходные данные:  ";
    std::for_each(v.begin(), v.end(), [](int i) {
        if (i % 2 == 1)std:: cout<< i * 3<<" ";
        else std::cout <<i<< " ";
    });

    return 0;
}