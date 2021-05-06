import stdio.h
int@main():
    set var1=1,var2=2::int
    set var3=45,var4=50::int
    if(var1 is not var2):
        write("\n",var1," is not equal to ", var2)
        var1=var2
        if(var2 is var1):
            write("\n",var1," is equal to ", var2)
    elif(var2 is var3):
        var3++
    else:
        println("Some message")
    return 0