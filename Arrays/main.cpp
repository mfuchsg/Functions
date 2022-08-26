#include<iostream>
using namespace std;

//#define HomeWork

const int ROWS = 3;
const int COLS = 8;

void fillrand(int arr[], const int n);
void fillrand(double arr[], const int n);
void fillrand(short arr[], const int n);
void fillrand(float arr[], const int n);
void fillrand(char arr[], const int n);
void fillrand(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(short arr[], const int n);
void Print(float arr[], const int n);
void Print(char arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(short arr[], const int n);
void Sort(float arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
double Sum(short arr[], const int n);
double Sum(float arr[], const int n);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(short arr[], const int n);
double Avg(float arr[], const int n);

void minValue(int arr[], const int n);
void minValue(double arr[], const int n);
void minValue(short arr[], const int n);
void minValue(float arr[], const int n);

void maxValue(int arr[], const int n);
void maxValue(double arr[], const int n);
void maxValue(short arr[], const int n);
void maxValue(float arr[], const int n);

void ShiftLeft(int arr[], const int n);
void ShiftLeft(double arr[], const int n);
void ShiftLeft(short arr[], const int n);
void ShiftLeft(float arr[], const int n);
void ShiftLeft(char arr[], const int n);

void ShiftRight(int arr[], const int n);
void ShiftRight(double arr[], const int n);
void ShiftRight(short arr[], const int n);
void ShiftRight(float arr[], const int n);
void ShiftRight(char arr[], const int n);

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
void Print(int arr[], const int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
void Print(double arr[], const int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t" << " ";
    }
    cout << endl;
}
void Print(short arr[], const int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t" << " ";
    }
    cout << endl;
}
void Print(float arr[], const int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t" << " ";
    }
    cout << endl;
}
void Print(char arr[], const int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t" << " ";
    }
    cout << endl;
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
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
void Sort(int arr[], const int n)
{
    for (int  i = 0; i < n; i++)
    {
            for(int j = i + 1; j < n; j++)
            {
                if(arr[i] > arr[j])
                {
                    int buffer = arr[i];
                    arr[i] = arr[j];
                    arr[j] = buffer;
                }
            }
    }
}
void Sort(double arr[], const int n)
{
    for (int  i = 0; i < n; i++)
    {
            for(int j = i + 1; j < n; j++)
            {
                if(arr[i] > arr[j])
                {
                    double buffer = arr[i];
                    arr[i] = arr[j];
                    arr[j] = buffer;
                }
            }
    }
}
void Sort(short arr[], const int n)
{
    for (int  i = 0; i < n; i++)
    {
            for(int j = i + 1; j < n; j++)
            {
                if(arr[i] > arr[j])
                {
                    double buffer = arr[i];
                    arr[i] = arr[j];
                    arr[j] = buffer;
                }
            }
    }
}
void Sort(float arr[], const int n)
{
    for (int  i = 0; i < n; i++)
    {
            for(int j = i + 1; j < n; j++)
            {
                if(arr[i] > arr[j])
                {
                    double buffer = arr[i];
                    arr[i] = arr[j];
                    arr[j] = buffer;
                }
            }
    }
}
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
