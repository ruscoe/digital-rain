#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

#define ROW_DELAY 40000

int main(void)
{
  srand(time(NULL));

  int x = 0, y = 0;
  int max_x = 0, max_y = 0;

  initscr();
  noecho();
  curs_set(FALSE);

  start_color();
  init_pair(1, COLOR_GREEN, COLOR_BLACK);
  attron(COLOR_PAIR(1));

  getmaxyx(stdscr, max_y, max_x);

  int columns_row[max_x];
  int columns_active[max_x];

  int i;

  for (i = 0; i < max_x; i++)
  {
    columns_row[i] = -1;
    columns_active[i] = 0;
  }

  while (1)
  {
    for (i = 0; i < max_x; i++)
    {
      if (columns_row[i] == -1)
      {
        columns_row[i] = get_rand_in_range(0, max_y);
        columns_active[i] = get_rand_in_range(0, 1);
      }
    }

    for (i = 0; i < max_x; i++)
    {
      if (columns_active[i] == 1)
      {
        mvprintw(columns_row[i], i, "o");
      }
      else
      {
        mvprintw(columns_row[i], i, " ");
      }

      columns_row[i]++;

      if (columns_row[i] >= max_y)
      {
        columns_row[i] = -1;
      }

      if (get_rand_in_range(0, 1000) == 0)
      {
        columns_active[i] = (columns_active[i] == 0) ? 1 : 0;
      }
    }

    usleep(ROW_DELAY);
    refresh();
  }

  endwin();
  return 0;
}

int get_rand_in_range(int min, int max)
{
  return (rand() % ((max + 1) - min) + min);
}
