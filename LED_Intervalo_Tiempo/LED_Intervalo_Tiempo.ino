  // Encendido de LED en un intervalo de tiempo variable que depende del número de veces que se ejecuta el programa 
int ledPin = 13;  // LED que se encuentra en el pin 13
int n = 0;    //Entero que contará el paso por la función loop
void setup(){ 
   pinMode(ledPin, OUTPUT); // El pin 13 será una salida digital 
} 
void loop(){ 
   digitalWrite(ledPin, HIGH);  // Enciende el LED
   delay(1000);         // Pausa de 1 segundo 
   digitalWrite(ledPin, LOW);   // Apaga el LED 
   n++;         //Incrementamos n
   delay(delayVal(n));      //Pausa de un tiempo variable
}
int delayVal(int f){
   return f*100;
}
