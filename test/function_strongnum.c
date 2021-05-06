import stdio.h
int @ fact(num::int):
    set result as 1 :: int
    loop(num is not 0):
        result=result*num
        num--
    return result

int @ strong_sum(num::int):
    set sum as 0::int
    loop(num>0):
        sum = sum + fact(num%10)
        num = num/10
    return sum

int @ main():
    set var :: int
    var = input("Enter a number: ")
    if(var is strong_sum(var)):
        println("Strong number")
    else:
        println("Not Strong number")
    return 0