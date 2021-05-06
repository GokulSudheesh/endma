import stdio.h
import string.h
void @ func1():    
int @ main():
    set string_1 = "string1", string_2 = "string1" :: string
    set string_3 = "string2", string_4 = "string4" :: string
    set string5[100], string6[100] :: string
    string5 = "stringmoree1"
    string6 = "string1"
    if(string_1 is string_2):
        write("\n",string_1," == ",string_2)
    if(string_3 is not string_1):
        write("\n",string_3," != ",string_1)
    if(string5>string_1):
        write("\n",string5," > ",string_1)
    if(string_1<string5):
        write("\n",string_1," < ",string5)
    if(string_2 is "string1"):
        write("\n",string_2," == string1")
    if(string_2[0] is 's'):
        println("YES")
    return 0