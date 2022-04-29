
//C++
byte btn;
byte pins[7] = { 13, 12, 11, 10, 9, 8, 7 };
byte Display[16][7] = 
{
  {0, 0, 0, 0, 0, 0, 1},
  {1, 0, 0, 1, 1, 1, 1},
  {0, 0, 1, 0, 0, 1, 0},
  {0, 0, 0, 0, 1, 1, 0},
  {1, 0, 0, 1, 1, 0, 0},
  {0, 1, 0, 0, 1, 0, 0},
  {0, 1, 0, 0, 0, 0, 0},
  {0, 0, 0, 1, 1, 1, 1},
  {0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 1, 1, 0, 0},
  {0, 0, 0, 1, 0, 0, 0},
  {1, 1, 0, 0, 0, 0, 0},
  {0, 1, 1, 0, 0, 0, 1},
  {1, 0, 0, 0, 0, 1, 0},
  {0, 1, 1, 0, 0, 0, 0},
  {0, 1, 1, 1, 0, 0, 0},
};

void setup()
{
    pinMode(6, INPUT_PULLUP);
    for(byte i = 0; i < 7; ++i)
       pinMode(pins[i], OUTPUT);
    for(byte j = 0; j < 7; j++)
       digitalWrite(pins[j], 1);
}

void loop()
{
    for(int i = 0; i < 16; i++) 
    {
        delay(1000);
        btn = digitalRead(6);
        if(btn == LOW)
        {
            for (int k = 0; k < 7; k++)
                digitalWrite(pins[k], Display[i][k]);
        }
        else
        {
            for (int j = 0; j < 7; j++)
                digitalWrite(pins[j], 1);  
        }
    }
}