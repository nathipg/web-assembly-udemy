#include <emscripten.h>
#include <stdio.h>

// Declare reusable JS function
EM_JS(void, jsFunction, (int n), {
  console.log("Call from EM_JS: " + n);
});

int main() {
  printf("WASM Ready\n");

  // Call JS function (eval)
  emscripten_run_script("console.log('Hello from C')");

  // Call JS function ASYNC (eval)
  emscripten_async_run_script("console.log('Hello from C')", 2000);

  // Get return value from JS function - INT
  int jsVal = emscripten_run_script_int("getNum()");

  // Get return value from JS function - STR
  char* jsValStr = emscripten_run_script_string("getStr()");

  printf("Value from getNum: %d\n", jsVal);
  printf("Value from getStr: %s\n", jsValStr);

  // Call EM_JS fn
  jsFunction(144);

  return 1;
}

