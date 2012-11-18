/*
 *hello.c Hello,World! As a Kernel Module
 */
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include "hello.h"

/*
 *hello_init the init function , called when the module is loaded.
 *Return zero if successfully loaded, nozero otherwisw.
 */
static int hello_init(void) {
	printk(KERN_ALERT"111111111: Hello,World!\n");
	hello();
	return 0;
}

/*
 *hello_exit the exit function ,called when the module is removed.
 */
static void hello_exit(void) {
	goodbye();
}

module_init( hello_init);
module_exit( hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("iris");
