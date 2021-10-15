#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//============================================================================

struct population {
  char *c;   // country, city, school, etc.
  int y;     // year
  int i;     // population (number of people)
};

//============================================================================

void print_population(struct population *p) {
  printf("The population of %s in %d is %d.\n", p->c, p->y, p->i);  // The population of Hogwarts in 1997 is 1000.
}

//============================================================================

struct population * make_population(char *country, int year, int pop) {

  struct population *p = malloc(sizeof(struct population));

  p->c = country;
  p->y = year;
  p->i = pop;

  return p;
}

//============================================================================

int main() {

  srand(time(NULL));
  int random_year = (rand() % 2000) + 2022;
  int random_pop = rand();

  struct population *europa = make_population("Europa", random_year, random_pop);
  print_population(europa);
  free(europa);

  random_pop = rand();

  struct population *titan = make_population("Titan", random_year, random_pop);
  print_population(titan);
  free(titan);

  return 0;
}
