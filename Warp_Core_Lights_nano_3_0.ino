//Warp Core Lights
/* Ten LEDs will light up then go out in sequence,  
 *  in a pattern to suggest 3 waves passing through the lights.
//An 11th LED will stay on continuously.
This process will repeat indefinitely.*/
//2020.12.05
//Ralnarene
/**************************************/
const int lowestPin = 2;//the lowest one attach to
const int highestPin = 11;//the highest one attach to
const int chamber = 12;//warp core chamber light
/**************************************/
void setup()
{
  //set pins 2 through 11 as output
  for (int thisPin = lowestPin; thisPin <= highestPin; thisPin++)
  {
    pinMode(thisPin, OUTPUT); //initialize thisPin as an output
  }
  pinMode(chamber, OUTPUT); //initialize chamber as an output
}
/****************************************/
void loop()
{
  //iterate over the pins
  //turn the led on from lowest to the highest
  digitalWrite(chamber, HIGH); //turn on chamber light
  for (int thisPin = lowestPin; thisPin <= 5; thisPin++)
  {
    digitalWrite(5, LOW); //turn last led in sequence off
    digitalWrite(thisPin, HIGH); //turn this led on
    digitalWrite(thisPin + 4, HIGH); //turn this led on
    digitalWrite(thisPin - 1, LOW); //turn previous led off
    digitalWrite(thisPin + 3, LOW); //turn previous led off
        if (thisPin < 5)
    {
              digitalWrite(thisPin + 8, HIGH); //turn this led on
              digitalWrite(thisPin + 7, LOW); //turn previous led off
    }
    delay(200);//wait for 200 microseconds
  }
}
