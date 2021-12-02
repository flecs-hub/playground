# playground
Standalone Flecs project with embedded graphics modules

<img width="912" alt="Screen Shot 2021-12-02 at 2 11 46 AM" src="https://user-images.githubusercontent.com/9919222/144401848-daf20a0b-03da-43ca-8cb4-bffefa326d04.png">

## How to run
Use the following commands (only verified on macOS, working on Emscripten, Linux and Windows support):

Install bake:
```
git clone https://github.com/SanderMertens/bake
make -C bake/build-$(uname)
bake/bake setup
```

or if you already have a bake installation:
```
bake upgrade
```

Then run:
```
bake run flecs-hub/playground
```

Have fun!

