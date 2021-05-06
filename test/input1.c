import stdio.h
import string.h

void @ main():
    set message1 as "\nEnter Details",name[30]::string
    set year,i=0 :: int
    set cgpa::float
    loop(i<2):
        write(message1)
        name=input("Enter your name: ")
        year=input("Enter your year: ")
        cgpa=input("\nCGPA: ")
        println("----Details----")
        write("\nName: ",name," Year: ",year," CGPA: ",cgpa)
        i++