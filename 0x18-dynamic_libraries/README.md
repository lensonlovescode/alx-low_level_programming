This directory contains project tasks from the concept of dynamic libraries in c.


Dynamic Libraries
	Definition: Dynamic libraries (.so in Linux) are collections of functions and code that are loaded into memory during the runtime of a program.
	How It Works: When a program starts, the dynamic linker loads the required .so files into memory and links the function calls dynamically.
	Creation: Created using -fPIC (Position Independent Code) during compilation and -shared to generate the .so file.
	Usage: Programs link to dynamic libraries at runtime, reducing executable size.
