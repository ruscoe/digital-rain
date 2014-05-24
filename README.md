# Digital-Rain

A C program that loosely emulates the "[digital rain](http://en.wikipedia.org/wiki/Matrix_digital_rain)"
effect from [The Matrix](http://en.wikipedia.org/wiki/The_Matrix).

![Digital-Rain screen shot](http://ruscoe.org/assets/images/programs/digital-rain.png)

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
