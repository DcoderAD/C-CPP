/*STRUCTURE in c
_________________
1.structure is a way to group variables.like we group var
  in array.but in array we group similar type of data

2.so how structure is different???
  structure can be a collection of similar or dissimilar elements both.flexibility is there.

3.definig structure is creating a custom data type

*/
// -----------------------------------------------------------

/*Primitive vs Non Primitive Data Type
______________________________________
1.Primitive type are already available in the language.
  like int,float,double,char.

2.Non Primitive type....structure is non primitive data
  type.if you want to store a date under the int you will have to store it in 3 different variable d,m,y and when you want to access them then you will have to access them saperately.But usng structure you can create your own data type like 'date' and all the variable d.m.y can be accessed under a single name 'date' and all the information related date will be encapsulated under a single name.and it will be easier to handle the data.

  similarly you can store different aspects like id,salary,dob,joining,section,team number, like employee data under a single name.wich is really convinient.customer,book,student,account can be example of struct type of data.

3.so why storing date in array is logically wrong?????
        int a[3];--->20/2/2025 bu why it i wrong ????? 
  ANS: so when we store data in array it is necessary that 
       the type of data should be same but the nature of data also should be same.because if the data type of
       some data is same it doesnt mean that the nature of data is also same.in a date 12/2/2026 .....12 is day number,2 is moth number and 2026 is year all are int type of data but the nature of data is different.

       so when data and information are same use array in other cases use struct.
*/

