#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>




int sumLastNums(int x) {
    int a;
    int b;
    a = x % 10;
    b = (x % 100) / 10;
    return a + b;
}


bool isPositive (int x) {
    if (x > 0) {
        return true;
    }
    else {
        return false;
    }
}


bool isUpperCase (char x) {
    if (x >= 'A' && x <= 'Z') {
        return true;
    }
    else {
        return false;
    }
}


bool isDivisor (int a, int b) {
    if (a % b == 0 or b % a == 0) {
        return true;
    }
    else {
        return false;
    }
}


int lastNumSum(int a, int b) {
    a = a % 10;
    b = b % 10;
    return a + b;
}


double safeDiv (int x, int y) {
    if (y == 0) {
        return 0;
    }
    else {
        return static_cast<double>(x) / y;
    }
}


std::string makeDecision (int x, int y) {
    if (x > y) {
        return std::to_string(x) + ">" + std::to_string(y);
    }
    else if (x < y) {
        return std::to_string(x) + "<" + std::to_string(y);
    }
    else {
        return std::to_string(x) + "==" + std::to_string(y);
    }
}


bool sum3 (int x, int y, int z) {
    if (x == y + z or y == z + x or z == x + y) {
        return true;
    }
    else {
        return false;
    }

}


std::string age (int x) {
    if (x % 10 == 1 and x != 11) {
        return std::to_string(x) + " god";
    }
    else if ((x % 10 == 2 or x % 10 == 3 or x % 10 == 4) and (x != 12 and x != 13 and x != 14)) {
        return std::to_string(x) + " goda";
    }
    else {
        return std::to_string(x) + " let";
    }
}


void printDays (int x) {
    switch (x) {
        case 1:
            std::cout << "Monday\n";
        case 2:
            std::cout << "Tuesday\n";
        case 3:
            std::cout << "Wednesday\n";
        case 4:
            std::cout << "Thursday\n";
        case 5:
            std::cout << "Friday\n";
        case 6:
            std::cout << "Saturday\n";
        case 7:
            std::cout << "Sunday\n";
            break;
        default:
            std::cout << "Not day week\n";
    }

}


std::string reverseListNums (int x) {
    std::string result;
    for (int i = x; i >= 0; i--) {
        result += std::to_string (i) + " ";
    }
    return result;
}


int pow (int x, int y) {
    int result = 1;
    for (int i = 0; i<y; i++) {
        result = result * x;
    }
    return result;
}


bool equalNum (int x) {
    if (x < 0) {
        x = -x;
    }
    int LastDigit = x % 10;
    x = x / 10;
    while (x > 0) {
        int CurrentDigit = x % 10;
        if ( CurrentDigit != LastDigit ) {
            return false;
        }
        x = x / 10;
    }
    return true;

}


void leftTriangle (int x) {
    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}


void guessGame() {
    int RandomNumber = rand() % 10;
    int NumberOfAttempts = 0;
    int UserNumber;
    while (true) {
        std::cout << "Enter number from 0 to 9: ";
        std::cin >> UserNumber;
        if (std::cin.fail() or UserNumber < 0 or UserNumber > 9) {
            std::cout << "\nInvalid input\n";
            break;
        }
        NumberOfAttempts++;
        if (UserNumber == RandomNumber) {
            std::cout << "You win\n";
            std::cout << "You guessed the number in " << NumberOfAttempts << " attempts\n";
            break;
        }
        else {
            std::cout << "You lose\n";
        }
    }
}


int findLast(int arr[], int x) {
    int lastIndex = -1;

    for (int i = 0; i < 7; i++) {
        if (arr[i] == x) {
            lastIndex = i;
        }
    }
    return lastIndex;
}


int* add(int arr[], int x, int pos) {
    int* newArr = new int[6];

    for (int i = 0; i < pos; i++) {
        newArr[i] = arr[i];
    }
    newArr[pos] = x;
    for (int i = pos; i < 5; i++) {
        newArr[i + 1] = arr[i];
    }
    return newArr;
}


void reverse(int arr[]) {
    for (int i = 0; i < 5 / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }
}


int* concat(int arr1[], int arr2[]) {
    int* newArr = new int[6];

    for (int i = 0; i < 3; i++) {
        newArr[i] = arr1[i];
    }

    for (int i = 0; i < 3; i++) {
        newArr[i + 3] = arr2[i];
    }
    return newArr;
}


int* deleteNegative(int arr[]) {
    int count = 0;

    for (int i = 0; i < 7; i++) {
        if (arr[i] >= 0) {
            count++;
        }
    }

    int* newArr = new int[count];

    int j = 0;

    for (int i = 0; i < 7; i++) {
        if (arr[i] >= 0) {
            newArr[j] = arr[i];
            j++;
        }
    }
    return newArr;
}


