#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Task 1: Print numbers from 1 to 10.
    cout << "Numbers from 1 to 10:" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << i << " ";
    }
    cout << endl;

    // Task 2: Sum numbers from 1 to 100 and print the result.
    int sum = 0;
    for (int i = 1; i <= 100; ++i) {
        sum += i;
    }
    cout << "Sum of numbers from 1 to 100: " << sum << endl;

    // Task 3: Print even numbers from 2 to 20.
    cout << "Even numbers from 2 to 20:" << endl;
    for (int i = 2; i <= 20; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    // Task 4: Print the multiplication table for a number entered by the user.
    int num;
    cout << "Enter a number for the multiplication table: ";
    cin >> num;
    cout << "Multiplication table for " << num << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << num << " * " << i << " = " << num * i << endl;
    }

    // Task 5: Find the sum of squares of numbers from 1 to 5.
    int total_squared = 0;
    for (int i = 1; i <= 5; ++i) {
        total_squared += i * i;
    }
    cout << "Sum of squares of numbers from 1 to 5: " << total_squared << endl;

    // Task 6: Print the factorial of a number entered by the user.
    int num_fact;
    cout << "Enter a number to compute its factorial: ";
    cin >> num_fact;
    int factorial = 1;
    for (int i = 1; i <= num_fact; ++i) {
        factorial *= i;
    }
    cout << "Factorial of " << num_fact << ": " << factorial << endl;

    // Task 7: Find the sum of all prime numbers from 1 to 50.
    int prime_sum = 0;
    for (int i = 2; i <= 50; ++i) {
        bool is_prime = true;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            prime_sum += i;
        }
    }
    cout << "Sum of prime numbers from 1 to 50: " << prime_sum << endl;

    // Task 8: Print Fibonacci numbers up to n, where n is entered by the user.
    int n_fib;
    cout << "Enter the number of Fibonacci numbers to display: ";
    cin >> n_fib;
    int a = 0, b = 1;
    cout << "Fibonacci numbers up to " << n_fib << ": ";
    for (int i = 0; i < n_fib; ++i) {
        cout << a << " ";
        int temp = a;
        a = b;
        b = temp + b;
    }
    cout << endl;

    // Task 9: Determine if a user-entered number is prime.
    int num_prime;
    bool is_prime = true;
    cout << "Enter a number to check for primality: ";
    cin >> num_prime;
    for (int i = 2; i * i <= num_prime; ++i) {
        if (num_prime % i == 0) {
            is_prime = false;
            break;
        }
    }
    if (is_prime && num_prime > 1) {
        cout << num_prime << " is a prime number." << endl;
    }
    else {
        cout << num_prime << " is not a prime number." << endl;
    }

    // Task 10: Print numbers from 10 to 1 in reverse order.
    cout << "Numbers from 10 to 1 in reverse order:" << endl;
    for (int i = 10; i >= 1; --i) {
        cout << i << " ";
    }
    cout << endl;

    // Task 11: Find the sum of the first 10 Fibonacci numbers.
    int fib_sum = 0, fib_a = 0, fib_b = 1;
    for (int i = 0; i < 10; ++i) {
        fib_sum += fib_a;
        int temp = fib_a;
        fib_a = fib_b;
        fib_b = temp + fib_b;
    }
    cout << "Sum of the first 10 Fibonacci numbers: " << fib_sum << endl;

    // Task 12: Print each letter of a word using a for loop.
    string word = "Hello";
    cout << "Each letter of the word 'Hello':" << endl;
    for (char c : word) {
        cout << c << " ";
    }
    cout << endl;

    // Task 13: Find sum of numbers divisible by 3 or 5 from 1 to 50
    int sum = 0;
    for (int i = 1; i <= 50; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    cout << "Task 13: Sum of numbers divisible by 3 or 5 from 1 to 50: " << sum << endl;

    // Task 14: Print even letters in the word "HELLO"
    string hello = "HELLO";
    cout << "Task 14: Even letters in the word \"HELLO\": ";
    for (int i = 0; i < hello.length(); i += 2) {
        cout << hello[i] << " ";
    }
    cout << endl;

    // Task 15: Find sum of squares of even numbers from 2 to 20
    int sum_of_squares = 0;
    for (int i = 2; i <= 20; i += 2) {
        sum_of_squares += i * i;
    }
    cout << "Task 15: Sum of squares of even numbers from 2 to 20: " << sum_of_squares << endl;

    // Task 16: Check if a number is perfect
    int num;
    cout << "Enter a number to check if it's perfect: ";
    cin >> num;
    int sum_of_divisors = 1; // 1 is always a divisor
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum_of_divisors += i;
        }
    }
    if (sum_of_divisors == num) {
        cout << num << " is a perfect number." << endl;
    }
    else {
        cout << num << " is not a perfect number." << endl;
    }

    // Task 17: Print prime numbers from 10 to 50
    cout << "Prime numbers from 10 to 50: ";
    for (int i = 10; i <= 50; ++i) {
        bool is_prime = true;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            cout << i << " ";
        }
    }
    cout << endl;

    // Task 18: Print rectangle of stars (5x5)
    cout << "Rectangle of stars (5x5):" << endl;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    // Task 19: Print pyramid of stars
    cout << "Pyramid of stars:" << endl;
    int rows = 5;
    for (int i = 1; i <= rows; ++i) {
        for (int space = 1; space <= rows - i; ++space) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    // Task 20: Read and print first 5 lines from a file
    cout << "Reading and printing first 5 lines from a file:" << endl;
    ifstream file("example.txt");
    string line;
    for (int i = 0; i < 5 && getline(file, line); ++i) {
        cout << line << endl;
    }

    //While:

    // Task 1: Ask the user for a password, continue asking until they enter the correct one.
    string password = "secret";
    string input;
    cout << "Task 1: Please enter the password: ";
    cin >> input;
    while (input != password) {
        cout << "Incorrect password. Please try again: ";
        cin >> input;
    }
    cout << "Password correct. Access granted." << endl;

    // Task 2: Find the sum of even numbers from 1 to 50 using a while loop.
    int sum = 0;
    int num = 2;
    cout << "Task 2: Sum of even numbers from 1 to 50: ";
    while (num <= 50) {
        sum += num;
        num += 2;
    }
    cout << sum << endl;

    // Task 3: Determine the number of digits in the user-entered number.
    int number;
    cout << "Task 3: Please enter a number: ";
    cin >> number;
    int count = 0;
    int temp = number;
    while (temp != 0) {
        temp /= 10;
        ++count;
    }
    cout << "Number of digits: " << count << endl;

    // Task 4: Print all divisors of the user-entered number.
    int divisor = 1;
    cout << "Task 4: Divisors of " << number << ": ";
    while (divisor <= number) {
        if (number % divisor == 0) {
            cout << divisor << " ";
        }
        ++divisor;
    }
    cout << endl;

    // Task 5: Read numbers from the user until they enter 0, then print their sum.
    int total = 0;
    int input_number;
    cout << "Task 5: Please enter numbers (enter 0 to finish): ";
    cin >> input_number;
    while (input_number != 0) {
        total += input_number;
        cin >> input_number;
    }
    cout << "Sum of numbers: " << total << endl;

    // Task 6: Determine if the user-entered number is a palindrome.
    int palindrome_number;
    cout << "Task 6: Please enter a number to check for palindrome: ";
    cin >> palindrome_number;
    int reversed = 0;
    int original = palindrome_number;
    while (palindrome_number > 0) {
        int remainder = palindrome_number % 10;
        reversed = reversed * 10 + remainder;
        palindrome_number /= 10;
    }
    if (original == reversed) {
        cout << "The number is a palindrome." << endl;
    }
    else {
        cout << "The number is not a palindrome." << endl;
    }

    // Task 7: Calculate the average of numbers entered by the user until they enter a negative number.
    int num_input;
    int count_input = 0;
    int sum_input = 0;
    cout << "Task 7: Please enter numbers (negative to finish): ";
    cin >> num_input;
    while (num_input >= 0) {
        sum_input += num_input;
        ++count_input;
        cin >> num_input;
    }
    if (count_input > 0) {
        double average = static_cast<double>(sum_input) / count_input;
        cout << "Average of entered numbers: " << average << endl;
    }
    else {
        cout << "No numbers were entered." << endl;
    }

    // Task 8: Implement the "guess the number" game using a while loop.
    int secret_number = 42;
    int guess;
    cout << "Task 8: Welcome to the Guess the Number game!" << endl;
    cout << "Try to guess the secret number (between 1 and 100)." << endl;
    cout << "Enter your guess: ";
    cin >> guess;
    while (guess != secret_number) {
        if (guess < secret_number) {
            cout << "Too low! Try again: ";
        }
        else {
            cout << "Too high! Try again: ";
        }
        cin >> guess;
    }
    cout << "Congratulations! You guessed the secret number!" << endl;

    // Task 9: Find the sum of factorials of numbers from 1 to 10.
    int factorial_sum = 0;
    int current_number = 1;
    int current_factorial = 1;
    while (current_number <= 10) {
        factorial_sum += current_factorial;
        ++current_number;
        current_factorial *= current_number;
    }
    cout << "Task 9: Sum of factorials of numbers from 1 to 10: " << factorial_sum << endl;

    // Task 10: Print each digit of the user-entered number in reverse order.
    int input_digit;
    cout << "Task 10: Please enter a number to reverse its digits: ";
    cin >> input_digit;
    cout << "Digits of the number in reverse order: ";
    while (input_digit != 0) {
        int digit = input_digit % 10;
        cout << digit << " ";
        input_digit /= 10;
    }
    cout << endl;

    //Do while

    // Task 1: Ask the user for a number until they enter an even number.
    int num;
    cout << "Task 1: Please enter an even number: ";
    cin >> num;
    do {
        if (num % 2 != 0) {
            cout << "Invalid input. Please enter an even number: ";
            cin >> num;
        }
    } while (num % 2 != 0);
    cout << "Thank you for entering an even number." << endl;

    // Task 2: Find the sum of odd numbers from 1 to 25 using a do-while loop.
    int sum = 0;
    int odd_num = 1;
    do {
        sum += odd_num;
        odd_num += 2;
    } while (odd_num <= 25);
    cout << "Task 2: Sum of odd numbers from 1 to 25: " << sum << endl;

    // Task 3: Print the multiplication table for the number entered by the user using a do-while loop.
    int input_num;
    cout << "Task 3: Please enter a number for the multiplication table: ";
    cin >> input_num;
    int multiplier = 1;
    do {
        cout << input_num << " * " << multiplier << " = " << input_num * multiplier << endl;
        ++multiplier;
    } while (multiplier <= 10);

    // Task 4: Ask the user for a password until they enter the correct one.
    string password = "secret";
    string user_password;
    do {
        cout << "Task 4: Please enter the password: ";
        cin >> user_password;
    } while (user_password != password);
    cout << "Password correct. Access granted." << endl;

    // Task 5: Print Fibonacci numbers up to n, where n is entered by the user, using a do-while loop.
    int n_fib;
    cout << "Task 5: Please enter the number of Fibonacci numbers to display: ";
    cin >> n_fib;
    int fib_a = 0, fib_b = 1;
    int fib_count = 0;
    do {
        cout << fib_a << " ";
        int temp = fib_a;
        fib_a = fib_b;
        fib_b = temp + fib_b;
        ++fib_count;
    } while (fib_count < n_fib);
    cout << endl;