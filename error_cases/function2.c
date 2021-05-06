import stdio.h

int @sum_int(num1::int,num2::int):
    return (num1+num2)
float @sum_float(num1::float,num2::float):
    return (num1+num2)
int @main():
    set num1 ::float
    set num2 ::int
    set a as 1, b as 2 ::int
    num1 = (2.0-1.0)*1.0+sum_float(1.0,2.0)//1.0+sum_float(1.0,2.0)
    write("\nnum1: ",num1)
    num2 = (2-1)*1+sum_float(1.0,2.0)//Type mismatch
    write("\nnum1: ",num2)