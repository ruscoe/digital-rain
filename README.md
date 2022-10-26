# Digital-Rain

A C program that loosely emulates the "[digital rain](http://en.wikipedia.org/wiki/Matrix_digital_rain)"
effect from [The Matrix](http://en.wikipedia.org/wiki/The_Matrix).

![digital-rain](https://user-images.githubusercontent.com/87952/198073462-18d68301-dd48-4bf1-b7d0-d93e7e8900e3.png)

[Animated gif preview](https://ruscoe.org/assets/images/misc/github/digital-rain.gif)

## Requirements

* [gcc](http://gcc.gnu.org/) or any comparable C compiler.
* [ncurses](http://www.gnu.org/software/ncurses/)

## Usage Example

Compile:

```bash
gcc drain.c -lncurses -o drain
```

Run:

```bash
./drain
```

Ctrl+C to exit.

Only tested on Linux, but should compile on other platforms as long as
the requirements are met.

## License

Released under the [MIT License](http://www.opensource.org/licenses/mit-license.php).
