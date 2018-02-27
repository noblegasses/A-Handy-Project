void fingermove(int fingernumber, int FingerPosition) {
  switch(fingernumber) {
    case 0: //Moving the thumb
    servo_move(FingerPosition, 6);
    break;

    case 1: //Moving the index finger
    servo_move(FingerPosition, 5);
    break;

    case 2: //Moving the middle finger
    servo_move(FingerPosition,9);
    break;

    case 3: //Moving the ring finger
    servo_move(FingerPosition, 11);
    break;

    case 4: //Moving the pinky finger
    servo_move(FingerPosition, 10);
    break;
  }
}

void servo_move(int FingerPosition, int finger){ // uses a value from one to 9 to move the selected servo using the 20 ms duty cycle servos use to position themselves
    FingerPosition = map ( FingerPosition, 0,9, 1000, 2000);// maps the values from 0-9 to a range of 450-2500 which is the minimum and maximum values of the servo duty cycle  
    int n=0;// initialize the loop at zero
    while(n<=50)// send the the duty cycle pulse 50 to delay the servos to allow them to get into position
    {
    digitalWrite(finger, HIGH);// send a high signal to the finger
    delayMicroseconds (FingerPosition);// delay for the chunk of the 20ms duty cycle that relates to the position from 450us to 2500us
    digitalWrite(finger, LOW);//send the low signal to the finger
    delayMicroseconds ( 20000- FingerPosition);//wait the remainder of the 20ms duty cycle of the servo
    n++;
    }
    }

