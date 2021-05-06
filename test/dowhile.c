// Program to add numbers until the user enters zero
import stdio.h
int @ main():
    set number,sum as 0 ::float
    do:
        number=input("Enter a number: ")
        sum = sum+number
    until(number is not 0.0)
    write("\nSum = ",sum)
    return 0