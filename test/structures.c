import stdio.h
import string.h
frame Books:
   set title[50], author[50]::string
   set subject[100]::string
   set book_id::int
>
int@main():
    set @Book1 Books frame
    set @Book2 Books frame
    //book 1 specification 
    @Book1.title="C Programming"
    @Book1.author="Nuha Ali"
    @Book1.subject="C Programming Tutorial"
    @Book1.book_id = 6942007
    //book 2 specification 
    @Book2.title="Telecom Billing"
    @Book2.author="Zara Ali"
    @Book2.subject="Telecom Billing Tutorial"
    @Book2.book_id = 6495700
    //print book 1 info
    write("\nBook 1 title: ", @Book1.title)
    write("\nBook 1 author: ", @Book1.author)
    write("\nBook 1 subject: ", @Book1.subject)
    write("\nBook 1 book_id: ", @Book1.book_id)
    //print book 2 info
    write("\nBook 2 title: ", @Book2.title)
    write("\nBook 2 author: ", @Book2.author)
    write("\nBook 2 subject: ", @Book2.subject)
    write("\nBook 2 book_id: ", @Book2.book_id)
    return 0