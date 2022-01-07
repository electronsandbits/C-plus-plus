#include "picture.h"

int main()
{
   Picture pic("a.png");
   Picture pic2("b.png");
   // Place the second picture next to the first
   pic.add(pic2, pic.width(), 0);
   pic.save("gallery.png");
   return 0;
}

