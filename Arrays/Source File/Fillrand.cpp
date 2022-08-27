

#include "Fillrand.hpp"
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
