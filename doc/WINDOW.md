# Window Class

A window class to handle SDL events and drawings

### Methods

**Window()**
> Creates a new window with a default size

**Window(unsigned int width, unsigned int height)**
> Creates a new window with the given width and height values

virtual void **draw()**
> Method to be implemented by subclasses, is executed by the **run()** method

unsigned int **getHeight()**
> Returns the current height of the window

unsigned int **getWidth()**
> Returns the current height of the window

SDL_Window* **getWindow()**
> Returns a pointer to the SDL_Window instance
