#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

#define ROW_DELAY 40000

int main(void)
{
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
        columns_row[i] = (rand() % max_y + 0);
        columns_active[i] = (rand() % 1 + 0);
      }
    }

    for (i = 0; i < max_x; i++)
    {
      mvprintw(columns_row[i], i, "o");
      columns_row[i]++;

      if (columns_row[i] >= max_y)
      {
        columns_row[i] = -1;
      }
    }
    usleep(ROW_DELAY);
    refresh();
  }

  endwin();
  return 0;
}
