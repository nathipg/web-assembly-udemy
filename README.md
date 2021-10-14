# web-assembly-udemy

WasmFiddle: https://wasdk.github.io/WasmFiddle/
WebAssembly Studio: https://webassembly.studio/
Emscripten: https://emscripten.org/index.html

## Compile example

`emcc .\lib\demo.c -s WASM=1 -o .\public\demo.js`

`emcc .\lib\demo.c -s WASM=1 -s EXPORTED_FUNCTIONS="['_main', '_getNum']" -o .\public\demo.js`

## Commands

`ccall('greet', 'string')`

`ccall('greet', 'string', ['string'], ['Pissuti'])`
