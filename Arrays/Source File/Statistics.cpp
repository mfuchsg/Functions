//
//  Statistics.cpp
//  Arrays
//
//  Created by Matvei Gavrilchik on 28.08.22.
//

#include "Statistics.hpp"
int Sum(int arr[], const int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
double Sum(double arr[], const int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
double Sum(short arr[], const int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
double Sum(float arr[], const int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
double Avg(int arr[], const int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return (double)sum / n;
}
double Avg(double arr[], const int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return (double)sum / n;
}
double Avg(short arr[], const int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return (double)sum / n;
}
double Avg(float arr[], const int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return (double)sum / n;
}
void minValue(int arr[], const int n)
{
    double min = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < min) min = arr[i];
    }
    cout << "Минимальное число в массиве: " << min << endl;
}
void minValue(double arr[], const int n)
{
    double min = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < min) min = arr[i];
    }
    cout << "Минимальное число в массиве: " << min << endl;
}
void minValue(short arr[], const int n)
{
    double min = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < min) min = arr[i];
    }
    cout << "Минимальное число в массиве: " << min << endl;
}
void minValue(float arr[], const int n)
{
    double min = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < min) min = arr[i];
    }
    cout << "Минимальное число в массиве: " << min << endl;
}
void maxValue(int arr[], const int n)
{
    double max = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > max)max = arr[i];
    }
    cout << "Наибольшее число в массиве: " << max << endl;
}
void maxValue(double arr[], const int n)
{
    double max = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > max)max = arr[i];
    }
    cout << "Наибольшее число в массиве: " << max << endl;
}
void maxValue(short arr[], const int n)
{
    double max = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > max)max = arr[i];
    }
    cout << "Наибольшее число в массиве: " << max << endl;
}
void maxValue(float arr[], const int n)
{
    double max = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > max)max = arr[i];
    }
    cout << "Наибольшее число в массиве: " << max << endl;
}
