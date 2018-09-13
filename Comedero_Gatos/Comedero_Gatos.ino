// Incluímos la librería para poder controlar el servo
#include <Servo.h>
 
// Declaramos la variable para controlar el servo
Servo servoMotor;
 
// bip
const int buzzer = 8;
 
 
 
 
void setup() {
  // Iniciamos el monitor serie para mostrar el resultado
  Serial.begin(9600);
 
  // Iniciamos el servo para que empiece a trabajar con el pin 9
  servoMotor.attach(9);
 
  //programar bip
  pinMode(buzzer,OUTPUT);
 
 
  //led
  pinMode(12, OUTPUT);
}
 
 
void loop() {
 
  // Desplazamos a la posición 0º
  servoMotor.write(0);
  // Esperamos 1 segundo
  delay(5000);
 
    // bip
  tone(buzzer,1500);  
 
 
   for (int i=0; i <= 10; i++){
        digitalWrite(12, HIGH);  // Diz que o pino 12 do arduino está Ligado. Logo LED ON
        delay(100); // Espera por 1s
 
        digitalWrite(12, LOW); //  Diz que o pino 12 do arduino está Desligado. Logo: LED OFF
        delay(100); // Espera por 1s
   }
 
  noTone(buzzer);
 
 
 
  // Desplazamos a la posición 180º
  servoMotor.write(75);
  // Esperamos 1 segundo
  delay(500);
 
   // Desplazamos a la posición 0º
  servoMotor.write(0);
  // Esperamos 1 segundo
  delay(500);
 
 
  // Desplazamos a la posición 180º
  servoMotor.write(75);
  // Esperamos 1 segundo
  delay(500);
 
   // Desplazamos a la posición 0º
  servoMotor.write(0);
  // Esperamos 1 segundo
  delay(500);
 
 
  // Desplazamos a la posición 180º
  servoMotor.write(75);
  // Esperamos 1 segundo
  delay(500);
 
   // Desplazamos a la posición 0º
  servoMotor.write(0);
  // Esperamos 1 segundo
  delay(500);
 
   
  // Desplazamos a la posición 0º
  servoMotor.write(0);
  // Esperamos 1 segundo
  delay(10800000);
 
}
