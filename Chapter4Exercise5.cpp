/*

file name:Chapter4exercise5.cpp
GitHub URL
programmer:Yaqoob Nagi
Date:February 2025
Requirements:

Body Mass Index
Write a program that calculates and displays a person's body mass index (BMI). 
The BMI is often used to determine whether a person is overweight or underweight 
for his or her height. A person's BMI is calculated with the following formula:BMI = weight × 703/height
where weight is measured in pounds and height is measured in inches. 
The program should display a message indicating whether the person has optimal 
weight, is underweight, or is overweight. A person's weight is considered to be 
optimal if his or her BMI is between 18.5 and 25. If the BMI is less than 18.5, 
the person is considered to be underweight. If the BMI value is greater than 25, the person is considered to be overweight.
*/
#include <iostream>
using namespace std;


int main()
{
    double weight, height, bmi;
    cout << "Enter weight (in pounds): ";
    cin >> weight;
    cout << "Enter height (in inches): ";
    cin >> height;

    bmi = (weight * 703) / (height * height);
    cout << "Your BMI is: " << bmi << endl;

    if (bmi < 18.5)
        cout << "You are underweight." << endl;
    else if (bmi >= 18.5 && bmi <= 25)
        cout << "You are at optimal weight." << endl;
    else
        cout << "You are overweight." << endl;
                

    return 0;
}