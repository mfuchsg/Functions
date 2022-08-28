//
//  Shift.cpp
//  Arrays
//
//  Created by Matvei Gavrilchik on 28.08.22.
//
#include "Shift.hpp"
void ShiftLeft(int arr[], const int n)
{
    double number_of_shift;
    cout << "Введите на сколько сдвинуть массив влево: "; cin >> number_of_shift;
    for (int i =0; i <= n - number_of_shift; i++)
    {
        int buffer = arr[0];
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i+1];
        }
        arr[n-1] = buffer;
    }
}
void ShiftLeft(double arr[], const int n)
{
    double number_of_shift;
    cout << "Введите на сколько сдвинуть массив влево: "; cin >> number_of_shift;
    for (int i =0; i <= n - number_of_shift; i++)
    {
        int buffer = arr[0];
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i+1];
        }
        arr[n-1] = buffer;
    }
}
void ShiftLeft(short arr[], const int n)
{
    double number_of_shift;
    cout << "Введите на сколько сдвинуть массив влево: "; cin >> number_of_shift;
    for (int i =0; i <= n - number_of_shift; i++)
    {
        int buffer = arr[0];
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i+1];
        }
        arr[n-1] = buffer;
    }
}
void ShiftLeft(float arr[], const int n)
{
    double number_of_shift;
    cout << "Введите на сколько сдвинуть массив влево: "; cin >> number_of_shift;
    for (int i =0; i <= n - number_of_shift; i++)
    {
        int buffer = arr[0];
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i+1];
        }
        arr[n-1] = buffer;
    }
}
void ShiftLeft(char arr[], const int n)
{
    char number_of_shift;
    cout << "Введите на сколько сдвинуть массив влево: "; cin >> number_of_shift;
    for (int i =0; i <= n - number_of_shift; i++)
    {
        int buffer = arr[0];
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i+1];
        }
        arr[n-1] = buffer;
    }
}
void ShiftRight(int arr[], const int n)
{
    double number_of_shift;
    cout << "Введите на сколько сдвинуть массив впрво: "; cin >> number_of_shift;
    for (int i =0; i <= number_of_shift; i++)
    {
        int buffer = arr[0];
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i+1];
        }
        arr[n-1] = buffer;
    }
}
void ShiftRight(double arr[], const int n)
{
    double number_of_shift;
    cout << "Введите на сколько сдвинуть массив впрво: "; cin >> number_of_shift;
    for (int i =0; i <= number_of_shift; i++)
    {
        int buffer = arr[0];
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i+1];
        }
        arr[n-1] = buffer;
    }
}
void ShiftRight(short arr[], const int n)
{
    double number_of_shift;
    cout << "Введите на сколько сдвинуть массив впрво: "; cin >> number_of_shift;
    for (int i =0; i <= number_of_shift; i++)
    {
        int buffer = arr[0];
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i+1];
        }
        arr[n-1] = buffer;
    }
}
void ShiftRight(float arr[], const int n)
{
    double number_of_shift;
    cout << "Введите на сколько сдвинуть массив впрво: "; cin >> number_of_shift;
    for (int i =0; i <= number_of_shift; i++)
    {
        int buffer = arr[0];
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i+1];
        }
        arr[n-1] = buffer;
    }
}
void ShiftRight(char arr[], const int n)
{
    char number_of_shift;
    cout << "Введите на сколько сдвинуть массив впрво: "; cin >> number_of_shift;
    for (int i =0; i <= number_of_shift; i++)
    {
        int buffer = arr[0];
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i+1];
        }
        arr[n-1] = buffer;
    }
}

