/**

*/
/// This work
/// \file rover.ino
/// \brief main file
/// \author Klimets Sergey
/// \copyright Copyright (c) 2017 by Klimets Sergey.\n


//--------------------------------------Include-------------------------------------------
//-------------------------------------End Include----------------------------------------




//------------------------------------Define---------------------------------------------
#define LEFT_MOTOR_PIN_F 5
#define LEFT_MOTOR_PIN_R 4
#define RIGHT_MOTOR_PIN_F 7
#define RIGHT_MOTOR_PIN_R 6

//------------------------------------End Define-----------------------------------------

//------------------------------------Var------------------------------------------------

//------------------------------------End Var--------------------------------------------

void stop_move(){
  digitalWrite(LEFT_MOTOR_PIN_F, LOW);
  digitalWrite(RIGHT_MOTOR_PIN_F, LOW);
  digitalWrite(RIGHT_MOTOR_PIN_R, LOW);
  digitalWrite(LEFT_MOTOR_PIN_R, LOW);
  delay(150);
}
void forward_move(){
  stop_move();
  digitalWrite(LEFT_MOTOR_PIN_F, HIGH);
  digitalWrite(RIGHT_MOTOR_PIN_F, HIGH);
}
void r_move(){
  stop_move();
  digitalWrite(LEFT_MOTOR_PIN_R, HIGH);
  digitalWrite(RIGHT_MOTOR_PIN_R, HIGH);
}

void left_move(){
  stop_move();
  digitalWrite(RIGHT_MOTOR_PIN_F, HIGH);
  digitalWrite(LEFT_MOTOR_PIN_R, HIGH);
}

void right_move(){
  stop_move();
  digitalWrite(RIGHT_MOTOR_PIN_F, HIGH);
  digitalWrite(LEFT_MOTOR_PIN_R, HIGH);
}
void setup() {
  pinMode(LEFT_MOTOR_PIN_F, OUTPUT);
  pinMode(LEFT_MOTOR_PIN_R, OUTPUT);
  pinMode(RIGHT_MOTOR_PIN_F, OUTPUT);
  pinMode(RIGHT_MOTOR_PIN_R, OUTPUT);
stop_move();

}



void loop(){
  stop_move();
  forward_move();
  delay(1000);
  left_move();
  delay(500);
    forward_move();
  delay(1000);
    left_move();
  delay(500);
     forward_move();
  delay(1000);
      left_move();
  delay(500);
     forward_move();
     delay(1000);
           left_move();
  delay(500);
}

