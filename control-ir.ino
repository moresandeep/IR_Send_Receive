/*
* This sketch is to control LG TV and Bose Sound system.
* Integrates with particle cloud.
*/

int IRledPin =  D3;    // LED connected to digital pin D3

// cloud function to turn on/off LG TV
int lgOnOff(String args);

// cloud function to select input LG TV
int lgSelectInput(String args);

// cloud function to turn on/off bose
int boseOnOff(String args);

// The setup() method runs once, when the sketch starts
void setup()   {     
  // register the cloud function
  Particle.function("onoff", lgOnOff);
  Particle.function("sound", boseOnOff);
  Particle.function("input", lgSelectInput);
  // initialize the IR digital pin as an output:
  pinMode(IRledPin, OUTPUT);   
  Serial.begin(9600);
}

void loop() {

  /* do nothing for now and wait for my masters command */
  //delay(60000);  // wait twenty seconds (60 seconds * 1000 milliseconds)

}

// This procedure sends a 38KHz pulse to the IRledPin 
// for a certain # of microseconds. We'll use this whenever we need to send codes
void pulseIR(long microsecs) {
  // we'll count down from the number of microseconds we are told to wait
 
  noInterrupts(); // disable interrupts
 
  while (microsecs > 0) {
    // 38 kHz is about 13 microseconds high and 13 microseconds low
   digitalWrite(IRledPin, HIGH);  // this takes about 3 microseconds to happen
   delayMicroseconds(10);         // hang out for 10 microseconds
   digitalWrite(IRledPin, LOW);   // this also takes about 3 microseconds
   delayMicroseconds(10);         // hang out for 10 microseconds
 
   // so 26 microseconds altogether
   microsecs -= 26;
  }
 
  interrupts();   // enable interrupts
}

// Code to turn TV ON and OFF exposed via Particle.function()
int lgOnOff(String args) {
    
delayMicroseconds(25196);pulseIR(8820);
delayMicroseconds(4360);pulseIR(580);
delayMicroseconds(540);pulseIR(560);
delayMicroseconds(540);pulseIR(560);
delayMicroseconds(1600);pulseIR(600);
delayMicroseconds(520);pulseIR(560);
delayMicroseconds(540);pulseIR(560);
delayMicroseconds(520);pulseIR(580);
delayMicroseconds(520);pulseIR(560);
delayMicroseconds(540);pulseIR(560);
delayMicroseconds(1600);pulseIR(600);
delayMicroseconds(1600);pulseIR(580);
delayMicroseconds(540);pulseIR(560);
delayMicroseconds(1600);pulseIR(600);
delayMicroseconds(1600);pulseIR(580);
delayMicroseconds(1620);pulseIR(580);
delayMicroseconds(1600);pulseIR(600);
delayMicroseconds(1600);pulseIR(580);
delayMicroseconds(540);pulseIR(560);
delayMicroseconds(520);pulseIR(580);
delayMicroseconds(520);pulseIR(580);
delayMicroseconds(1600);pulseIR(580);
delayMicroseconds(540);pulseIR(560);
delayMicroseconds(520);pulseIR(560);
delayMicroseconds(540);pulseIR(560);
delayMicroseconds(540);pulseIR(560);
delayMicroseconds(1600);pulseIR(580);
delayMicroseconds(1600);pulseIR(600);
delayMicroseconds(1600);pulseIR(600);
delayMicroseconds(520);pulseIR(580);
delayMicroseconds(1600);pulseIR(580);
delayMicroseconds(1600);pulseIR(600);
delayMicroseconds(1600);pulseIR(580);
delayMicroseconds(1600);pulseIR(600);
return 1;
}

// function to turn sound on off
int boseOnOff(String args) {
    
delayMicroseconds(428 );pulseIR( 8820 );
delayMicroseconds(4360 );pulseIR( 560 );
delayMicroseconds(540 );pulseIR( 560 );
delayMicroseconds(1620 );pulseIR( 560 );
delayMicroseconds(540 );pulseIR( 560 );
delayMicroseconds(1620 );pulseIR( 580 );
delayMicroseconds(1620 );pulseIR( 580 );
delayMicroseconds(1620 );pulseIR( 560 );
delayMicroseconds(540 );pulseIR( 560 );
delayMicroseconds(1620 );pulseIR( 560 );
delayMicroseconds(540 );pulseIR( 560 );
delayMicroseconds(540 );pulseIR( 560 );
delayMicroseconds(520 );pulseIR( 580 );
delayMicroseconds(520 );pulseIR( 560 );
delayMicroseconds(520 );pulseIR( 580 );
delayMicroseconds(1620 );pulseIR( 580 );
delayMicroseconds(520 );pulseIR( 560 );
delayMicroseconds(1640 );pulseIR( 560 );
delayMicroseconds(520 );pulseIR( 580 );
delayMicroseconds(520 );pulseIR( 560 );
delayMicroseconds(1620 );pulseIR( 580 );
delayMicroseconds(1620 );pulseIR( 580 );
delayMicroseconds(520 );pulseIR( 560 );
delayMicroseconds(540 );pulseIR( 560 );
delayMicroseconds(1620 );pulseIR( 580 );
delayMicroseconds(520 );pulseIR( 560 );
delayMicroseconds(1640 );pulseIR( 560 );
delayMicroseconds(1620 );pulseIR( 580 );
delayMicroseconds(520 );pulseIR( 560 );
delayMicroseconds(540 );pulseIR( 560 );
delayMicroseconds(1620 );pulseIR( 580 );
delayMicroseconds(1620 );pulseIR( 560 );
delayMicroseconds(540 );pulseIR( 560 );
delayMicroseconds(1620 );pulseIR( 580 );
delayMicroseconds(40140 );pulseIR( 8820 );
delayMicroseconds(4360 );pulseIR( 580 );
delayMicroseconds(520 );pulseIR( 560 );
delayMicroseconds(1640 );pulseIR( 560 );
delayMicroseconds(520 );pulseIR( 560 );
delayMicroseconds(1640 );pulseIR( 560 );
delayMicroseconds(1620 );pulseIR( 580 );
delayMicroseconds(1620 );pulseIR( 580 );
delayMicroseconds(520 );pulseIR( 560 );
delayMicroseconds(1640 );pulseIR( 560 );
delayMicroseconds(520 );pulseIR( 560 );
delayMicroseconds(540 );pulseIR( 560 );
delayMicroseconds(540 );pulseIR( 560 );
delayMicroseconds(520 );pulseIR( 580 );
delayMicroseconds(520 );pulseIR( 560 );
delayMicroseconds(1640 );pulseIR( 560 );
delayMicroseconds(520 );pulseIR( 580 );
delayMicroseconds(1620 );pulseIR( 560 );
delayMicroseconds(540 );pulseIR( 560 );
delayMicroseconds(520 );pulseIR( 580 );
delayMicroseconds(1620 );pulseIR( 560 );
delayMicroseconds(1640 );pulseIR( 560 );
delayMicroseconds(520 );pulseIR( 580 );
delayMicroseconds(520 );pulseIR( 580 );
delayMicroseconds(1620 );pulseIR( 560 );
delayMicroseconds(520 );pulseIR( 580 );
delayMicroseconds(1620 );pulseIR( 560 );
delayMicroseconds(1640 );pulseIR( 560 );
delayMicroseconds(520 );pulseIR( 580 );
delayMicroseconds(520 );pulseIR( 580 );
delayMicroseconds(1620 );pulseIR( 560 );
delayMicroseconds(1620 );pulseIR( 580 );
delayMicroseconds(520 );pulseIR( 580 );
delayMicroseconds(1620 );pulseIR( 560 );
return 1;
}

