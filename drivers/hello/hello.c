#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
//必选
//模块许可声明
MODULE_LICENSE("GPL");
//模块加载函数
static int __init hello_init(void)
{
    printk(KERN_ALERT "hello,I am edsionte\n");
    return 0;
}
//模块卸载函数
static void __exit  hello_exit(void)
{
    printk(KERN_ALERT "goodbye,kernel\n");
}
//模块注册
module_init(hello_init);
module_exit(hello_exit);
//可选
MODULE_AUTHOR("edsionte Wu");
MODULE_DESCRIPTION("This is a simple example!\n");
MODULE_ALIAS("A simplest example");
