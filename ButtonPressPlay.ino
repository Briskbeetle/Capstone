int buttonState = 0; // initialize button state to off/up
int group1 = A1;
int group2 = A2;
int group3 = A3;
int track = 1; // the track we will play
int ValueOne;
int ValueTwo;
int ValueThree;

void setup() {
  Serial.begin( 38400 ); // 38400 for playing sound or 9600 for serial monitor
  Serial.print( "v" );
  Serial.write ( 25 ); // 0 = maximum volume, 255 = minimum volume
  pinMode(group1, INPUT); // set the buttPin to be an input
  pinMode(group2, INPUT);
  pinMode(group3, INPUT);
}

void loop() {
  ValueOne = analogRead(group1); //Update the values
  ValueTwo = analogRead(group2);
  ValueThree = analogRead(group3);
  if(ValueOne == 1023 && ValueTwo == 1023 && ValueThree == 1023){ //Are all of the buttons not being pressed?
    buttonState = 0; // change button state to off/up
  }
  if(buttonState == 0) { // if all button are off/up
                                                      //Group 1
    if(ValueOne != 1023){ //Off - 1023
      if(0 <= ValueOne <= 5) { //B1 - 0
        track = 1; // set the track to play
        Serial.print( "p" );
        Serial.write( track ); // play the track
        buttonState = 1;
        return;
      }
      if(174 <= ValueOne <= 194) { //B2 - 184
        track = 2;
        Serial.print( "p" );
        Serial.write( track );
        buttonState = 1;
        return;
      }
      if(428 <= ValueOne <= 428){ //B3 - 418
        track = 3;
        Serial.print( "p" );
        Serial.write( track );
        buttonState = 1;
        return;
      }
      if(540 <= ValueOne <= 560) { //B4 - 550
        track = 4;
        Serial.print( "p" );
        Serial.write( track );
        buttonState = 1;
        return;
      } 
      if(625 <= ValueOne <= 645) { //B5 - 635
        track = 5;
        Serial.print( "p" );
        Serial.write( track );
        buttonState = 1;
        return;
      }
      if(685 <= ValueOne <= 705) { //B6 - 695
        track = 6;
        Serial.print( "p" );
        Serial.write( track );
        buttonState = 1;
        return;
      }
    }
                                                    //Group 2
    if(ValueTwo != 1023) { //Off - 1023
      if(0 <= ValueOne <= 5) { //B1 - 0
        track = 7; // set the track to play
        Serial.print( "p" );
        Serial.write( track ); // play the track
        buttonState = 1;
        return;
      }
      if(316 <= ValueOne <= 336) { //B2 - 326
        track = 8; // set the track to play
        Serial.print( "p" );
        Serial.write( track ); // play the track
        buttonState = 1;
        return;
      }
      if(486 <= ValueOne <= 506) { //B3 - 496
        track = 9; // set the track to play
        Serial.print( "p" );
        Serial.write( track ); // play the track
        buttonState = 1;
        return;
      }
      if(590 <= ValueOne <= 610) { //B4 - 600
        track = 10; // set the track to play
        Serial.print( "p" );
        Serial.write( track ); // play the track
        buttonState = 1;
        return;
      }
      if(660 <= ValueOne <= 680) { //B5 - 670
        track = 11; // set the track to play
        Serial.print( "p" );
        Serial.write( track ); // play the track
        buttonState = 1;
        return;
      }
    }
                                                   //Group 3
    if(ValueThree != 1023) { //Off - 1023
      if(0 <= ValueOne <= 5) { //B1 - 0
        track = 7; // set the track to play
        Serial.print( "p" );
        Serial.write( track ); // play the track
        buttonState = 1;
        return;
      }
      if(315 <= ValueOne <= 335) { //B2 - 325
        track = 7; // set the track to play
        Serial.print( "p" );
        Serial.write( track ); // play the track
        buttonState = 1;
        return;
      }
      if(449 <= ValueOne <= 469) { //B3 - 459  
        track = 7; // set the track to play
        Serial.print( "p" );
        Serial.write( track ); // play the track
        buttonState = 1;
        return;
      }
    }
  }
}

//All values +/- 1
