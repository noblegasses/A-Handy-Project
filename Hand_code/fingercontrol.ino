int finger(){
  if (Serial.available()>0)
  {
    int x = Serial.read();
     if (x == 84 || x==116 )// if the number is ascii capital or lowercase t...
          { finger = 6;// selects the pin connected to the servo that controls the Thumb
          }//selects the thumb
     if (x ==  73 || x== 105)// if the number is ascii capital or lowercase i...
          {finger = 5;// selects the pin connected to the servo that controls the Index Fingers
          }//selects the index finger
     if (x ==  77 || x== 109 )// if the number is ascii capital or lowercase m...
          {finger = 9;// selects the pin connected to the servo that controls the Middle finger
          } //selects the middle finger
     if (x == 82 ||x== 114)// if the number is ascii capital or lowercase r...
          {finger = 11;// selects the pin connected to the servo that controls the Ring Finger
          }//selects the ring finger
     if (x == 80 || x==112)// if the number is ascii capital or lowercase p...
          {finger=10;// selects the pin connected to the servo that controls the Pinky Finger
          }// selects the pinky finger
  }
}

