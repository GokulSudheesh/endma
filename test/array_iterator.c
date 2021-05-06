import stdio.h
import string.h

int @main():
    set float_array as [1.0,2.0,3.0,4.0,5.0] ::float
    set int_array as [1,2,3,4,5] ::int
    set char_array as ['h','i'], string_array as ["never", "gonna","give","you","up","!"] ::string
    for f in float_array:
        write(f," ")
    println()
    for d in int_array:
        write(d," ")
    println()
    for c in char_array:
        write(c," ")
    println()
    for s in string_array:
        write(s," ")