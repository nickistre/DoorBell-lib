/*
 Base code and constants for doorbell functions
 */
 
#ifndef __DOORBELL_H__
#define __DOORBELL_H__

// Different types of communications.  See RF24NetworkHeader::type descriptions
#define TYPE_ECHO 0         // Echos back what was sent to it
#define TYPE_BUTTON_PRESS 1 // No payload needed, announces a button was pressed

// Setup payload structors
struct payload_echo {
  char * text;
};

typedef enum DoorType{
  BACK=0, 
  FRONT=1
} DoorType;
struct payload_button_press {
  DoorType door;
};

void checkSerial();

#endif // __DOORBELL_H__

