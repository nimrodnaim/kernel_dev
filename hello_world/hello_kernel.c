/*
 * We all should start somewhere
 */

#include <linux/module.h>
#include <linux/kernel.h>

int hello_module(void) {
    printk(KERN_INFO "Hello world\n");
    return 0;
}

void goodbye_module(void) {
    printk(KERN_INFO "Goodbye world\n");
}

module_init(hello_module);
module_exit(goodbye_module);
