/* 
 *  Automatic Gardener v1.0 
 *  By Zachary King
*/

// Constants
const int PHOTORESISTOR_PIN     = A0;    // Pin 3 (analog)
const unsigned long LOOP_DELAY  = 1000; // 1000 ms = 1 second

int getLightReading()
{
  return analogRead(PHOTORESISTOR_PIN);
}

void setup()
{
  // Initialize the Serial interface at 9600 baud rate
  Serial.begin(9600);

  // Initialize the pins for I/O
//  pinMode(PHOTORESISTOR_PIN, INPUT);
}

void loop()
{
  Serial.println(getLightReading());

  // Wait 1 second before reading again...
  delay(LOOP_DELAY);
}
