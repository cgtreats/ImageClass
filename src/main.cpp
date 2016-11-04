#include <iostream>
#include "Image.h"
#include <random>

int main(){

std::cout<< "Testing image\n";
Image test(200,200);

std::random_device rd;
std::default_random_engine re(rd());
std::uniform_int_distribution<> colour(0,255);
std::uniform_int_distribution<> pos(0,200);

for(int i=0; i<3124321; ++i)
{

test.setPixel(pos(re),pos(re),(unsigned char) colour(re),(unsigned char) colour(re),(unsigned char) colour(re));

}

test.save("random.png");

return EXIT_SUCCESS;

}
