
#include <stdio.h>
#include <string.h>

typedef struct _MyMsg {
  int appId;
  char msgbody[32];
} MyMsg;

void myfunc(MyMsg *msg)
{
  if (strlen(msg->msgbody) > 0 )
    printf("App Id = %d \nMsg = %s \n",msg->appId, msg->msgbody);
  else
    printf("App Id = %d \nMsg = No Msg\n",msg->appId);
}

/*
 * Prototype declaration
 */
void (*callback)(MyMsg *);

int main(void)
{
  MyMsg msg1;
  msg1.appId = 100;
  strcpy(msg1.msgbody, "This is a test\n");

  /*
   * Assign the address of the function "myfunc" to the function
   * pointer "callback" (may be also written as "callback = &myfunc;")
   */
  callback = myfunc;

  /*
   * Call the function (may be also written as "(*callback)(&msg1);")
   */
  callback(&msg1);
  //This call is also legal
  (*callback)(&msg1);

  return 0;
}
