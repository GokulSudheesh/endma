/*In the below endma program the inner for loop always ends when 
the value of the variable j becomes 2.*/
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
    return 0