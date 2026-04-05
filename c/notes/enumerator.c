/*Enumerator--enum
___________________
(1) there are 3 ways to define custom data type in c
                1.struct
                2.union
                3.enum
-enum is a group of names given to integer constat which makes a program easy to read and maintainable.its like we are giving a name to number so the redability becomes good. 

-enum is a keyword

-we dont declare variable like structure and union we just write names here in enum.

                    enum choice
                    {
                        no ,yes      //1=yes,0=no may be
                    };

-so how we would no which is 0 and which is 1......so we just write names here and it start from 0 and goes up sequentially.......no ,yes means 0,1


-                   enum status
                    {
                    not started,started,pause,stop,resume 
                    };

                    0,1,2,3,4,.....





-when you write just names it will start from 0 and become sequance but you can explicitly assigh them some number too like below example...suppose you need this for game development--->
                  enum direction
                {
                    left=-1,right=1
                    up=2 ,down=-2
                };

                     
-               enum designation
                {
                manager,developer,trainer,officeboy
                } //0,1,2,3


  
-a real program use of enum
in this program sun,mun....are not variable they are names given to the numbers--->
                

               
*/  
                enum week_day
                {
                    sun,mun,tue,wed,thur,fry,sat,sun
                };
                int main()
                {
                enum week_day=tue;
                if(today==sun)
                    printf("today is holiday");
                else
                    printf("its working day");
                return 0;
                
                }