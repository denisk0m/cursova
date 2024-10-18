#include "athlete.h"
#include <QVector>
#include <algorithm> // For std::swap
#include <functional>

// Function to partition the array for quicksort
int partition(QVector<Athlete>& array, int low, int high, std::function<bool(Athlete,Athlete)> comparator) {
    Athlete pivot = array[high];  // Choose the last element as pivot
    int i = low - 1;  // Index of the smaller element

    for (int j = low; j < high; j++) {
        // Compare using the comparator function based on the toGrow flag
        if (comparator(array[j], pivot)) {
            i++;
            std::swap(array[i], array[j]);  // Swap if element is in the correct order
        }
    }
    std::swap(array[i + 1], array[high]);  // Move the pivot to the correct position
    return i + 1;  // Return the index of the pivot
}

// QuickSort function to sort the array
void quickSort(QVector<Athlete>& array, int low, int high,  std::function<bool(Athlete,Athlete)> comparator) {
    if (low < high) {
        int pi = partition(array, low, high, comparator);  // Partition the array
        quickSort(array, low, pi - 1, comparator);  // Recursively sort elements before partition
        quickSort(array, pi + 1, high, comparator);  // Recursively sort elements after partition
    }
}

// Wrapper function for quickSort
void sortAthletes(QVector<Athlete>& array , std::function<bool(Athlete,Athlete)> comparator) {
    quickSort(array, 0, array.size() - 1,comparator);
}
