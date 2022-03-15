#include "pitches.h"




int melody[] = {
  NOTE_G4, 
  NOTE_A4, 
  NOTE_B4, 
  NOTE_CS5, 
  
  NOTE_G4, 
  NOTE_A4, 
  NOTE_B4,
  NOTE_CS5,

  NOTE_GS4,
  NOTE_AS4,
  NOTE_C5,
  NOTE_D5,

  NOTE_GS4,
  NOTE_AS4,
  NOTE_C5,
  NOTE_D5,

  NOTE_A4,
  NOTE_B4,
  NOTE_CS5,
  NOTE_DS5,

  NOTE_AS4,
  NOTE_C5,
  NOTE_D5,
  NOTE_E5,

 NOTE_AS4,
  NOTE_C5,
  NOTE_D5,
  NOTE_E5,
  
  NOTE_B4,
  NOTE_CS5,
  NOTE_DS5,
  NOTE_F5,

  NOTE_C5,
  NOTE_D5,
  NOTE_E5,
  NOTE_FS5,

  NOTE_CS5,
  NOTE_DS5,
  NOTE_F5,
  NOTE_G5,

  NOTE_D5,
  NOTE_E5,
  NOTE_FS5,
  NOTE_GS5,

  no,
  no,

  NOTE_A5,
  NOTE_AS5,
  NOTE_B5,
  NOTE_C6,

  
};


int noteDurations[] = {
 
8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,4,4,4,1,};

void setup() {
  
  for (int thisNote = 0; thisNote < 50; thisNote++) {

  
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(3, melody[thisNote], noteDuration);

   
    int pauseBetweenNotes = noteDuration * 1;
    delay(pauseBetweenNotes);
    
    noTone(3);
    
  }
}

void loop() {
 
}