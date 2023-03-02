#include <iostream>

using namespace std;

enum Car { zil = 1, pobeda, volga, zaz, moscvich = 0 };
Car operator+(const Car& c, const int& b)
{
    Car a = Car(b + c);
    return (a = Car(a % 5));
}
Car operator+(const int& b, const Car& c)
{
    return (c + b);
}

Car operator++(Car& c)
{
    return (c = Car(c + 1));
}

Car operator++(Car& c, int)
{
    Car a = c; c == Car(c + 1);
    return a;
}
void print(const Car& d)
{
    string Cars[5] =
    {
    "Зил-111", "Победа", "ГАЗ-3102", "ЗАЗ-968М", "Москвич-412"
    };
    cout << Cars[d] << endl;
}
int main()
{
    setlocale(LC_ALL, "Rus");
    Car c = zaz; print(c + 1);
    print(2 + c); print(operator+(c, 1));
    print(operator+(2, c)); c++;
    print(c);
    print(++c);
    print(operator++(c)); print(operator++(c, 0)); print(c);
    system("pause");
}

