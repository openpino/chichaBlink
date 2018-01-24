//ส่วนของการประกาศตัวแปร

int myOutput = D7;
int myOutput2 = D8;
int myDelayTime = 3000;//ค่าของเวลาจะมีหน่วยเป็น มิลลิวินาที
//ส่วนของ setup คือส่วนที่กำหนดค่าคงที่ที่จะใช้ในโค้ตจะทำงานครั้งแรกครั้งเดียว
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(myOutput, OUTPUT);
  pinMode(myOutput2, OUTPUT);
}

//ส่วนของ loop จะทำงานวนตามสัญญาณนาฬิกาตลอดเวลา
void loop() {
  digitalWrite(myOutput, HIGH);   // turn the LED on (HIGH is the voltage level)
     delay(myDelayTime);                
  digitalWrite(myOutput, LOW);    // turn the LED off by making the voltage LOW
   delay(myDelayTime);  
   digitalWrite(myOutput2, HIGH);
  delay(myDelayTime);                       // wait for a second
   digitalWrite(myOutput2, LOW);
  delay(myDelayTime);  
  // wait for a second
}
