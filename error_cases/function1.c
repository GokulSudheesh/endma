import stdio.h
import string.h

set message1 as "\nEnter Details",name[30]::string
set year,i=0 :: int
set cgpa::float

void @print_details():
    println("----Details----")
    write("\nName: ",name," Year: ",year," CGPA: ",cgpa)

void @check_input(name1[30]::string,CGPA::float,year1::int):
    if (name1 == ""):
        write("\nInvalid input")
    elif(CGPA<5.0):
        write("\nYou got this!")
    else:
        write("\nWell done!")

void @main():
    set i as 0,n ::int
    n=input("Enter no.of students: ")
    loop(i<2):
        write(message1)
        name=input("Enter your name: ")
        year=input("Enter your year: ")
        cgpa=input("\nCGPA: ")
        check_input()//Few arguments to function.
        print_details()
        i++