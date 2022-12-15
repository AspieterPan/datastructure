#include <cstdio>
#include <pthread.h>
#include <stdio.h>

void *Thread1(void *arg) {
  printf("http://c.biancheng.net\n");
  return 0;
}

void *Thread2(void *arg) {
  printf("c语言中文网\n");
  return 0;
}

int main() {
  int res;
  pthread_t mythread1, mythread2;
  void *thread_result;

  res = pthread_create(&mythread1,NULL,Thread1,NULL);
  if (res != 0) {
    printf("线程创建失败");
    return 0;
  }

  res = pthread_create(&mythread2,NULL,Thread2,NULL);
  if (res != 0) {
    printf("线程创建失败");
    return 0;
  }

  res=pthread_join(mythread1,&thread_result);

  printf("%s\n",(char*)thread_result);

  res = pthread_join(mythread2,&thread_result);
  printf("%s\n",(char*)thread_result);
  printf("主线程执行完毕");
  return 0;
}
