int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

void loop() {
  //number 1
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  delay(1000);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  delay(100);
  //number 2
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  delay(100);
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(g, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);  
  delay(100);
  //number 3
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  delay(100);
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(g, LOW);
  digitalWrite(d, LOW);
  digitalWrite(c, LOW);  
  delay(100);
  //number 4
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(f, HIGH);
  delay(100);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(g, LOW);
  digitalWrite(f, LOW);  
  delay(100);
  //number 5
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  delay(100);
  digitalWrite(a, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(d, LOW);
  digitalWrite(c, LOW);  
  delay(100);
  //number 6
  digitalWrite(a, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(f, HIGH);
  delay(100);
  digitalWrite(a, LOW);
  digitalWrite(e, LOW);
  digitalWrite(g, LOW);
  digitalWrite(d, LOW);
  digitalWrite(c, LOW);
  digitalWrite(f, LOW);  
  delay(100);
  //number 7
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  delay(100);
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);  
  delay(100);
  //number 8
  digitalWrite(a, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(b, HIGH);
  delay(100);
  digitalWrite(a, LOW);
  digitalWrite(e, LOW);
  digitalWrite(g, LOW);
  digitalWrite(d, LOW);
  digitalWrite(c, LOW);
  digitalWrite(f, LOW); 
  digitalWrite(b, LOW);
  delay(100);
  //number 9
  digitalWrite(a, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(b, HIGH);
  delay(100);
  digitalWrite(a, LOW);
  digitalWrite(g, LOW);
  digitalWrite(d, LOW);
  digitalWrite(c, LOW);
  digitalWrite(f, LOW); 
  digitalWrite(b, LOW);
  delay(100);
  //number 0
  digitalWrite(a, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(b, HIGH);
  delay(100);
  digitalWrite(a, LOW);
  digitalWrite(e, LOW);
  digitalWrite(d, LOW);
  digitalWrite(c, LOW);
  digitalWrite(f, LOW); 
  digitalWrite(b, LOW);
  delay(100);
}
