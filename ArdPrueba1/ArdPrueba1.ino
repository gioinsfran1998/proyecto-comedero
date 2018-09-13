  // Encendido de LED 
int ledPin = 13;  // LED que se encuentra en el pin 13
int n = 0;    //Entero que contará el paso por la función loop
void setup(){ 
   pinMode(ledPin, OUTPUT); // El p1n 13 será una salida digital 
} 
void loop(){ 
   digitalWrite(ledPin, HIGH);  // Enciende el LED
   delay(200);         // Pausa de 1 segundo 
   digitalWrite(ledPin, LOW);   // Apaga el LED 
   n++;         //Incrementamos n
   delay(delayVal(n));      //Pausa de un tiempo variable
}
int delayVal(int f){
   return f*100;
}

/*
 // Encendido de LED por parametro de tiempos
int led = 13;

void setup() {
  pinMode(led, OUTPUT);
}


void loop() {
  digitalWrite(led, HIGH); // Cuantos segundos va a prender el led
  delay(200);                      
  digitalWrite(led, LOW); // Cuantos segundos va a manter apagado el led
  delay(200);           
}
*/

/*
 // Bocina
int pinzumbador = 11;    // pin del zumbador
int frecuencia = 220;      // frecuencia correspondiente a la nota La

void setup()
{
}

void loop()
{
    tone(pinzumbador,frecuencia);    // inicia el zumbido
    delay(2000);                    
    noTone(pinzumbador);               // lo detiene a los dos segundos
    delay(1000);
}
*/
