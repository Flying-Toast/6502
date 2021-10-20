#include <stdint.h>

#define U16_FROM_HL(h, l) (((h) << 8) | (l))

#define STATUS_NEGATIVE (1 << 7)
#define STATUS_OVERFLOW (1 << 6)
#define STATUS_BRK      (1 << 4)
#define STATUS_DECIMAL  (1 << 3)
#define STATUS_IRQBDIS  (1 << 2)
#define STATUS_ZERO     (1 << 1)
#define STATUS_CARRY    (1 << 0)

#define VEC_RESB_L (0xFFFC)
#define VEC_RESB_H (0xFFFD)

struct c6502 {
	// accumulator
	uint8_t a;

	// index regs
	uint8_t x;
	uint8_t y;

	// status
	uint8_t p;

	uint16_t pc;

	// stack
	uint8_t s;

	uint8_t mem[UINT16_MAX];
};

void c6502_reset(struct c6502 *c)
{
	c->p |= STATUS_DECIMAL | STATUS_IRQBDIS;
	c->pc = U16_FROM_HL(c->mem[VEC_RESB_H], c->mem[VEC_RESB_L]);
}

int main(void)
{
}
