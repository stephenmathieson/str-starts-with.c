
test: test.c src/str-starts-with.c
	$(CC) -std=c99 $^ -o $@
	./test

.PHONY: test
