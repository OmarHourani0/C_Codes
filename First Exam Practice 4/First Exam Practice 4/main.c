//
//  main.c
//  First Exam Practice 4
//
//  Created by Omar on 09/04/2022.
//

#include <stdio.h>
#include <stdlib.h>
#define size 37



void rain_in(float rain[], int sz)
{
    for(int i = 0; i < sz; ++i)
    {
        rain[i] = (rand() % (1000 - 100 + 1) + 100);
    }
}


float avrain(float rain[], int sz)
{
    float sum = 0, avg = 0;
    
    for(int i = 0; i < sz; ++i)
    {
        sum = sum + rain[i];
    }
    avg = sum / sz;
    return avg;
    
}


int over500(float rain[], int sz)
{
    int count = 0;
    
    for(int i = 0; i < sz; ++i)
    {
        if(rain[i] > 500)
        {
            count++;
        }
    }
    return count;

}


float maxx(float rain[], int sz)
{
    int i = 0;
    float max = 0;
    
    max = -100;
    
    for(i = 0; i < sz; ++i)
    {
        if(rain[i] > max)
        {
            max = rain[i];
        }
    }
    return max;
}


int max_year(float rain[], int sz, float max)
{
    int index;
    
    for(int i = 0; i < sz; ++i)
    {
        if(rain[i] == max)
        {
            index = i;
        }
    }

    return index;
}





int main()
{
    float rain[size];
    float avg, max;
    int index, count;
    
    rain_in(rain, size);
    avg = avrain(rain, size);
    count = over500(rain, size);
    max = maxx(rain, size);
    index = max_year(rain, size, max);
    //printf("\n%f\t%.2f\n\n", max, rain[0]);
    
    printf("\nThe year %d had the highest rain fall of %.2f", (index + 1980), max);
    printf("\nThe average rain fall was %f", avg);
    printf("\n%d years had rainfall of over 500.00mm\n\n\n", count);
    return 0;
}
