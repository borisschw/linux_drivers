#include <linux/module.h>
#include <linux/time.h>
static int num = 5;

module_param(num, int, S_IRUGO);
static struct timeval start_time;


static int __init hello_init(void)
{
	do_gettimeofday(&start_time);
	pr_info("parameter num = %d.\n", num);
	return 0;
}
static void __exit hello_exit(void)
{
	static struct timeval end_time;
	do_gettimeofday(&end_time);
	pr_info("Hello world exit time passed = %ld\n", end_time.tv_sec - start_time.tv_sec);
}

module_init(hello_init);
module_exit(hello_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Alberto Liberal <aliberal@arroweurope.com>");
MODULE_DESCRIPTION("This is a print out Hello World module");
