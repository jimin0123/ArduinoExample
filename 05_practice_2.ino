#define PIN_LED 7
unsigned int count, toggle;
void setup() 
{
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  count = 0;
  toggle = 1;
  delay(1000);
}

void loop() {
  while(1)
  {
    if (count == 12)
    {
      break;
    }
    toggle = toggle_state(toggle);
    Serial.print(count);
    count = count+1;
    digitalWrite(PIN_LED, toggle);
    
   
    delay(100);
  }

}
int toggle_state(int toggle)
{
  return !toggle;
}
