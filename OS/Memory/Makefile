CC = g++ # C compiler
#CFLAGS = -fPIC -Wall -Wextra -O2 -g # C flags
CFLAGS = -fPIC -Wall -g # C flags
LDFLAGS = -shared  # linking flags
RM = rm -f  # rm command
TARGET_LIB = libMemoryMgr.so # target lib

SRCS = Memory_Manager.c  # source files
OBJS = $(SRCS:.c=.o)

.PHONY: all
all: ${TARGET_LIB}

$(TARGET_LIB): $(OBJS)
	$(CC) ${LDFLAGS} -o $@ $^

$(SRCS:.c=.d):%.d:%.c
	$(CC) $(CFLAGS) -MM $< >$@

.PHONY: clean
clean:
	-${RM} ${TARGET_LIB} ${OBJS} $(SRCS:.c=.d)

