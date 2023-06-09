// C++ code
//
char input;
void setup() {
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  while (Serial.available()) 
  {
    input = Serial.read();

    if (input == 'F') {
      moveForward();
    }
    else if (input == 'G') {
      moveBackward();

    } else if (input == 'R') {
      moveright();

    } else if (input == 'L') {
      moveleft();

    } else if (input == 'S') {
      stop();
    }
  }
}
void moveForward() {
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, LOW);
}

void moveBackward() {
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
}

void moveright() {
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(4, LOW);
}

void moveleft() {
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
}

void stop() {
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
}
