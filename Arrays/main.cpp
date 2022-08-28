#include "stdafx.hpp"
#include "Fillrand.hpp"
#include "Print.hpp"
#include "Sort.hpp"
#include "Statistics.hpp"
#include "Shift.hpp"



int main()
{
    setlocale(LC_ALL, " ");
    const int n = 5;
    int arr[n];
    fillrand(arr, n);
    Print(arr, n);
    Sort(arr, n);
    Print(arr,n);
   cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
    cout << "Среднее арифмитическое элементов массива: " << Avg(arr, n) << endl;
    minValue(arr, n);
    maxValue(arr, n);
    ShiftLeft(arr, n);
    Print(arr, n);
    ShiftRight(arr, n);
    Print(arr, n);
    
    cout << "/////////////////////////////////" << endl;
    
    const int B_SIZE = 8;
    double brr[B_SIZE];
    fillrand(brr, B_SIZE);
    Print(brr, B_SIZE);
    Sort(brr, B_SIZE);
    Print(brr, B_SIZE);
    cout << "Сумма элементов массива: " << Sum(brr, B_SIZE) << endl;
    cout << "Среднее арифмитическое элементов массива: " << Avg(brr, B_SIZE) << endl;
    minValue(brr, B_SIZE);
    maxValue(brr, B_SIZE);
    ShiftLeft(brr, B_SIZE);
    Print(brr, B_SIZE);
    ShiftRight(brr, B_SIZE);
    Print(brr, B_SIZE);
  
    int i_arr_2[ROWS][COLS];
    fillrand(i_arr_2, ROWS, COLS);
    Print(i_arr_2, ROWS, COLS);
}

