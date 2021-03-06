/**       __         __         __
 * |\ |  |_   |\/|  |_   |  |  (_
 * | \|  |__  |  |  |__  |__|  __)
 *
 * AtCommand.cpp - At Command class
 * 
 * Copyright (C) 2017 Nemeus - All Rights Reserved
 *
 * This file is part of Nemeus Smart IoT Sensor (Tm) SDK.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at

 * http://www.apache.org/licenses/LICENSE-2.0

 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * 
 */

#include "AtCommand.h"


AtCommand::AtCommand(int value, const char* stringCommand) : enumValue(value), stringCommand(stringCommand)
{
}
AtCommand::AtCommand() : enumValue(0), stringCommand("")
{

}

int AtCommand::getCode() const
{
  return this->enumValue;
}

const char* AtCommand::getStringCommand()
{
  return this->stringCommand;
}

bool operator== (const AtCommand &atCmd1, const AtCommand &atCmd2)
{
  if ( (atCmd1.enumValue == atCmd2.enumValue) && (strcmp(atCmd1.stringCommand, atCmd2.stringCommand) == 0) )
  {
    return true;
  }
  else
  {
    return false;
  }
}

bool operator!= (const AtCommand &atCmd1, const AtCommand &atCmd2)
{
  return !(atCmd1 == atCmd2);
}

