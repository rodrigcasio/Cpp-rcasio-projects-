// example 3.
#include <iostream>
#include <cmath>

namespace CodecademyMath{
    double square(int num){
        return num * num;
    }

    double cube(int num){
        return num * num * num;
    }

    double pow(int num, int exp){
        int ret = 1;
        for(int i = 0; i < exp; i++){
            ret *= num;
        }
        return ret;
    }

    double factorial(int num){
        if(num < 0){
            throw std::invalid_argument("Factorial is not defined for negative numbers.");
        }
        int result = 1;
        for(int i = 1; i <= num; i++){
            result *= i;
        }
        return result;
    }
    // gcd : greatest common divisior
    int gcd(int a, int b){
        while(b != 0){
            int temp = b;
            b = a % b;
            a = temp;
        }
        return std::abs(a);
    }
    
    // lcm = least common multiple
    int lcm(int a, int b){
        if(a == 0 || b == 0) return 0;
        return std::abs(a * b) / gcd(a, b);
    }

    bool isPrime(int num){
        if(num <= 0) return false;
        for(int i = 2; i <= std::sqrt(num); i++){
            if(num % i == 0) return false;
        }
        return true;
    }

    int fibonacci(int n){
        if(n == 0) return 0;
        if(n == 1) return 1;

        int a = 0, b = 1, result;
        for(int i = 2; i <= n; i++){
            result = a + b;
            a = b;
            b = result;
        }
        return result;
    }
}