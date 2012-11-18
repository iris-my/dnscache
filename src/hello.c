#include "hello.h"
#include <linux/kernel.h>

void hello(void) {
printk(KERN_CRIT"dnscache: Hello,World!\n");
}

void goodbye(void) {
printk(KERN_CRIT "dnscache: Good,Bye!\n");
}

