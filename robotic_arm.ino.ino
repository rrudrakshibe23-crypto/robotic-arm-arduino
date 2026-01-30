#include <Servo.h>

// Define servo objects
Servo baseServo, shoulderServo, elbowServo, gripperServo;

// Define servo pins
int basePin = 3;      // Base rotation
int shoulderPin = 5;  // Shoulder movement
int elbowPin = 6;     // Elbow movement
int gripperPin = 9;   // Gripper control

void setup() {
    // Attach servos to corresponding pins
    baseServo.attach(basePin);
    shoulderServo.attach(shoulderPin);
    elbowServo.attach(elbowPin);
    gripperServo.attach(gripperPin);
    
    // Set initial positions
    baseServo.write(90);
    shoulderServo.write(90);
    elbowServo.write(90);
    gripperServo.write(90);
    
    Serial.begin(9600);
}

void loop() {
    // Example movement: Rotate base left and right
    baseServo.write(45);  // Rotate left
    delay(1000);
    baseServo.write(135); // Rotate right
    delay(1000);

    // Example movement: Move shoulder up and down
    shoulderServo.write(60); // Up
    delay(1000);
    shoulderServo.write(120); // Down
    delay(1000);

    // Example movement: Open and close gripper
    gripperServo.write(30);  // Open
    delay(1000);
    gripperServo.write(90);  // Close
    delay(1000);
}
