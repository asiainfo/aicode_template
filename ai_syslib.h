 /* 
 安全函数实现
 copyright 2017-2019 www.asiainfo.com
 */
#include <syslib.h>
#include <string.h>
#define ai_memcpy(void * src,const void * dest,len)
{
if(len<=0)
   return NULL;
else
  return memcpy(src,dest,len);
}
