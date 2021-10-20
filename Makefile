OBJECTS=main.o
CC=gcc
CFLAGS=-O3
EXE=6502

$(EXE): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(EXE)

.PHONY: run
run: $(EXE)
	@echo "=== Running ./$(EXE) ==="
	@./$(EXE)

.PHONY: clean
clean:
	rm *.o
	rm $(EXE)
