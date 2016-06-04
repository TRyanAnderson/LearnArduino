//This class represents a board of leds. x and y start at bottom left
//The led's are represented in a 2 dimensional array of bits maps
//        example: 2x6 array
//        11111111 11111111
//        10000000 00000001
//        10000000 00000001
//        10000000 00000001
//        10000000 00000001
//        11111111 11111111
//

class LedBoard
{
  //number of leds
    int width;
    int height;
    static const int maxHeight = 96;
    static const int maxWidth = 12;

    byte ledArray[maxWidth][maxWidth];

  public:
    LedBoard(int _width, int _height)
    {
      width = _width;
      height = _height;

      for(int i = 0; i<width; i++)
      {
        for(int j = 0; j<height; j++)
        {
          ledArray[i][j] = 0;
        }
      }
    }

  public:
    void togglePin(int x, int y)
    {
      if(x<width && y<height)
      ledArray[getXColumn(x)][y] = 1;
    }


  private:
    byte toggleBit(byte originalByte, int toggleBit)
    {
     
    }
  private:
    int getXColumn(int x)
    {
      int column = 0;
      while(x>8){
        column++;
        x = x-8;
      }
      return column;
    }
  private:
    byte getXBitToToggle(int x)
    {
      int column = 0;
      while(x>8){
        column++;
        x = x-8;
      }
      return x;
    }

   public:
    void lightBoard()
    {
      
    }

   public:
    void unlightBoard()
    {
      
    }
    
};

LedBoard onlyBoard(2,2);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

  onlyBoard.lightBoard();
  delay(500);
  onlyBoard.unlightBoard();
  delay(500);

}


