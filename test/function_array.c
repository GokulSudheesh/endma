import stdio.h
int @ *getarray(*a::int):
    print("Enter the elements in an array : ") 
    for(set i as 0::int,i<5,i++): 
        input(a[i])
    return a

int @sum_array(a[5]::int):
    set sum as 0::int
    for el in a:
        sum=sum+el
    return sum

int @ main():
    set a[5],*n::int
    n=getarray(a)
    println("Elements of array are :")
    for element in a:
        print("%d ",element)
    write("\nSum of array: ",sum_array(a))