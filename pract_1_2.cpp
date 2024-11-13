#include <iostream>

int main() {
    // 1.1. Визначення змінних різних типів із початковими значеннями
    int intVar = 10;
    char charVar = 'A';
    float floatVar = 5.25f;
    double doubleVar = 3.14159;

    // 1.2. Визначення вказівників
    int* pIntVar = &intVar;           // Ініціалізований вказівник
    char* pCharVar = &charVar;         // Ініціалізований вказівник
    float* pFloatVar = nullptr;        // Нульовий вказівник
    double* pDoubleVar;                // Неініціалізований вказівник

    // 1.3. Надання нульовим вказівникам значення адрес визначених змінних
    pFloatVar = &floatVar;

    // 1.4. Виділення динамічної пам’яті та присвоєння адреси неініціалізованому вказівнику
    pDoubleVar = new double(2.71828);

    // 1.5. Виведення значень через розіменування вказівників
    std::cout << "Value intVar like*: " << *pIntVar << std::endl;
    std::cout << "Value charVar like*: " << *pCharVar << std::endl;
    std::cout << "Value floatVar like*: " << *pFloatVar << std::endl;
    std::cout << "Value by pDoubleVar: " << *pDoubleVar << std::endl;

    // 1.6. Зміна значень змінних через вказівники
    *pIntVar = 20;
    *pCharVar = 'B';
    *pFloatVar = 6.75f;
    *pDoubleVar = 1.61803;

    // Виведення змінених значень
    std::cout << "\nChange *:" << std::endl;
    std::cout << "intVar = " << intVar << std::endl;
    std::cout << "charVar = " << charVar << std::endl;
    std::cout << "floatVar = " << floatVar << std::endl;
    std::cout << "doubleVar (dinamic memory) = " << *pDoubleVar << std::endl;

    // 1.7. Виведення адрес змінних і значень вказівників
    std::cout << "\nAdresses and *:" << std::endl;
    std::cout << "Adress intVar: " << &intVar << ", value * pIntVar: " << pIntVar << std::endl;
    std::cout << "Adress charVar: " << static_cast<void*>(&charVar) << ", value * pCharVar: " << static_cast<void*>(pCharVar) << std::endl;
    std::cout << "Adress floatVar: " << &floatVar << ", value * pFloatVar: " << pFloatVar << std::endl;
    std::cout << "Adress doubleVar (Dinamic memory): " << pDoubleVar << std::endl;

    // Звільнення динамічної пам'яті
    delete pDoubleVar;

    return 0;
}
