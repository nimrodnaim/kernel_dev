/*
 * We all should start somewhere
 */

#include <linux/module.h>
#include <linux/kernel.h>

int hello_module(void) {
    printk(KERN_INFO "[+] rootkit has been loaded");
    return 0;
}

void goodbye_module(void) {
    printk(KERN_INFO "[-] rootkit has been unloaded");
}

module_init(hello_module);
module_exit(goodbye_module);
