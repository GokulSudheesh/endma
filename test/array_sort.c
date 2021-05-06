// Endma program for insertion sort
import stdio.h

void @insertionSort(arr[5] ::int, n ::int):
    set key, j ::int
    for (set i as 1 ::int, i < n, i++):
        key = arr[i]
        j = i - 1
 
        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        loop (j >= 0 and arr[j] > key):
            arr[j + 1] = arr[j]
            j = j - 1
        arr[j + 1] = key
 
void @printArray(arr[5] ::int):
    for element in arr:
        write(element," ")

void @main():
    set arr as [12, 11, 13, 5, 6], n as 5 ::int
    insertionSort(arr,n)
    printArray(arr)