# HelloWorld Project

The purpose of this HelloWorld project is to demonstrate a simple setup that can create and run a program.

## Project Structure
- `src/`: Contains the source code for the HelloWorld library.
- `tests/`: Contains the test code for the HelloWorld library.

## Build and Run Instructions
1. Navigate to the `HelloWorld` directory:
   ```
   cd c:\Users\travi\Downloads\REPOSITORIES\CODE\HelloWorld
   ```

2. Create a `build` directory and navigate into it:
   ```
   mkdir build
   cd build
   ```

3. Run CMake to configure the project:
   ```
   cmake ..
   ```

4. Build the project:
   ```
   cmake --build .
   ```

5. Run the test executable to verify the output:
   ```
   ..\tests\test_hello_world.exe
   ```