#include <rtx51tny.h>

long counter1; 

void job0 () _task_ 0 
{
 //os_create_task (1);创建任务1

}
void job1 () _task_ 1  {
long counter1; 
  while (1)  {                        /* endless loop                         */
    counter1++;                       /* increment counter 1                  */
  }
}
