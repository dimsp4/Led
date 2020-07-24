void setup() {
   pinMode (16, OUTPUT);
   pinMode (14, OUTPUT);

}

void loop() {
 digitalWrite (16, HIGH);
 digitalWrite (14, HIGH);
 delay (2000);
 digitalWrite (16, LOW);
 digitalWrite (14, LOW);
 delay (1000);
}
