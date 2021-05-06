import stdio.h

void @main():
    set array as [1,2,3,4,5]::int
    for(set i as 0 ::int, i<5, i++):
        write(*(array+i)," ")