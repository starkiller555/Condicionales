//Gus Leyva
//Condicionales
//2022

//Variables de entrada y salida
int hambre, dinero, buenos, tacos;

void setup() {
  //Inicia serial a 9600 bps
  Serial.begin(9600);
  //Inicializa variables de las condicionales
  hambre=0;
  dinero=0;
  buenos=0;
  tacos=0;
}

void loop() {
  //Obtiene variables de entrada
  Serial.println('Ingresa valor hambre (0-1):');
  hambre=Serial.read();
  Serial.println('Ingresa valor dinero (0-1):');
  dinero=Serial.read();
  Serial.println('Ingresa valor buenos (0-1):');
  buenos=Serial.read();
  //Pone a 0 la salida porque sólo existe un caso que cambia su estado
  tacos=0;
  arbol();
  Serial.println(tacos);
  delay(1000);
}

void arbol(void){
  if(hambre==1)
    if(dinero==1)
      if(bueno==1)
        tacos=1;
}
