//Declare pins
//Left side motor variabe declaration
int LSp = 5;
int Lf = 6;
int Lb = 7;
//Right side motor variable declaration
int RSp = 3;
int Rf = 2;
int Rb = 4;


void StopMotors() { //Turn all of the motors off (uses H-bridge)
    Serial.println("Stopping motors");
    digitalWrite(Lf, LOW);
    digitalWrite(Lb, LOW);
    digitalWrite(Rb, LOW);
    digitalWrite(Rf, LOW);
    delay(200);
}

void ChangeSpeed(int speed) { //Change the speed of the motors
    Serial.println("Changing speed: " + String(speed));
    analogWrite(LSp, speed);
    analogWrite(RSp, speed);
}

void Forward() {
    StopMotors();
    Serial.println("Moving forward");
    digitalWrite(Rf, HIGH);
    digitalWrite(Lf, HIGH);
}

void Backward() {
    StopMotors();
    Serial.println("Moving backward");
    digitalWrite(Rb, HIGH);
    digitalWrite(Lb, HIGH);
}

void Left() {
    StopMotors();
    Serial.println("Turning left");
    digitalWrite(Rf, HIGH);
    digitalWrite(Lb, HIGH);
}

void Right() {
    StopMotors();
    Serial.println("Turning right");
    digitalWrite(Rb, HIGH);
    digitalWrite(Lf, HIGH);
}

void setup() {
    pinMode(LSp, OUTPUT);
    pinMode(RSp, OUTPUT);
    pinMode(Lf, OUTPUT);
    pinMode(Lb, OUTPUT);
    pinMode(Rf, OUTPUT);
    pinMode(Rb, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    Forward();
    delay(1000);
    Backward()
    delay(1000);
    Left();
    delay(1000);
    Right();
    delay(1000);
}