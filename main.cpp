#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

namespace {

// Task 1.2
int sumLastNums(int x) {
  int a = std::abs(x % 10);
  int b = std::abs((x % 100) / 10);
  return a + b;
}

// Task 1.4
bool isPositive(int x) {
  if (x > 0) {
    return true;
  } else {
    return false;
  }
}

// Task 1.6
bool isUpperCase(char x) {
  if (x >= 'A' && x <= 'Z') {
    return true;
  } else {
    return false;
  }
}

// Task 1.8
bool isDivisor(int a, int b) {
  if (a % b == 0 || b % a == 0) {
    return true;
  } else {
    return false;
  }
}

// Task 1.10
int lastNumSum(int a, int b) {
  a = std::abs(a % 10);
  b = std::abs(b % 10);
  return a + b;
}

// Task 2.2
double safeDiv(int x, int y) {
  if (y == 0) {
    return 0;
  } else {
    return static_cast<double>(x) / y;
  }
}

// Task 2.4
std::string makeDecision(int x, int y) {
  if (x > y) {
    return std::to_string(x) + ">" + std::to_string(y);
  } else if (x < y) {
    return std::to_string(x) + "<" + std::to_string(y);
  } else {
    return std::to_string(x) + "==" + std::to_string(y);
  }
}

// Task 2.6
bool sum3(int x, int y, int z) {
  if (x == y + z || y == z + x || z == x + y) {
    return true;
  } else {
    return false;
  }
}

// Task 2.8
std::string age(int x) {
  if (x % 10 == 1 && x % 100 != 11) {
    return std::to_string(x) + " god";
  } else if ((x % 10 == 2 || x % 10 == 3 || x % 10 == 4) &&
             (x % 100 < 12 || x % 100 > 14)) {
    return std::to_string(x) + " goda";
  } else {
    return std::to_string(x) + " let";
  }
}

// Task 2.10
void printDays(int x) {
  switch (x) {
    case 1:
      std::cout << "Monday\n";
      [[fallthrough]];
    case 2:
      std::cout << "Tuesday\n";
      [[fallthrough]];
    case 3:
      std::cout << "Wednesday\n";
      [[fallthrough]];
    case 4:
      std::cout << "Thursday\n";
      [[fallthrough]];
    case 5:
      std::cout << "Friday\n";
      [[fallthrough]];
    case 6:
      std::cout << "Saturday\n";
      [[fallthrough]];
    case 7:
      std::cout << "Sunday\n";
      break;
    default:
      std::cout << "Not day week\n";
      break;
  }
}

// Task 3.2
std::string reverseListNums(int x) {
  std::string result;
  for (int i = x; i >= 0; i--) {
    result += std::to_string(i) + " ";
  }
  return result;
}

// Task 3.4
int pow(int x, int y) {
  int result = 1;
  for (int i = 0; i < y; i++) {
    result = result * x;
  }
  return result;
}

// Task 3.6
bool equalNum(int x) {
  if (x < 0) {
    x = -x;
  }
  int last_digit = x % 10;
  x = x / 10;
  while (x > 0) {
    int current_digit = x % 10;
    if (current_digit != last_digit) {
      return false;
    }
    x = x / 10;
  }
  return true;
}

// Task 3.8
void leftTriangle(int x) {
  for (int i = 1; i <= x; i++) {
    for (int j = 1; j <= i; j++) {
      std::cout << "*";
    }
    std::cout << "\n";
  }
}

// Task 3.10
void guessGame() {
  int random_number = std::rand() % 10;
  int number_of_attempts = 0;
  int user_number;
  while (true) {
    std::cout << "Enter number from 0 to 9: ";
    std::cin >> user_number;
    if (std::cin.fail() || user_number < 0 || user_number > 9) {
      std::cout << "\nInvalid input\n";
      break;
    }
    number_of_attempts++;
    if (user_number == random_number) {
      std::cout << "You win\n";
      std::cout << "You guessed the number in " << number_of_attempts
                << " attempts\n";
      break;
    } else {
      std::cout << "You lose\n";
    }
  }
}

// Task 4.2
int findLast(int arr[], int x) {
  int last_index = -1;
  for (int i = 0; i < 7; i++) {
    if (arr[i] == x) {
      last_index = i;
    }
  }
  return last_index;
}

// Task 4.4
int* add(int arr[], int x, int pos) {
  int* new_arr = new int[6];
  for (int i = 0; i < pos; i++) {
    new_arr[i] = arr[i];
  }
  new_arr[pos] = x;
  for (int i = pos; i < 5; i++) {
    new_arr[i + 1] = arr[i];
  }
  return new_arr;
}

// Task 4.6
void reverse(int arr[]) {
  for (int i = 0; i < 5 / 2; i++) {
    int temp = arr[i];
    arr[i] = arr[4 - i];
    arr[4 - i] = temp;
  }
}

// Task 4.8
int* concat(int arr1[], int arr2[]) {
  int* new_arr = new int[6];
  for (int i = 0; i < 3; i++) {
    new_arr[i] = arr1[i];
  }
  for (int i = 0; i < 3; i++) {
    new_arr[i + 3] = arr2[i];
  }
  return new_arr;
}

// Task 4.10
int* deleteNegative(int arr[]) {
  int count = 0;
  for (int i = 0; i < 7; i++) {
    if (arr[i] >= 0) {
      count++;
    }
  }
  int* new_arr = new int[count];
  int j = 0;
  for (int i = 0; i < 7; i++) {
    if (arr[i] >= 0) {
      new_arr[j] = arr[i];
      j++;
    }
  }
  return new_arr;
}

}  // namespace

