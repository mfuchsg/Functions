//
//  Sort.cpp
//  Arrays
//
//  Created by Matvei Gavrilchik on 28.08.22.
//

#include "Sort.hpp"
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
