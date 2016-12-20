all: SpeedTestC
ALL_C = Speedtest.c \
	SpeedtestConfig.c \
	SpeedtestServers.c \
	url.c \
	http.c

ALL_H = $(patsubst %.c, %.h, $(ALL_C))

ifneq ("$(CROSS_COMPILE)", "y")
CFLAGS += -Wall -Werror -g
LDFLAGS += -lm
endif

SpeedTestC: $(ALL_C) $(ALL_H)
	$(CC) -o $@ $(ALL_C) $(CFLAGS) $(LDFLAGS)

test:	SpeedTestC
	valgrind --leak-check=full --show-leak-kinds=all ./SpeedTestC --server http://speedtest.skynet.net.pl/speedtest/upload.php
	valgrind --leak-check=full --show-leak-kinds=all ./SpeedTestC

clean:
	rm -fr SpeedTestC *.o

.PHONY: all
