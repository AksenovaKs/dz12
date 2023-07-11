#include <iostream>
#include <string>

bool IsKPeriodic(const std::string& str, int K)
{
    if (K <= 0) {
        return false; // Если K меньше или равно 0, строка не может быть кратной
    }

    int n = str.length();

    if (n % K != 0) {
        return false; // Если длина строки не кратна K, она не может быть кратной
    }

    for (int i = 0; i < n - K; i++) {
        if (str[i] != str[i + K]) {
            return false; // Если текущие символы не совпадают, строка не кратна
        }
    }

    return true; // Если все проверки прошли успешно, строка является кратной
}

int main()
{
    std::string str;
    int K;

    std::cout << "Введите строку: ";
    std::cin >> str;

    std::cout << "Введите K: ";
    std::cin >> K;

    if (IsKPeriodic(str, K)) {
        std::cout << "Строка является кратной числу " << K << std::endl;
    }
    else {
        std::cout << "Строка не является кратной числу " << K << std::endl;
    }

    return 0;
}