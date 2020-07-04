#include <virtuabotixRTC.h>                                                                              
                                                                                                         
virtuabotixRTC myRTC(6, 7, 8);

void setup()  {      
  Serial.begin(9600);

// Set the current date, and time in the following format:
// seconds, minutes, hours, day of the week, day of the month, month, year note: the week starts with monday so monday = 1, etc.
  myRTC.setDS1302Time(00, 59, 23, 6, 10, 1, 2020); // upload the sketch with the time you are at then reupload this sketch without this line just after uploading the first sketch.
}

void loop()  {                                                                                            
// This allows for the update of variables for time or accessing the individual elements.                
  myRTC.updateTime();                                                                                     
                                                                                                          
// Start printing elements as individuals                                                                   
  Serial.print("Current Date / Time: ");                                                                  
  Serial.print(myRTC.dayofmonth);                                                                         
  Serial.print("/");                                                                                      
  Serial.print(myRTC.month);                                                                              
  Serial.print("/");                                                                                      
  Serial.print(myRTC.year);                                                                               
  Serial.print("  ");                                                                                     
  Serial.print(myRTC.hours);                                                                              
  Serial.print(":");                                                                                      
  Serial.print(myRTC.minutes);                                                                            
  Serial.print(":");                                                                                      
  Serial.println(myRTC.seconds);                                                                          
                                                                                                          
// Delay so the program doesn't print non-stop                                                            
  delay(1000);                                                                                           
}