int main() {
  std::cout << std::boolalpha;

  std::cout << "Task 1.2\n";
  int number;
  std::cout << "Enter number x: ";
  std::cin >> number;
  if (std::cin.fail()) {
    std::cout << "Invalid input\n";
    return 0;
  }
  if (number > -10 && number < 10) {
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
  } else {
    std::cout << isUpperCase(symbol);
  }

  std::cout << "\nTask 1.8\n";
  int number_a;
  int number_b;
  std::cout << "\nEnter number a: ";
  std::cin >> number_a;
  if (std::cin.fail()) {
    std::cout << "Invalid input\n";
    return 0;
  }
  std::cout << "\nEnter number b: ";
  std::cin >> number_b;
  if (std::cin.fail()) {
    std::cout << "Invalid input\n";
    return 0;
  }
  if (number_a == 0 || number_b == 0) {
    std::cout << "Invalid input\n";
    return 0;
  }
  std::cout << isDivisor(number_a, number_b);

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
  std::cin >> number_a;
  if (std::cin.fail()) {
    std::cout << "\nInvalid input\n";
    return 0;
  }
  std::cout << "Enter number y: ";
  std::cin >> number_b;
  if (std::cin.fail()) {
    std::cout << "\nInvalid input\n";
    return 0;
  }
  double result1 = safeDiv(number_a, number_b);
  std::cout << "Result: " << result1;

  std::cout << "\nTask 2.4\n";
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
  std::cout << makeDecision(number_a, number_b);

  std::cout << "\nTask 2.6\n";
  int number_c;
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
  if (std::cin.fail() || number_x < 0) {
    std::cout << "\nInvalid input\n";
    return 0;
  }
  std::cout << age(number_x);

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
  if (std::cin.fail() || number_x < 0) {
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
  if (std::cin.fail() || number_y < 0) {
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
  if (std::cin.fail() || (number_x <= 0)) {
    std::cout << "\nInvalid input\n";
    return 0;
  }
  leftTriangle(number_x);

  std::cout << "\nTask 3.10\n";
  std::srand(std::time(nullptr));
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
  if (pos < 0 || pos > 5) {
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
  int new_size = 0;
  for (int i = 0; i < 7; i++) {
    if (arr[i] >= 0) {
      new_size++;
    }
  }
  std::cout << "Result: ";
  for (int i = 0; i < new_size; i++) {
    std::cout << result5[i] << " ";
  }
  std::cout << "\n";
  delete[] result5;

  return 0;
}
