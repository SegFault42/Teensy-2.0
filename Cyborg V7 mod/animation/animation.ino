int mode1 = 22; // interupteur 2 positions

void setup()
{
  int i = 0; //Déclaration du compteur à 0
  pinMode(mode1, INPUT); //Initialisation du pin 22 en mode input

  while (i <= 45)
  {
    pinMode(i, OUTPUT); //Initialisation des pins 0 à 21 en mode output
    i += 1;
  }
}

void  constantVert(void) // Fonction qui laisse le clavier allumer en vert constament
{
  int i = 0;
  while (i <= 21)
  {
    digitalWrite(i, HIGH);
    i += 2;
  }
}

void  constantRouge(void)// Fonction qui laisse le clavier allumer en rouge constament
{
  int i = 1;
  while (i <= 21)
  {
    digitalWrite(i, HIGH);
    i += 2;
  }
}

void constantOrange()// Fonction qui laisse le clavier allumer en orange constament
{
  int i = 0;
  while (i <= 21)
  {
    digitalWrite(i, HIGH);
    i += 1;
  }
}

void chenillard(int tempo) // Animation d'un chenillard simple
{
  int i = 0;
  while (i <= 21)
  {
    digitalWrite(i, HIGH);
    delay(tempo);
    digitalWrite(i, LOW);
    i += 1;
  }
}

void allerRetour1(int tempo)
{
  int i = 1;

  while (i <= 21)
  {
    digitalWrite(i, HIGH);
    i += 2;
    delay(tempo);
  }
  while (i >= 0)
  {
    digitalWrite(i, LOW);
    i--;
    delay(tempo);
  }
  delay(1000);
}

void allerRetour2(int tempo)
{
  int i = 0;

  while (i <= 7)
  {
    digitalWrite(i, HIGH);
    i += 2;
    delay(tempo);
  }
  while (i <= 11)
  {
    digitalWrite(i, HIGH);
    i++;
    delay(tempo);
  }
  i = 13;
  while (i <= 21)
  {
    digitalWrite(i, HIGH);
    i += 2;
    delay(tempo);
  }
  //---------------------------------------------//
  i = 0;
  while (i <= 7)
  {
    digitalWrite(i, LOW);
    i ++;
    delay(tempo);
  }
  while (i <= 11)
  {
    digitalWrite(i, LOW);
    i++;
    delay(tempo);
  }
  i = 13;
  while (i <= 21)
  {
    digitalWrite(i, LOW);
    i += 2;
    delay(tempo);
  }
}

void animation3(int tempo)
{
  int i = 0;

  while (i <= 21)
  {
    digitalWrite(i, HIGH);
    delay(tempo);
    digitalWrite(i, LOW);
    i++;
  }
}

void loop()
{
  if (digitalRead(mode1) == LOW)
  {
    allerRetour2(50);
  }
  else if (digitalRead(mode1) == HIGH)
  {
    constantVert();
  }
}
