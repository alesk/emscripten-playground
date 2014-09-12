# Emscripten Playground

## Installation

Use [mscripten SDK][1] to setup emscripten environment. Download **portable version* of SDK,
`unpack` and `cd` to dir. Then:

    # Fetch the latest registry of available tools
    ./emsdk update

    # Download and install the latest SDK tools
    ./emsdk install latest

    # Make the "latest" SDK "active"
    ./emsdk activate latest

    # Set the current Emscripten path on Linux/Mac OS X
    source ./emsdk_env.sh


Read [Emscripten Tutorial][2].


## Examples

To see emscripten in action, compile `average.c` and run it inside `average.html`:

    emcc -s EXPORTED_FUNCTIONS="['_main', '_average']" -s NO_EXIT_RUNTIME=1 average.c -o average.js
    open average.html


[1]: http://kripken.github.io/emscripten-site/docs/getting_started/downloads.html
[2]: http://kripken.github.io/emscripten-site/docs/getting_started/Tutorial.html
