# Call-Taxi-Booking-zoho-
Problem Description:  Given 5 points A to E. All points are in straight line and distance is 15 km. For first five km rs 50 is consumed and from next each one km rs 10 is
                      increased.Our aim is to book a taxi.
                      Taxi allotment Conditions:1.	Taxis available on the same location given preference ﬁrst
                                                    If more than one taxi present on the same location, preference given to the taxi which earned least during the day

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
In this Program I have used various functions like booking(),distance(),taxiprint(),display(),decrement().
----Firstly,I have declared all the necessary variables in a structure
    variables used:id,cusid,starting,ending,starttime,endtime,from,to,time1,time2,etc
    variables are declared as per the respective data type
----Next,I have used function to perform various options
    booking()  :  calculates ending time with the starting time.here i have converted to standard time,for ex if 13:00 is time then it is converted to 1:00
                  I have also calculated amount in this function.(To calculate amount i am adding the amount charged for first five km and multiplying the amount increased for                         next each 1 km)
    
   distance():   I am using abs function which returns absolute value integer to calculate distance between two points.
   
   decrement():  I am using this function to find if more than one taxi is present at any location.to find which taxi is free at the location
   
   display():   Displays the final result:
                                 *Customer id
                                 *Book id
                                 *starting point
                                 *destination point
                                 *pick time
                                 *end time
                                 *amount
                             
   main():        Here i have got the input with switch case
   
-----the program calls the respective function each time and the function is executed and the output is achieved
