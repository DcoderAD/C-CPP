/*Declaring structure variable
 */

// how much memory below defined structure will consume???
struct date
{
    int d, m, y;
};
// ANS: 0 byte memory consumed by struct date.because defining the data type dosnt reserve any memory in the system when we use that data type to create variable then it hold some memory in the system.

// how to create variable of date type?
// RULE: there is rule in c language that when ever we will use the variable created using structure data type we will explicitely write the "struct" keyword before that.this rule is not application on the c++ remember.

struct date
{
    int d, m, y;
} d2, d3;        // d2,d3 are global variable.usable in entire program.
int main()
{
    struct date d1; // D1 is local variable so only local use
                    // size of d1=d+m+y=12bytes
}
