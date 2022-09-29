#include <iostream>
#include <sstream>
//code golf-y fizzbuzz, provide the value to count up to in argc
//fizz will trigger for divisible by 3 and fuzz for divisible by 5
//code was done to play around with recursively calling main...
int main(int argc,char** argv)
{
  argc--;
  argv[0][0]=argc%3; argv[0][1]=argc%5;
  std::stringstream s; s<<argc;
  std::cout << (argv[0][0]&&argv[0][1]?s.str():"") << (!argv[0][0]?"Fizz":"") << (!argv[0][1]?"Buzz":"") <<"\n";
  s.str(argv[1]); int n; s>>n;
  return (argc>=n?0:main(argc+2,argv));
}