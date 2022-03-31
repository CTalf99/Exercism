#include <iostream>

struct Queen {
  int x;
  int y;
  char symbol;
};

struct Grid {
  int size;

  void render (Queen white, Queen black)
  {
   for (int i = 0; i < size; i++)
    {
      for (int j = 0; j < size; j++)
      {
        if (white.x == j && white.y == i)
        {
          std::cout << white.symbol << " ";
        }
        else if (black.x == j && black.y == i)
        {
          std::cout << black.symbol << " ";
        }
        else
        std::cout << ", ";
      }
      std::cout << std::endl;  
    } 
  }
};

bool valid (Queen white, Queen black)
{
  int k = abs(white.x-black.x);
  if ((white.x == black.x && white.y != black.y) || (white.x != black.x && white.y == black.y)) 
  {
    return true;
  }
  else if (abs(white.y - black.y) == k)
  {
    return true;
  }
  else
    return false;
};

int main ()
{
char replay = 'Y';

while (replay == 'Y' || replay == 'y')
{
  Grid board{8};
  Queen white;
  white.symbol = 'W';
  Queen black;
  black.symbol = 'B';

  std::cout << "Enter x & y coordinates of white queen: " << std::endl;
  std::cin >> white.x;
  std::cin >> white.y;
  std::cout << "Enter x & y coordinates of black queen: " << std::endl;
  std::cin >> black.x;
  std::cin >> black.y;

  board.render(white, black);

  if (valid(white, black))
  {
    std::cout << "The queens are attacking each other" << std::endl;
  }
  else
  {
    std::cout << "The queens are not attacking each other" << std::endl;
  }
  system("pause");
  system("cls");

  std::cout << "Would you like to play again? (Y/N)";
  std::cin >> replay;
}
  return 0;
}