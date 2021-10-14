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

### Preamble

`UTF8ToString(_getStr())`

`UTF16ToString(_getStr())`

`UTF32ToString(_getStr())`

`stringToUTF8('new value', _getStr(), lengthBytesUTF8('new value') + 1)`