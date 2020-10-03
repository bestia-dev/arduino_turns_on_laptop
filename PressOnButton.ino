/* Press the "On" button on Lenovo laptop
 by Luciano Bestia   2020-10-02
*/

#include <Servo.h>
#include <avr/sleep.h>

Servo myservo;  // create servo object to control a servo

void setup() {
  
}

void loop() {
    // when the microcontroller starts the servo moves around 20 degrees on its own. Stupid.
    // then I move it to 0 degree and attach it.
    myservo.write(0);
    delay(500);
    myservo.attach(3);  // attaches the servo on pin 3 to the servo object and resets the position to the initial 90
    delay(500);
    myservo.write(0);
    // move 40 degree to press the "On" button 
    myservo.write(40);
    delay(500);
    // and return to the initial position
    myservo.write(0);
    delay(500);
    // dettaching the servo stops giving power to it
    myservo.detach();
    delay(500);
    // execute the loop only once. The button "On" must be pressed only once.
    // arduino, go to sleep
    cli();
    sleep_enable();
    sleep_cpu();
}
