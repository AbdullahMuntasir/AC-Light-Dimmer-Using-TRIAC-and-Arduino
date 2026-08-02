volatile int brightness = 5000; // safe default mid-range

int zeroc     = 2;
int triac     = 3;
int vresistor = A0;
int vrpower   = 7;

void setup() {
  Serial.begin(9600);
  pinMode(zeroc,     INPUT);           // ✅ missing in original
  pinMode(triac,     OUTPUT);
  pinMode(vresistor, INPUT);
  pinMode(vrpower,   OUTPUT);
  digitalWrite(vrpower, HIGH);
  attachInterrupt(digitalPinToInterrupt(zeroc), angle, RISING); // ✅ portable
}

void loop() {
  // ✅ analogRead and Serial safely here, outside ISR
  brightness = analogRead(vresistor);
  brightness = map(brightness, 0, 1023, 0, 9900);
  Serial.println(brightness);
  delay(50);
}

void angle() {
  // ✅ ISR is now lean — just the timing-critical part
  delayMicroseconds(brightness);
  digitalWrite(triac, HIGH);
  delayMicroseconds(50);
  digitalWrite(triac, LOW);
}