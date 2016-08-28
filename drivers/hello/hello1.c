#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int init_hello(void)
{
	int *p=0;
	*p=1;
	printk(KERN_EMERG "Hello World!\n");
	return 0;
}

static void exit_hello(void)
{
	printk(KERN_ALERT "Good Bye!\n");
}

module_init(init_hello);
module_exit(exit_hello);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("YH");
MODULE_DESCRIPTION("First module test.");