// Function to select input
int lgSelectInput(String args) {

changeLgInput();
// wait 2 secs
delay(1000);
// press input again to move.
changeLgInput();
return 1;
}

// Helper function to change input.
void changeLgInput() {
delayMicroseconds(1364); pulseIR(8820);
delayMicroseconds(4360); pulseIR(560);
delayMicroseconds(540); pulseIR(560);
delayMicroseconds(1640); pulseIR(560);
delayMicroseconds(520); pulseIR(560);
delayMicroseconds(1640); pulseIR(560);
delayMicroseconds(1620); pulseIR(580);
delayMicroseconds(1620); pulseIR(560);
delayMicroseconds(540); pulseIR(560);
delayMicroseconds(1640); pulseIR(560);
delayMicroseconds(520); pulseIR(560);
delayMicroseconds(540); pulseIR(560);
delayMicroseconds(520); pulseIR(580);
delayMicroseconds(520); pulseIR(580);
delayMicroseconds(520); pulseIR(560);
delayMicroseconds(1620); pulseIR(580);
delayMicroseconds(520); pulseIR(560);
delayMicroseconds(1640); pulseIR(560);
delayMicroseconds(540); pulseIR(560);
delayMicroseconds(520); pulseIR(580);
delayMicroseconds(1620); pulseIR(560);
delayMicroseconds(1620); pulseIR(580);
delayMicroseconds(1620); pulseIR(560);
delayMicroseconds(1640); pulseIR(560);
delayMicroseconds(540); pulseIR(560);
delayMicroseconds(520); pulseIR(580);
delayMicroseconds(1620); pulseIR(560);
delayMicroseconds(1620); pulseIR(580);
delayMicroseconds(520); pulseIR(580);
delayMicroseconds(520); pulseIR(560);
delayMicroseconds(540); pulseIR(560);
delayMicroseconds(520); pulseIR(580);
delayMicroseconds(1620); pulseIR(560);
delayMicroseconds(1640); pulseIR(560);
delayMicroseconds(36216); pulseIR(8820);
delayMicroseconds(4380); pulseIR(580);
delayMicroseconds(500); pulseIR(600);
delayMicroseconds(500); pulseIR(580);
delayMicroseconds(1620); pulseIR(580);
delayMicroseconds(500); pulseIR(580);
delayMicroseconds(520); pulseIR(580);
delayMicroseconds(500); pulseIR(600);
delayMicroseconds(520); pulseIR(580);
delayMicroseconds(520); pulseIR(560);
delayMicroseconds(1620); pulseIR(580);
delayMicroseconds(1600); pulseIR(580);
delayMicroseconds(540); pulseIR(560);
delayMicroseconds(1620); pulseIR(580);
delayMicroseconds(1600); pulseIR(600);
delayMicroseconds(1600); pulseIR(580);
delayMicroseconds(1620); pulseIR(580);
delayMicroseconds(1600); pulseIR(580);
delayMicroseconds(1620); pulseIR(580);
delayMicroseconds(1620); pulseIR(580);
delayMicroseconds(500); pulseIR(580);
delayMicroseconds(1620); pulseIR(580);
delayMicroseconds(520); pulseIR(580);
delayMicroseconds(500); pulseIR(580);
delayMicroseconds(520); pulseIR(580);
delayMicroseconds(520); pulseIR(580);
delayMicroseconds(500); pulseIR(600);
delayMicroseconds(500); pulseIR(580);
delayMicroseconds(1620); pulseIR(580);
delayMicroseconds(500); pulseIR(600);
delayMicroseconds(1600); pulseIR(580);
delayMicroseconds(1620); pulseIR(580);
delayMicroseconds(1600); pulseIR(600);
delayMicroseconds(1600); pulseIR(580);
}