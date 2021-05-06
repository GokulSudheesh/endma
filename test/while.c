import stdio.h

int @ main():
    set fact as 1,num, num2 ::int
    num=input("Enter a number to calculate factorial: ")
    num2=num
    loop(num!=1):
        fact = fact*num
        num--
    write("\n Factorial of ",num2,": ",fact)
