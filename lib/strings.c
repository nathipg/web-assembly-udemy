#include <emscripten.h>
#include <stdio.h>

char * str = "My string var";

char * getStr() {
  return str;
}

int main() {
  printf("WASM Ready\n");

  return 1;
}

