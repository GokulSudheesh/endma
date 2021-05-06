# endma 1.0
Endma is a is a language (if you wanna call it a language) that really tries its best. The parser and the translator was designed with the help of compiler design tools such as lex and yacc. The code gets translated to C.

              _________                    _________
              | Endma |   lex and yacc     |   C   |
              |  code |  ----------------> |  Code |
              |_______|                    |_______|

### Keywords
Endma | C Language
------------ | -------------
```import``` | ```#include```
```elif``` | ```else if```
```loop``` | ```while```
```do....until``` | ```do....while```
```in``` | -
```set``` | ```-```
```@``` | ```-```
```print / println / write``` | ```printf```
```input / scanf``` | ```scanf```
```as``` | ```=```
```is``` | ```==```
```is not``` | ```!=```
```and``` | ```&&```
```or``` | ```\|\|```
```frame``` | ```struct```

### Types
int, float, double, char and string

### Declararation Statements
```
//Syntax: 
set var_name1 as value, var_name2, var_name3 = value ::type
//One dimensional array:
set array as [1,2,3] ::int
set string_array as [“Harambe”, “is”, “not”] ::string
//where “set” and “as” are keywords.
```
### Strings
Got rid of strcpy() and strcmp() in C by introducing assignment operator here’s an example:
```
import stdio.h
import string.h 

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
```
C Translation:
```C
#include <stdio.h>
#include <string.h>

int  main(){
  char string_1[9]="string1",string_2[9]="string1";
  char string_3[9]="string2",string_4[9]="string4";
  char string5[100],string6[100];
  strcpy(string5,"stringmoree1");
  strcpy(string6,"string1");
  if(strcmp(string_1,string_2)==0){
    printf("\n%s == %s",string_1,string_2);
  }
  if(strcmp(string_3,string_1)!=0){
    printf("\n%s != %s",string_3,string_1);
  }
  if(strcmp(string5,string_1)>0){
    printf("\n%s > %s",string5,string_1);
  }
  if(strcmp(string_1,string5)<0){
    printf("\n%s < %s",string_1,string5);
  }
  if(strcmp(string_2,"string1")==0){
    printf("\n%s == string1",string_2);
  }
  if(string_2[0]=='s'){
    printf("\nYES");
  }
  return 0;
}
```
### Scope
```
import stdio.h

void @main():
    for(set i as 0::int, i<3, i++):
        write(i," ")
        set j as 0 ::int
    write(j)
```
Parser:
```
#include <stdio.h>
void main(){
  for(int i=0; i<3; i++){
    printf("%d ",i);
    int j=0;
  }
 variable "j" undeclared
```
### Conditions
<table>
<tr>
</tr>
<tr>
<td>
<pre>if(logical_expression):<br>
    /*<br>
    body<br>
    */<br></pre>
</td>
<td>
<pre>if(logical_expression):<br>
    <tab>/*<br>
    body<br>
    */<br>
else:<br>
    /*<br>
    body<br>
    */<br></pre>
</td>
<td>
<pre>if(logical_expression):<br>
    /*<br>
    body<br>
    */<br>
elif(logical_expression):<br>
    /*<br>
    body<br>
    */<br>
else:<br>
    /*<br>
    body<br>
    */<br></pre>
</td>
</tr>
</table>

### Loops:
<table>
<tr>
</tr>
<tr>
<td>
<pre>loop(logical_expression):<br>
    /*<br>
    body<br>
    */</pre>
</td>
<td>
<pre>do:<br>
    /*<br>
    body<br>
    */<br>
until(logical_expression)</pre>
</td>
<td>
<pre>for(set i as 0 ::int, logical_expression, i++):<br>
    /*<br>
    body<br>
    */</pre>
</td>
<td>
<pre>set i ::int<br>
for(i = 0, logical_expression, i++):<br>
    /*<br>
    body<br>
    */</pre>
</td>
</tr>
</table>

