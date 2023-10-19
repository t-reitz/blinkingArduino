// Definindo o pino ao qual o LED está conectado
const int ledPin = 15;

void setup() {
  // Inicializando a comunicação serial
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");

  // Configurando o pino do LED como saída
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Acendendo o LED
  digitalWrite(ledPin, HIGH);
  // Aguardando 0.5 segundo (500 milissegundos)
  delay(500);

  // Apagando o LED
  digitalWrite(ledPin, LOW);
  // Aguardando 0.5 segundo (500 milissegundos)
  delay(500);
}
