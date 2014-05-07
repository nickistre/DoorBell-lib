/*
    Base code and constants for doorbell functions
    Copyright (C) 2014  Nicholas Istre

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
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

