// Даніїл Стаднік

/*
  Blink

  Вмикає вбудований світлодіод на 1 секунду,
  потім вимикає на 1 секунду, і так по колу.
*/

void setup() {
  // ініціалізація піна світлодіода як виходу
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // увімкнути світлодіод
  delay(1000);                       // чекати 1 секунду
  digitalWrite(LED_BUILTIN, LOW);    // вимкнути світлодіод
  delay(1000);                       // чекати 1 секунду
}