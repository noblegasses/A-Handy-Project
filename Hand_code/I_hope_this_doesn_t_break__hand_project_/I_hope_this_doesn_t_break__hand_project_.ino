int finger = 9;// number that relates to the PWM pin which the fingers are connected to(6;The Thumb, 5; Index finger, 9; Middle finger, 11; ring finger, 10; Pinky Finger)
int FingerPosition= 0; // a value from 0-9 that denotes the position of the finger
int n= 0;// a placeholder value for loops
void setup() {
  // put your setup code here, to run once:
pinMode (6, OUTPUT);// set pin 6 as an output
pinMode (5, OUTPUT);// set pin 5 as an output
pinMode (9, OUTPUT);// set pin 9 as an output
pinMode (10, OUTPUT);// set pin 10 as an output
pinMode (11, OUTPUT);// set pin 11 as an output
Serial.begin (9600);// starts the serial monitor which is used for both debugging and as an input
}
void servo_move(int FingerPosition){ // uses a value from one to 9 to move the selected servo using the 20 ms duty cycle servos use to position themselves
    FingerPosition = map ( FingerPosition, 0,9, 1000, 2000);// maps the values from 0-9 to a range of 450-2500 which is the minimum and maximum values of the servo duty cycle  
    n=0;// initialize the loop at zero
    while(n<=50)// send the the duty cycle pulse 50 to delay the servos to allow them to get into position
    {
    digitalWrite(finger, HIGH);// send a high signal to the finger
    delayMicroseconds (FingerPosition);// delay for the chunk of the 20ms duty cycle that relates to the position from 450us to 2500us
    digitalWrite(finger, LOW);//send the low signal to the finger
    delayMicroseconds ( 20000- FingerPosition);//wait the remainder of the 20ms duty cycle of the servo
    n++;
    }
    Serial.println(finger);//prints the value of the that was selected, for debugging purposes 
    }
//void getdata(){
//      Serial.println("enterpos");
//      FingerPosition=0;
//      while(Serial.available()>0)
//      {
//       while(FingerPosition==0){
//        FingerPosition = Serial.read();
//        //Serial.println (FingerPosition);
//        servo_move(FingerPosition);
//       }
//    }
//}
void loop() {
  
        finger();
        servo_move(finger-48);// moves the hand to the position from 1-9, converted out of ascii
        }
}
//        int placeholder = Serial.read();
//        //Serial.print ("selected: "); Serial.println (placeholder);
}  



