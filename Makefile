

PREFIX=/usr/local/bin

CFLAGS=-Wall -g

all: hex2bin

install: hex2bin
	install --mode 755 hex2bin ${PREFIX}/

clean:
	rm -f hex2bin

