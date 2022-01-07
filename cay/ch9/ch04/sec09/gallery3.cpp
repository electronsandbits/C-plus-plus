#include "picture.h"

int main()
{
   const int GAP = 10;

   Picture pic("a.png");
   Picture pic2("b.png");
   // Place the second picture next to the first
   pic.add(pic2, pic.width() + GAP, 0);
   pic.save("gallery.png");
   return 0;
}

