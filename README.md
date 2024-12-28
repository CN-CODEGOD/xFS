# XFS Project

This project is designed to display GPU and CPU usage statistics. It consists of several source files that implement the functionality to retrieve and display these statistics.

## Project Structure

```
xfs-project
├── src
│   ├── main.cpp          # Entry point of the application
│   ├── gpu_usage.cpp     # Implementation of GPU usage functions
│   ├── cpu_usage.cpp     # Implementation of CPU usage functions
│   └── include
│       ├── gpu_usage.h   # Header for GPU usage functions
│       └── cpu_usage.h   # Header for CPU usage functions
├── CMakeLists.txt        # CMake configuration file
└── README.md             # Project documentation
```

## Building the Project

To build the project, follow these steps:

1. Ensure you have CMake installed on your system.
2. Open a terminal and navigate to the project directory.
3. Create a build directory:
   ```
   mkdir build
   cd build
   ```
4. Run CMake to configure the project:
   ```
   cmake ..
   ```
5. Compile the project:
   ```
   make
   ```

## Running the Application

After building the project, you can run the application with the following command:

```
./xfs-project
```

This will display the current GPU and CPU usage statistics. 

## Dependencies

This project may require additional libraries for retrieving GPU and CPU statistics. Ensure that you have the necessary libraries installed on your system.

## License

This project is licensed under the MIT License. See the LICENSE file for more details.# xFS
