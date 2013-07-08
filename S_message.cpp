/*
 Copyright (C) 2011 J. Coliz <maniacbug@ymail.com>

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 version 2 as published by the Free Software Foundation.
 */

// STL headers
// C headers
// Framework headers
// Library headers
#include "RF24Network_config.h"
// Project headers
// This component's header
#include "S_message.h"

char S_message::buffer[32];

/****************************************************************************/

char* S_message::toString(void)
{
  
  snprintf(buffer,sizeof(buffer),"%s",payload);
  return buffer;
}

/****************************************************************************/
// vim:cin:ai:sts=2 sw=2 ft=cpp