### Loop through an array
```
set Array[] as [1,2,3,4] ::int
for element in Array:
    /*
    body
    */
```
Example:
```
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
```
```C
//Translated C code
#include <stdio.h>
#include <string.h>
int main(){
  float float_array[5]={1.0,2.0,3.0,4.0,5.0};
  int int_array[5]={1,2,3,4,5};
  char char_array[2]={'h','i'},string_array[6][7]={"never","gonna","give","you","up","!"};
  for(int i = 0; i < 5; i++){
    float f = float_array[i];
    printf("%f ",f);
  }
  printf("\n");
  for(int i = 0; i < 5; i++){
    int d = int_array[i];
    printf("%d ",d);
  }
  printf("\n");
  for(int i = 0; i < 2; i++){
    char c = char_array[i];
    printf("%c ",c);
  }
  printf("\n");
  for(int i = 0; i < 6; i++){
    char s[7];
    strcpy(s,string_array[i]);
    printf("%s ",s);
  }
}
```
### Functions
```
type @*func (parameter1::type, parameter2::type):
  /*
  Body
  */
  return val //return statement if the type is not void
//“type @*function_name()” 
//type mentions the return type of function and * represents the return type’s data depth.
```
### Calling the function
```
func(argument1, argument2)
```
Endma assumes that the last function defined in the program is the main function. The parser handles error checking.
### Frames
Frames is same as structures in C.
```
//Syntax
frame name:
   /*
   Declarations
   */
>
//Setting the variable:
set @var_name frame_name frame
```
Example:
```
import stdio.h
import string.h
frame Books:
   set title[50], author[50]::string
   set subject[100]::string
   set book_id::int
>
int@main():
    set @Book1 Books frame
    //book 1 specification 
    @Book1.title="C Programming"
    @Book1.author="Nuha Ali"
    @Book1.subject="C Programming Tutorial"
    @Book1.book_id = 6942007
    //print book 1 info
    write("\nBook 1 title: ", @Book1.title)
    write("\nBook 1 author: ", @Book1.author)
    write("\nBook 1 subject: ", @Book1.subject)
    write("\nBook 1 book_id: ", @Book1.book_id)
    return 0
```
```C
//Translated C code
#include <stdio.h>
 #include <string.h>
 struct Books{
  char title[50],author[50];
  char subject[100];
  int book_id;
};
int main(){
  struct Books Book1;
  strcpy(Book1.title,"C Programming");
  strcpy(Book1.author,"Nuha Ali");
  strcpy(Book1.subject,"C Programming Tutorial");
  Book1.book_id = 6942007;
  printf("\nBook 1 title: %s",Book1.title);
  printf("\nBook 1 author: %s",Book1.author);
  printf("\nBook 1 subject: %s",Book1.subject);
  printf("\nBook 1 book_id: %d",Book1.book_id);
  return 0;
}
```
### Input and Output
```
//Taking input:
set var_name, var2, var3 ::int
var_name = input(“Enter value for variable: ”)
input(var_name, var2, var3)

//Print Statements:
write(“Message”, var1, var2)
write(“Message”)
write(var)
print(“Message”)

//Print in a new line:
println(“Message”)
```
Here, coma acts as concatenation in print statements and assigns the corresponding format specifiers accordingly.
Endma also accepts the classic C style input-output statements such as:
```
//Taking input:
set var_name ::int
scanf(“%d”, &var_name)

//Print Statements:
print(“%d”, var_name)
```
### Header files
```
import stdio.h
import header_file.h
import “home/user/header_file.h”
```
### Code optimization
Endma does small code optimizations only in arithmetic expressions.
Example
```
import stdio.h

int @main():
    set a as 4, b as 2 ::int
    set c as a+b ::int
    set d as c*2 ::int
    set e as (((((a+b)/b)+d)/5)^b) ::int
    d=d/c 
    set f as d::int
```
``` C
//Translated C code
#include <stdio.h>
int main(){
  int a = 4,b = 2;
  int c = 6;
  int d = 12;
  int e = 9;
  d = 2;
  int f = 2;
}
```
### Few errors handled by endma
```
//1.
import stdio.h
import string.h
frame Books:
   set title[50], author[50]::string
   set subject[100]::string
   set book_id as 1::int
>
-------------------Parser-------------------
#include <stdio.h>
#include <string.h>
struct Books{
  char title[50],author[50];
  char subject[100];
Parsing Failed
Line Number: 7 Invalid operator '=' in frames.
```
```
//2.
import stdio.h
int @ main():
    set number,sum as 0 ::float
    do:
        number=input("Enter a number: ")
        sum = sum+number
    //until(number is not 0.0) Missing until statement
    write("\nSum = ",sum)
    return 0
-------------------Parser-------------------
#include <stdio.h>
 int  main(){
   float number,sum=0;
   do{
     printf("\n");printf("Enter a number: ");
     scanf("%f",&number);
     sum = sum+number;
   }
   printf("\nSum = %f",sum);

Missing until statement.
```
```
//3.
import stdio.h
int@main():
    // Iterate a loop over the
    // range [0, 5]
    for (set i as 0::int, i < 5, i++):
        write("i = ",i," j = ") 
        // Iterate a loop over the
        // range [0, 5]
        for (set j as 0 :: int, j < 5, j++):
            // Break Statement
            if (j == 2):
                break
            write(" ", j)
        println() 
    break//break statement outside loop
    return 0
-------------------Parser-------------------
#include <stdio.h>
int main(){
    for(int i=0; i<5; i++){
        printf("i = %d j = ",i);
        for(int j=0; j<5; j++){
            if(j==2){
                break;
            }
        printf(" %d",j);
        }
     printf("\n");
    }
Parsing Failed
Line Number: 16 Break statement must be inside a loop.
```
```
import stdio.h

int @sum_int(num1::int,num2::int):
    
float @sum_float(num1::float,num2::float):
    return (num1+num2)
int @main():
    set num1 ::float
    set num2 ::int
-------------------Parser-------------------
#include <stdio.h>
int sum_int(int num1,int num2){
Parsing Failed
Line Number: 5 Syntax Error: Function has no return statement.
```
### Run the executables:
```
./endma <input_file.c
  or
./endma_opti <input_file.c
```
![Alt Text](https://media.giphy.com/media/vqj0SziyUHmnK/giphy.gif)<br>
[Not a RickRoll](https://youtu.be/AyOqGRjVtls)