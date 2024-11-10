    #include <iostream>
    #include <algorithm>
    #include <string>
    #include < cmath >
    using namespace std;
    //Задание 1 сумма всех четных чисел
    /*
    int sumchet(int n)
    {
        int sum = 0;
        for (int i = 0; i <= n; i++)
        {
            if (i % 2 == 0) {
                sum += i;
            }
        }
        return sum;
    }
    int main()
    {
        int n;
        setlocale(LC_ALL, "RU");
        cout << "Введите число n";
        cin >> n;
        int result = sumchet(n);
        cout << "сумма всех четных чисел от 1 до n = "<< result;
    }*/
    //Задание 2 проверка слова на полиндром
    /* void polindrom(string n) {
        bool check = false;
        int s = n.length() - 1;
        for (int i = 0; i < s; i++)
        {
            if (n[i] == n[s])
            {
                check = true;
            }
            else {
                break;
            }

        }
        if(check == true)
        cout << "слово явлется полиндромом " ;
        else
        cout << "слово  не явлется полиндромом ";
    }
    int main()
    {
        string n;
        setlocale(LC_ALL, "RU");
        cout << "Введите слово n\n";
        cin >> n;
        polidrom(n);
    }
    */
    //Задание 3 
    /*
    string cifra(int num) {
      // Преобразуем число в строку
      string cifro = to_string(num);

      // Находим минимальную и максимальную цифры
      int minDigit = cifro[0] - '0';
      int maxDigit = cifro[0] - '0';

      for (char digit : cifro) { // Перебираем все цифры в строке
        int drDigit = digit - '0';
        minDigit = min(minDigit, drDigit); // Ищем минимальную цифру
        maxDigit = max(maxDigit, drDigit); // Ищем максимальную цифру
      }

      // Возвращаем строку, состоящую из минимальной и максимальной цифр
      return to_string(minDigit) + to_string(maxDigit);
    }

    int main() {
      setlocale(LC_ALL, "RU");

      int h;
      cout << "Введите число h: " << endl;
      cin >> h;

      cout << tsin(h) << endl;
    */
    //Заданиние 4 Перевод числа в римские цифры
    /*void rim(int n) {
        int edinica = n % 10;
        int desyat = n / 10 % 10;
        int sto = n / 100 % 10;
        int tysyacha = n / 1000 % 10;
        switch (tysyacha)
        {

            case 1:
                cout << "M";
            break;
            case 2:
                cout << "MM";
            break;
            case 3:
                cout << "MMM";
            break;


            default:

            break;
        }
        switch (sto)
        {
        case 1:
            cout << "C";
            break;
        case 2:
                cout << "CC";
                break;
        case 3:
            cout << "CCC";
            break;
        case 4:
            cout << "CD";
            break;
        case 5:
            cout << "D";
            break;
        case 6:
            cout << "DC";
            break;
        case 7:
            cout << "DCC";
            break;
        case 8:
            cout << "DCCC";
            break;
        case 9:
                cout << "CM";
            break;
        default:
                ;
            break;
        }
        switch (desyat)
        {
        case 1:
            cout << "X";
            break;
        case 2:
            cout << "XX";
            break;
        case 3:
            cout << "XXX";
            break;
        case 4:
            cout << "XL";
            break;
        case 5:
            cout << "L";
            break;
        case 6:
            cout << "LX";
            break;
        case 7:
            cout << "LXX";
            break;
        case 8:
            cout << "LXXX";
            break;
        case 9:
            cout << "XC";
            break;
        default:

            break;
        }
        switch (edinica)
        {
        case 1:
            cout << "I";
            break;
        case 2:
            cout << "II";
            break;
        case 3:
            cout << "III";
            break;
        case 4:
            cout << "IV";
            break;
        case 5:
            cout << "V";
            break;
        case 6:
            cout << "VI";
            break;
        case 7:
            cout << "VII";
            break;
        case 8:
            cout << "VIII";
            break;
        case 9:
            cout << "IX";
            break;
        default:

            break;
        }

    }
    int main()
    {
        int n;
        setlocale(LC_ALL, "RU");
        cout << "Введите число n\n";
        cin >> n;
        rim(n);
    }
    */
    // Задание 5 Сумма факториалов
    /*
     int factorial(int n);

    int main() {
        setlocale(LC_ALL, "RU");

        int h;

        cout << "Введите число h: " << endl;
        cin >> h;
        cout << facto(h) << endl;
    }

    int factorial(int n) {
        int a = 1;
        int result = 0;

        for (int i = 1; i <= n; i++) {
            a *= i;
            result += a;
        }
        return result;
    }
    */
    // Задание 6 Сумма квадратов
    /*int sumkvad(int n)
    {
        int sum = 0;
        for (int i = 0; i <= n; i++)
        {
            sum += pow(i, 2);
        }
        return sum;
    }
    int main()
    {
        int n;
        setlocale(LC_ALL, "RU");
        cout << "Введите число n";
        cin >> n;
        int result = sumkvad(n);
        cout << "сумма всех квадратов чисел от 1 до n = " << result;
    }
    */
    // Задание 7 
    /*int logarifm(int n, int b);

    int main() {
        setlocale(LC_ALL, "RU");

        int h, m;

        cout << "Введите аргумент логарифма: " << endl;
        cin >> h;
        cout << "Введите основание логарифма: " << endl;
        cin >> m;
        cout << loga(h, m) << endl;
    }
    int logarifm(int n, int b) {
        int result;

        result = log(n) / log(b);

        return result;
    }*/
    // Задание 8 Сумма цифр числа
    /*int sumch(int n)
    {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
    int main()
    {
        int n;
        setlocale(LC_ALL, "RU");
        cout << "Введите число n";
        cin >> n;
        int result = sumch(n);
        cout << "сумма цифр числа n = " << result;
    }
    */
    //Задание 9 
    /*string perfect(int a) {
    int delitel = 0;

    // Находим сумму делителей числа a
    for (int i = 1; i < a; i++) {
        if (a % i == 0) {
            delitel += i; // Если i делитель, добавляем его к сумме
        }
    }

    // Проверяем, является ли число совершенным
    if (delitel == a) {
        return "Число является совершенным!";
    } else {
        return "Число не является совершенным!";
    }
    }

    int main() {
        int number;
        cout << "Введите число: ";
        cin >> number;
        cout << perfect(number) << endl;
        return 0;
    }*/
    //Задание 10 Сложение двух дробей
    /*
        int NOD(int a, int b) {
        while (b != 0) {
            int c = b;
            b = a % b;
            a = c;
        }
        return a;
        }

        void drobi(int ch1, int z1, int ch2, int z2) {
            int obshchiyZnamenatel = z1 * z2;
            int summaChislitelya = (ch1 * z2) + (ch2 * z1);

            int delitel = NOD(summaChislitelya, obshchiyZnamenatel);
            summaChislitelya /= delitel;
            commonDenominator /= delitel;

            if (numeratorSum >= commonDenominator) {
                int wholePart = numeratorSum / commonDenominator;
                obshchiyZnamenatel %= commonDenominator;

                if (summaChislitelya == 0) {
                    cout << celya;
                } else {
                    cout << celya << ' ' << summaChislitelya << '/' << obshchiyZnamenatel;
                }
            } else {
                cout << summaChislitelya << '/' << obshchiyZnamenatel;
            }
        }

        int main() {
            int ch1, z1, ch2, z2;
            setlocale(LC_ALL, "RU");
            cout << "Введите делимое первой дроби: ";
            cin >> ch1;
            cout << "Введите делитель первой дроби: ";
            cin >> z1;
            cout << "Введите делимое второй дроби: ";
            cin >> ch2;
            cout << "Введите делитель второй дроби: ";
            cin >> z2;

            drobi(ch1, z1, ch2, z2);
            return 0;
        }
    */
    //Задание 11 
    /*string del(int d);

    int main() {
        setlocale(LC_ALL, "RU");

        int a;

        cout << "Введите число: ";
        cin >> a;

        cout << "Все делители числа: " << endl;
        cout << del(a);
    }

    string del(int d) {
        list<int> delitels;

        for (int i = 1; i <= d; i++) {
            if (d % i == 0) {
                delitels.push_back(i);
            }
        }
        for (int i : delitels) {
            cout << i << endl;
        }
        return "";
    }*/
    //Задание 12 Нахождение НОД
    /* int NOD(int a, int b) {
        while (b != 0) {
            int c = b;
            b = a % b;
            a = c;
        }
        return a;
    }
    int main() {
        int a, b;
        setlocale(LC_ALL, "RU");

        cout << "Введите первое число: ";
        cin >> a;
        cout << "Введите второе число: ";
        cin >> b;

        int nod = NOD(a, b);

        cout << "Наибольший общий делитель"  << a << " " << b << " = " << nod << endl;
    }
    */
    //Задание 13
    /*
    int fib(int n) {
      if (n <= 1) {
        return n;
      } else {
        return fib(n - 1) + fib(n - 2);
      }
    }

    int summafib(int b) {
      int sum = 0;
      for (int i = 0; i <= b; i++) {
        sum += fib(i);
      }
      return sum;
    }

    int main() {
      setlocale(LC_ALL, "RU");
      int g;
      cout << "Введите число: ";
      cin >> g;
      cout << "Сумма чисел фибоначи: " << summafib(g) << endl;
    }
    */
    //Задание 14 
    /*void sortir(string str) {
        int n = str.length();
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - i - 1; ++j) {
                if (str[j] > str[j + 1]) {
                    swap(str[j], str[j + 1]);
                }
            }
        }
    }

    int main() {
        string vvod;
        setlocale(LC_ALL, "RU");
        cout << "Введите строку: ";
        cin >> vvod;

        sortir(vvod);

        cout << "Отсортированная строка: " << vvod << endl;


    }
    */
    //Задание 15 
    /*
    string anogrammo(string fir, string sec) {
      // Сортируем слова
      sort(fir.begin(), fir.end());
      sort(sec.begin(), sec.end());

      // Проверяем, равны ли отсортированные слова
      if (fir == sec) {
        return "Строки являются анаграммами!";
      } else {
        return "Строки не являются анаграммами.";
      }
    }

    int main() {
      setlocale(LC_ALL, "RU");
      string ano, grammo;

      cout << "Введите первое слово: ";
      cin >> ano;
      cout << "Введите второе слово: ";
      cin >> grammo;
      cout << endl;

      cout << anogrammo(ano, grammo) << endl;
    }
    */
    //Задание 16 
    /*string operation(string str1, string str2, size_t length) {
    string result = str1 + str2; // Объединяем строки

      if (result.length() > length) { // Если длина результата больше заданной
        result = result.substr(0, length); // Обрезаем строку до заданной длины
      }

      return result; 
    }

    int main() {
      string str1, str2;
      size_t length;

      setlocale(LC_ALL, "RU");

      cout << "Введите первую строку: ";
      cin >> str1;

      cout << "Введите вторую строку: ";
      cin >> str2;

      cout << "Введите максимальную длину строки: ";
      cin >> length;

      string result = operation(str1, str2, length);

      cout << "Результат : " << result << endl;
    }
    */
    //Задание 17

    /*string dublic(string str);

    int main() {
        setlocale(LC_ALL, "RU");

        string stringi;

        cout << "Введите строку: ";
        cin >> stringi;

        cout << "Сортированная строка без повторения символов: ";
        cout << dublic(stringi);
    }

    string dublic(string str) {
        unique_copy(str.begin(), str.end(), ostreambuf_iterator<char>(cout));
        return "";
    }*/
    //Задание 18
    /*int srawniru(int a, int b, int c, int d) {
      double drob1 = (double)a / b; // Преобразуем к double для точного деления
      double drob2 = (double)c / d; // Преобразуем к double для точного деления

      // Используем тернарный оператор для сравнения
      if (drob1 > drob2) {
        return 1; // Первая дробь больше
      } else if (drob1 < drob2) {
        return -1; // Первая дробь меньше
      } else {
        return 0; // Дроби равны
      }
    }

    int main() {
      int x1, x2, x3, x4;
      setlocale(LC_ALL, "RU");

      cout << "Введите делимое первой дроби: ";
      cin >> x1;
      cout << "Введите делитель первой дроби: ";
      cin >> x2;
      cout << "Введите делимое второй дроби: ";
      cin >> x3;
      cout << "Введите делитель второй дроби: ";
      cin >> x4;

      int result = srawniru(x1, x2, x3, x4);

      cout << "Результат сравнения: " << result << endl;
      }
    */
    //Задание 19

    /*string vverhreg(string str);

    int main() {
        setlocale(LC_ALL, "RU");

        string str;

        cout << "Введите строку: ";
        cin >> str;

        cout << "Строка с символами верхнего регистра: ";
        cout << vverhreg(str);
    }

    string vverhreg(string str) {
        for (int i = 0; i <= str.length() - 1; i++) {
            str[i] = toupper(str[i]);
        }
         return str;
    }*/
    //Задание 20
    /*void shwarcnigger(string n) {
      int length = n.length();
      int sum = 0;

      // Перебираем каждую цифру в строке
      for (char c : n) {
        int digit = c - '0'; // Преобразуем символ в число
        sum += pow(digit, length);
      }

      int num = stoi(n); // Преобразуем строку в число
      if (num == sum) {
        cout << "Это число Армстронга!" << endl;
      } else {
        cout << "Это не число Армстронга." << endl;
      }
    }

    int main() {
      setlocale(LC_ALL, "RU");

      string n;
      cout << "Введите число n: ";
      cin >> n;

      shwarcnigger(n);
    }*/