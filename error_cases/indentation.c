//Sample endma code to print Fibonacci series up to user defined N.
import stdio.h
void @main():
    set a as 0, b as 1, n ::int
        n = input("Enter N:")
    loop(n>0):
        write(a," ")
        set t ::int
        t = a+b
        a = b
        b = t
        n--