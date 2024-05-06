/*************************************************************

  You’ll need:
   - Blynk IoT app (download from App Store or Google Play)
   - ESP8266 board
   - Decide how to connect to Blynk
     (USB, Ethernet, Wi-Fi, Bluetooth, ...)

  There is a bunch of great example sketches included to show you how to get
  started. Think of them as LEGO bricks  and combine them as you wish.
  For example, take the Ethernet Shield sketch and combine it with the
  Servo example, or choose a USB sketch and add a code from SendData
  example.
 *************************************************************/

/* Fill-in information from Blynk Device Info here */
#define BLYNK_TEMPLATE_ID "   "
#define BLYNK_TEMPLATE_NAME "  "
#define BLYNK_AUTH_TOKEN "  "

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Network name";
char pass[] = "Password";


#define kirimizi D1
#define yesil D4
#define mavi D6
void setup()
{
  // Debug console
  Serial.begin(115200);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  // Set ESP8266 baud rate
  delay(10);
    pinMode(kirimizi,OUTPUT);
    pinMode(yesil,OUTPUT);
    pinMode(mavi,OUTPUT);
    
}
BLYNK_WRITE(V1){
  int pindeger =param.asInt();
  analogWrite(kirimizi,pindeger);

}
BLYNK_WRITE(V2){
  int pindeger =param.asInt();
  analogWrite(yesil,pindeger);

}
BLYNK_WRITE(V3){
  int pindeger =param.asInt();
  analogWrite(mavi,pindeger);

}

void loop()
{
  Blynk.run();
  // You can inject your own code or combine it with other sketches.
  // Check other examples on how to communicate with Blynk. Remember
  // to avoid delay() function!
}
