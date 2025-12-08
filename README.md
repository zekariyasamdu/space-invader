# Space Invaders 

A  implementation of Space Invaders, built using C++ and the Raylib game programming library.
# Getting Started

These instructions will get a copy of the project up and running on your local machine for development and testing purposes.
Prerequisites

To build and run this game, you must have the following tools installed on your system:

1. C++ Compiler: A modern compiler (like GCC or Clang) that supports C++20 

2. CMake: Used to manage the build process and generate the platform-specific build files.

3. Ninja: The high-speed build system generator used by CMake.

4. Raylib: The game library. Since this project is configured to use the globally installed Raylib library, you must have the development files installed on your system.

Installing Raylib on Ubuntu/Debian

If you are on an Ubuntu or Debian-based Linux distribution, you can install and build it using this guild:
 - https://github.com/raysan5/raylib/wiki/Working-on-GNU-Linux
Note: If you are on macOS or Windows, the installation method will be different (e.g., using Homebrew or VCPKG).

# Building and Running the Game

The project uses a standard CMake build flow. Follow these steps from your terminal:
### 1. Clone the Repository

First, download the source code:

``` bash
git clone https://github.com/zekariyasamdu/space-invader
cd space_invader
```

### 2. Configure CMake

Configure the build system or use the already existing one.


### 3. Prepare the Build Directory

Create a separate directory for the build output (object files, executable, etc.). This keeps your source folder clean.
``` bash
cmake -G Ninja -B build

```
### 4. Compile the Code

Use Ninja to quickly compile the source code and link the Raylib library:

``` bash
ninja -C build
```

### 5. Run the Game

Once compilation is complete, the executable file (space_invader) will be located inside your build folder.

``` bash
./build/space_invader
```

Note: for the last two steps just make the ./run.sh script an executable to automate your builds and runs.
