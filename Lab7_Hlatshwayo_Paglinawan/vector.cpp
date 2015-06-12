//
//  main.cpp
//  lab7
//
//  Created by Mbusi Hlatshwayo on 6/9/15.
//  Copyright (c) 2015 Mbusi Hlatshwayo. All rights reserved.
//

#include <iostream>
#include <set>
#include <vector>

using namespace std;

// A function to print all prime numbers smaller than n using vector<int>
void SieveOfEratosthenes(int n)
{
    
    vector<int> numbers (n, 0); // create vector with n elements all 0
    
    // There are no prime numbers smaller than 2
    if (n >= 2)
    {
        
        for (int i = 2; i <= n; i++) {
            
            if (numbers[i] == 0) { // check if number is composite initially all are prime
                
                // j will become i ^ 2 i.e. 2,4,6,8
                for (int j = i * i; j <= n; j += i) {
                    
                    numbers[j] = 1; // mark not prime number
                    
                }
                
            }
            
        }
        
    }
    
    // loop to print all prime numbers
    for (int index = 2; index < n; index++) {
        
        if (numbers[index] == 0) { // if it is zero the number is prime
            // print the prime number
            cout << index << endl;
            
        }
        
    }

}
/*
// A function to print all prime numbers smaller than n using set<int>
void SieveOfEratosthenesSet(int n)
{
    
    set<int> numbers (n, 0); // create vector with n elements all 0
    
    // There are no prime numbers smaller than 2
    if (n >= 2)
    {
        
        set<int>::iterator it;
        for (it = numbers.begin(); it != numbers.end(); it++) {
            
            if (*it == 0) { // check if number is composite initially all are prime
 
                set<int>::iterator iter;
                // j will become i ^ 2 i.e. 2,4,6,8
                for (int j = it * it; j <= n; j += i) {
                    
                    numbers[j] = 1; // mark not prime number
                    
                }
 
            }
            
        }
        
    }
    
    // loop to print all prime numbers
    for (int index = 2; index < n; index++) {
 
        if (numbers[index] == 0) { // if it is zero the number is prime
            // print the prime number
            cout << index << endl;
            
        }
 
    }
    
}
*/

int main(int argc, const char * argv[]) {

    SieveOfEratosthenes(1000);
}
