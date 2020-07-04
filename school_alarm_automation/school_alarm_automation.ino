#include  <virtuabotixRTC.h>  // The RTC library 

//Wiring     CLK -> 6 , DAT -> 7, Reset -> 8

virtuabotixRTC myRTC(6, 7, 8); 
int relay = 9; // The signal pin of the relay connected to pin 9 in the Arduino
int led = 10; // Positive leg of the LED connected to pin 10 in the Arduino 

void setup() {
  Serial.begin(9600);
  pinMode(relay, OUTPUT);     
  pinMode(led, OUTPUT);                                                              
}

void loop() {
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
  myRTC.updateTime();
  
    if (myRTC.dayofweek != 5 and myRTC.dayofweek != 6 and myRTC.hours == 7 and myRTC.minutes == 45 and myRTC.seconds == 00  ){
    digitalWrite(relay, HIGH); 
    digitalWrite(led, HIGH);  
    delay(20000);                      
    digitalWrite(relay, LOW);
    digitalWrite(led, LOW);    
    }
    
    else if (myRTC.dayofweek != 5 and myRTC.dayofweek != 6 and myRTC.hours == 8 and myRTC.minutes == 45 and myRTC.seconds == 00  ){
    digitalWrite(relay, HIGH); 
    digitalWrite(led, HIGH);  
    delay(20000);                      
    digitalWrite(relay, LOW);
    digitalWrite(led, LOW);    
    }

    else if (myRTC.dayofweek != 5 and myRTC.dayofweek != 6 and myRTC.hours == 9 and myRTC.minutes == 30 and myRTC.seconds == 00  ){
    digitalWrite(relay, HIGH); 
    digitalWrite(led, HIGH);  
    delay(20000);                      
    digitalWrite(relay, LOW);
    digitalWrite(led, LOW);    
    }


    else if (myRTC.dayofweek != 5 and myRTC.dayofweek != 6 and myRTC.hours == 10 and myRTC.minutes == 15 and myRTC.seconds == 00  ){
    digitalWrite(relay, HIGH); 
    digitalWrite(led, HIGH);  
    delay(20000);                      
    digitalWrite(relay, LOW);
    digitalWrite(led, LOW);   
    }

    else if (myRTC.dayofweek != 5 and myRTC.dayofweek != 6 and myRTC.hours == 11 and myRTC.minutes == 00 and myRTC.seconds == 00  ){
    digitalWrite(relay, HIGH); 
    digitalWrite(led, HIGH);  
    delay(20000);                      
    digitalWrite(relay, LOW);
    digitalWrite(led, LOW);  
    }


    else if (myRTC.dayofweek != 5 and myRTC.dayofweek != 6 and myRTC.hours == 11 and myRTC.minutes == 45 and myRTC.seconds == 00  ){
    digitalWrite(relay, HIGH); 
    digitalWrite(led, HIGH);  
    delay(20000);                      
    digitalWrite(relay, LOW);
    digitalWrite(led, LOW);  
    }
    

    else if (myRTC.dayofweek != 5 and myRTC.dayofweek != 6 and myRTC.hours == 12 and myRTC.minutes == 30 and myRTC.seconds == 00  ){
    digitalWrite(relay, HIGH); 
    digitalWrite(led, HIGH);  
    delay(20000);                      
    digitalWrite(relay, LOW);
    digitalWrite(led, LOW);  
    }
    

    else if (myRTC.dayofweek != 5 and myRTC.dayofweek != 6 and myRTC.hours == 13 and myRTC.minutes == 00 and myRTC.seconds == 00  ){
    digitalWrite(relay, HIGH); 
    digitalWrite(led, HIGH);  
    delay(20000);                      
    digitalWrite(relay, LOW);
    digitalWrite(led, LOW);   
    }
    
    
    else if (myRTC.dayofweek != 5 and myRTC.dayofweek != 6 and myRTC.hours == 13 and myRTC.minutes == 30 and myRTC.seconds == 00  ){
    digitalWrite(relay, HIGH); 
    digitalWrite(led, HIGH);  
    delay(20000);                      
    digitalWrite(relay, LOW);
    digitalWrite(led, LOW);  
    }

    else if (myRTC.dayofweek != 5 and myRTC.dayofweek != 6 and myRTC.hours == 14 and myRTC.minutes == 00 and myRTC.seconds == 00  ){
    digitalWrite(relay, HIGH); 
    digitalWrite(led, HIGH);  
    delay(20000);                      
    digitalWrite(relay, LOW);
    digitalWrite(led, LOW);
    }
    else{ 
    digitalWrite(relay, LOW);
    digitalWrite(led, LOW);
       }  
}
