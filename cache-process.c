#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define N 1000000

int counter = 0;

void* increment_counter(void* arg) {
  for (int i = 0; i < N; i++) {
    counter++;
  }
  return NULL;
}

int main(int argc, char* argv[]) {
  pthread_t thread1, thread2;

  pthread_create(&thread1, NULL, increment_counter, NULL);
  pthread_create(&thread2, NULL, increment_counter, NULL);

  pthread_join(thread1, NULL);
  pthread_join(thread2, NULL);

  printf("Counter value: %d\n", counter);
  return 0;
}