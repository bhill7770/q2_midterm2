//Brianna Hill bhill28@student.gsu.edu

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// for  comparator function 
static int toCompare(const void* a, const void* b)
{
// defining  rules for comparison
   return strcmp(*(const char**)a, *(const char**)b);
}

// sort the array
void sort_alphabetic(const char* arr[], int x)
{

 // implement qsort function to sort the array and the assistence of comparator
 qsort(arr, x, sizeof(const char*), toCompare);
}

int main()
{
 //  array of terms to be sorted
const char* arr[]
                = { "Sytems", "Programming", "Deep", "Learning", "Internet", "Things", "Robotics", "Course"};

        int x = sizeof(arr) / sizeof(arr[0]);
        int i;

        // Sort the given terms
        sort_alphabetic(arr, x);

        // Print the sorted terms
printf("Sorted array is\n");
        for (i = 0; i < x; i++)
                printf("%d: %s \n", i, arr[i]);

        return 0;
}

