// C++ code
//
int botao = 7;
int led1 = 10;
int led2 = 3;

int estado = 0;

void setup()
{
  pinMode(botao, INPUT_PULLUP);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop()
{
  if (digitalRead(botao) == LOW)
  {
    estado++;

    if (estado == 1)
    {
      digitalWrite(led1, HIGH);
    }

    if (estado == 2)
    {
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
    }

    if (estado == 3)
    {
      digitalWrite(led2, LOW);
      estado = 0;
    }

    // Espera soltar o botão
    while (digitalRead(botao) == LOW)
    {
    }

    delay(100);
  }
}

