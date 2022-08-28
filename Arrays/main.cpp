#include<iostream>
using namespace std;

#define HomeWork

const int ROWS = 3;
const int COLS = 8;


void fillrand(int arr[], const int n);
void fillrand(double arr[], const int n);
void fillrand(float arr[], const int n);
void fillrand(short arr[], const int n);
void fillrand(char arr[], const int n);
void fillrand(int arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void Print(T arr[], const int n);
template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void Sort(T arr[], const int n);

template<typename T>
T Sum(T arr[], const int n);

template<typename T>
double Avg(T arr[], const int n);

template<typename T>
void minValue(T arr[], const int n);
template<typename T>
void maxValue(T arr[], const int n);

template<typename T>
void ShiftLeft(T arr[], const int n);
template<typename T>
void ShiftRight(T arr[], const int n);

int main()
{
    setlocale(LC_ALL, " ");
#ifdef HomeWork
    {
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
    }
#endif
    cout << "////////////////////////////////////////" << endl;
    int i_arr_2[ROWS][COLS];
    fillrand(i_arr_2, ROWS, COLS);
    Print(i_arr_2, ROWS, COLS);
}

void fillrand(int arr[], const int n)
{
    for(int i = 0; i < n; i++)
    {
        arr[i] = rand()%100;
    }
}
void fillrand(double arr[], const int n)
{
    for(int i = 0; i < n; i++)
    {
        arr[i] = double(rand() % 1000)/100;
    }
}
void fillrand(short arr[], const int n)
{
    for(int i = 0; i < n; i++)
    {
        arr[i] = double(rand() % 1000)/100;
    }
}
void fillrand(float arr[], const int n)
{
    for(int i = 0; i < n; i++)
    {
        arr[i] = double(rand() % 1000)/100;
    }
}
void fillrand(char arr[], const int n)
{
    for(int i = 0; i < n; i++)
    {
        arr[i] = rand()%100;
    }
}
void fillrand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            arr[i][j] = rand() % 100;
        }
    }
}
template<typename T>
void Print(T arr[], const int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}
template<typename T>
void Sort(T arr[], const int n)
{
    for (int  i = 0; i < n; i++)
    {
            for(int j = i + 1; j < n; j++)
            {
                if(arr[i] > arr[j])
                {
                    T buffer = arr[i];
                    arr[i] = arr[j];
                    arr[j] = buffer;
                }
            }
    }
}
template<typename T>
T Sum(T arr[], const int n)
{
    T sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
template<typename T>
double Avg(T arr[], const int n)
{
    T sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return (double)sum / n;
}
template<typename T>
void minValue(T arr[], const int n)
{
    T min = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < min) min = arr[i];
    }
    cout << "Минимальное число в массиве: " << min << endl;
}
template<typename T>
void maxValue(T arr[], const int n)
{
    T max = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > max)max = arr[i];
    }
    cout << "Наибольшее число в массиве: " << max << endl;
}
template<typename T>
void ShiftLeft(T arr[], const int n)
{
    T number_of_shift;
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
template<typename T>
void ShiftRight(T arr[], const int n)
{
    T number_of_shift;
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
