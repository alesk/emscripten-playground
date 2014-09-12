# Emscripten Playground

## Installation

Use [emscripten SDK][1] to setup emscripten environment. Download **portable version** of SDK,
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

### Run `average.c` in browser

The content of simple file for calculating average:


```c
#include <stdio.h>

double average(int len,  const double array[]) {
    double avg = 0;
    for (int i=0; i < len; i+=1) {
        avg += array[i];
    }

    return avg/len;
}

int main() {
    const double a[] = {10.2, 11.3, 10.3};
    printf("Average is %f\n", average(3, a));
}
```

To see emscripten in action, compile `average.c` and run it inside `average.html`:

    emcc -s EXPORTED_FUNCTIONS="['_main', '_average']" -s NO_EXIT_RUNTIME=1 average.c -o average.js
    open average.html


[1]: http://kripken.github.io/emscripten-site/docs/getting_started/downloads.html
[2]: http://kripken.github.io/emscripten-site/docs/getting_started/Tutorial.html