int main() {
    std::cout << "Task 1.2\n";
    int number;
    std::cout << "Enter number x: ";
    std::cin >> number;

    if (std::cin.fail()) {
        std::cout << "Invalid input\n";
        return 0;
    }
    if (number < 10) {
        std::cout << "Invalid input\n";
        return 0;
    }
    std::cout << "Sum two last nums: " << sumLastNums(number);


    std::cout << "\nTask 1.4\n";
    std::cout << "Enter number x: ";
    std::cin >> number;
    if (std::cin.fail()) {
        std::cout << "Invalid input\n";
        return 0;
    }
    std::cout << isPositive(number);


    std::cout << "\nTask 1.6\n";
    char symbol;
    std::cout << "\nEnter symbol x: ";
    std::cin >> symbol;
    if (symbol >= '0' && symbol <= '9') {
        std::cout << "Invalid input\n";
    }
    else {
        std::cout << isUpperCase (symbol);
    }



    std::cout << "\nTask 1.8\n";
    int numbera;
    int numberb;
    std::cout << "\nEnter number a: ";
    std::cin >> numbera;
    if (std::cin.fail()) {
        std::cout << "Invalid input\n";
        return 0;
    }
    std::cout << "\nEnter number b: ";
    std::cin >> numberb;
    if (std::cin.fail()) {
        std::cout << "Invalid input\n";
        return 0;
    }
    if (numbera == 0 or numberb == 0) {
        std::cout << "Invalid input\n";
        return 0;
    }
    std::cout << isDivisor (numbera, numberb);





    std::cout << "\nTask 1.10\n";
    int result;
    std::cout << "Enter number a: ";
    std::cin >> result;
    if (std::cin.fail()) {
        std::cout << "\nInvalid input\n";
        return 0;
    }
    std::cout << "Enter number b: ";
    std::cin >> number;
    if (std::cin.fail()) {
        std::cout << "\nInvalid input\n";
        return 0;
    }
    result = lastNumSum(result, number);
    std::cout << "Current sum: " << result << "\n";

    std::cout << "Enter next number: ";
    std::cin >> number;
    if (std::cin.fail()) {
        std::cout << "\nInvalid input\n";
        return 0;
    }
    result = lastNumSum(result, number);
    std::cout << "Current sum: " << result << "\n";

    std::cout << "Enter next number: ";
    std::cin >> number;
    if (std::cin.fail()) {
        std::cout << "\nInvalid input\n";
        return 0;
    }
    result = lastNumSum(result, number);
    std::cout << "Current sum: " << result << "\n";

    std::cout << "Enter next number: ";
    std::cin >> number;
    if (std::cin.fail()) {
        std::cout << "\nInvalid input\n";
        return 0;
    }
    result = lastNumSum(result, number);
    std::cout << "Final result: " << result << "\n";




    std::cout << "\nTask 2.2\n";
    std::cout << "Enter number x: ";
    std::cin >> numbera;
    if (std::cin.fail()) {
        std::cout << "\nInvalid input\n";
        return 0;
    }
    std::cout << "Enter number y: ";
    std::cin >> numberb;
    if (std::cin.fail()) {
        std::cout << "\nInvalid input\n";
        return 0;
    }
    double result1 = safeDiv(numbera, numberb);
    std::cout << "Result: " << result1;



    std::cout << "\nTask 2.4\n";
    std::cout << "\nEnter number a: ";
    std::cin >> numbera;
    if (std::cin.fail()) {
        std::cout << "\nInvalid input\n";
        return 0;
    }
    std::cout << "\nEnter number b: ";
    std::cin >> numberb;
    if (std::cin.fail()) {
        std::cout << "\nInvalid input\n";
        return 0;
    }
    std::cout << makeDecision(numbera, numberb);



    int number_a;
    int number_b;
    int number_c;
    std::cout << "\nTask 2.6\n";
    std::cout << "\nEnter number a: ";
    std::cin >> number_a;
    if (std::cin.fail()) {
        std::cout << "\nInvalid input\n";
        return 0;
    }
    std::cout << "\nEnter number b: ";
    std::cin >> number_b;
    if (std::cin.fail()) {
        std::cout << "\nInvalid input\n";
        return 0;
    }
    std::cout << "\nEnter number c: ";
    std::cin >> number_c;
    if (std::cin.fail()) {
        std::cout << "\nInvalid input\n";
        return 0;
    }
    std::cout << sum3(number_a, number_b, number_c);




    std::cout << "\nTask 2.8\n";
    int number_x;
    std::cout << "\nEnter number x: ";
    std::cin >> number_x;
    if (std::cin.fail() or number_x < 0) {
        std::cout << "\nInvalid input\n";
        return 0;
    }
    std::cout << age (number_x);


    std::cout << "\nTask 2.10\n";
    std::cout << "\nEnter number x: ";
    std::cin >> number_x;
    if (std::cin.fail()) {
        std::cout << "\nInvalid input\n";
        return 0;
    }
    printDays(number_x);



    std::cout << "\nTask 3.2\n";
    std::cout << "Enter a number: ";
    std::cin >> number_x;
    if (std::cin.fail() or number_x < 0) {
        std::cout << "\nInvalid input\n";
        return 0;
    }
    std::cout << reverseListNums(number_x);




    std::cout << "\nTask 3.4\n";
    int number_y;
    std::cout << "\nEnter a number x: ";
    std::cin >> number_x;
    if (std::cin.fail()) {
        std::cout << "\nInvalid input\n";
        return 0;
    }
    std::cout << "\nEnter a number y: ";
    std::cin >> number_y;
    if (std::cin.fail() or number_y < 0) {
        std::cout << "\nInvalid input\n";
        return 0;
    }

    std::cout << pow(number_x, number_y);




    std::cout << "\nTask 3.6\n";
    std::cout << "\nEnter a number x: ";
    std::cin >> number_x;
    if (std::cin.fail()) {
        std::cout << "\nInvalid input\n";
        return 0;
    }
    std::cout << equalNum(number_x);





    std::cout << "\nTask 3.8\n";
    std::cout << "Enter number x: ";
    std::cin >> number_x;
    if (std::cin.fail() or (number_x <= 0)) {
        std::cout << "\nInvalid input\n";
        return 0;
    }
    leftTriangle(number_x);


    std::cout << "\nTask 3.10\n";
    srand(time(0));
    guessGame();


    std::cout << "\nTask 4.2\n";
    int arr1[7];
    std::cout << "Enter 7 elements of array: ";
    for (int i = 0; i < 7; i++) {
        std::cin >> arr1[i];

        if (std::cin.fail()) {
            std::cout << "Error, Enter numbers only\n";
            return 0;
        }
    }
    int x;
    std::cout << "Enter number to find: ";
    std::cin >> x;

    if (std::cin.fail()) {
        std::cout << "Error, Enter a number only\n";
        return 0;
    }

    int result2 = findLast(arr1, x);
    std::cout << "Last index: " << result2 << "\n";





    std::cout << "\nTask 4.4\n";
    int arr2[5];

    std::cout << "Enter 5 elements of array: ";

    for (int i = 0; i < 5; i++) {
        std::cin >> arr2[i];
        if (std::cin.fail()) {
            std::cout << "Error, Enter numbers only\n";
            return 0;
        }
    }

    int num_x;
    std::cout << "Enter number to insert: ";
    std::cin >> num_x;
    if (std::cin.fail()) {
        std::cout << "Error, Enter a number only\n";
        return 0;
    }

    int pos;
    std::cout << "Enter position (0-5): ";
    std::cin >> pos;

    if (std::cin.fail()) {
        std::cout << "Error, Enter a number only\n";
        return 0;
    }

    if (pos < 0 or pos > 5) {
        std::cout << "Error, Position must be from 0 to 5\n";
        return 0;
    }

    int* result3 = add(arr2, num_x, pos);
    std::cout << "New array: ";

    for (int i = 0; i < 6; i++) {
        std::cout << result3[i] << " ";
    }
    std::cout << "\n";
    delete[] result3;


    std::cout << "\nTask 4.6\n";
    int arr3[5];

    std::cout << "Enter 5 elements of array: ";

    for (int i = 0; i < 5; i++) {
        std::cin >> arr3[i];
        if (std::cin.fail()) {
            std::cout << "Error, Enter numbers only\n";
            return 0;
        }
    }

    reverse(arr3);

    std::cout << "Reversed array: ";

    for (int i = 0; i < 5; i++) {
        std::cout << arr3[i] << " ";
    }
    std::cout << "\n";



    std::cout << "\nTask 4.8\n";
    int array1[3];
    int array2[3];

    std::cout << "Enter 3 elements of first array: ";

    for (int i = 0; i < 3; i++) {
        std::cin >> array1[i];

        if (std::cin.fail()) {
            std::cout << "Error, Enter numbers only\n";
            return 0;
        }
    }

    std::cout << "Enter 3 elements of second array: ";
    for (int i = 0; i < 3; i++) {
        std::cin >> array2[i];

        if (std::cin.fail()) {
            std::cout << "Error, Enter numbers only\n";
            return 0;
        }
    }

    int* result4 = concat(array1, array2);

    std::cout << "Combined array: ";

    for (int i = 0; i < 6; i++) {
        std::cout << result4[i] << " ";
    }

    std::cout << "\n";
    delete[] result4;




    std::cout << "\nTask 4.10\n";
    int arr[7];

    std::cout << "Enter 7 numbers: ";

    for (int i = 0; i < 7; i++) {
        std::cin >> arr[i];
        if (std::cin.fail()) {
            std::cout << "Error, Enter numbers only\n";
            return 0;
        }
    }


    int* result5 = deleteNegative(arr);

    int newSize = 0;

    for (int i = 0; i < 7; i++) {
        if (arr[i] >= 0) {
            newSize++;
        }
    }

    std::cout << "Result: ";

    for (int i = 0; i < newSize; i++) {
        std::cout << result5[i] << " ";
    }
    std::cout << "\n";

    delete[] result5;

    return 0;
}