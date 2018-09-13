 /* Hacer sonar bocina */
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
