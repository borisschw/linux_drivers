obj-m += helloworld.o hello_world_parameters.o
KERNEL_DIR ?= $(HOME)/dev/Linux_for_Tegra/source/public/build
all:
	make -C $(KERNEL_DIR) \
	ARCH=arm64 CROSS_COMPILE=/home/boris/l4t-gcc/gcc-linaro-7.3.1-2018.05-x86_64_aarch64-linux-gnu/bin/aarch64-linux-gnu- \
SUBDIRS=$(PWD) modules

clean:
	make -C $(KERNEL_DIR) \
	ARCH=arm64 CROSS_COMPILE=/home/boris/l4t-gcc/gcc-linaro-7.3.1-2018.05-x86_64_aarch64-linux-gnu/bin/aarch64-linux-gnu- \
SUBDIRS=$(PWD) clean

deploy:
scp *.ko user@192.168.1.25:~/
