#include <stdint.h>

#define U16_FROM_HL(h, l) (((h) << 8) | (l))

#define STATUS_N (1 << 7)
#define STATUS_V (1 << 6)
#define STATUS_B (1 << 4)
#define STATUS_D (1 << 3)
#define STATUS_I (1 << 2)
#define STATUS_Z (1 << 1)
#define STATUS_C (1 << 0)

#define VEC_RESB_L (0xFFFC)
#define VEC_RESB_H (0xFFFD)

#define OPCODE_ADC ()
#define OPCODE_AND ()
#define OPCODE_ASL ()
#define OPCODE_BBR ()
#define OPCODE_BBS ()
#define OPCODE_BCC ()
#define OPCODE_BCS ()
#define OPCODE_BEQ ()
#define OPCODE_BIT ()
#define OPCODE_BMI ()
#define OPCODE_BNE ()
#define OPCODE_BPL ()
#define OPCODE_BRA ()
#define OPCODE_BRK ()
#define OPCODE_BVC ()
#define OPCODE_BVS ()
#define OPCODE_CLC (0x18)
#define OPCODE_CLD (0xD8)
#define OPCODE_CLI (0x58)
#define OPCODE_CLV (0xB8)
#define OPCODE_CMP ()
#define OPCODE_CPX ()
#define OPCODE_CPY ()
#define OPCODE_DEC ()
#define OPCODE_DEX (0xCA)
#define OPCODE_DEY (0x88)
#define OPCODE_EOR ()
#define OPCODE_INC ()
#define OPCODE_INX (0xE8)
#define OPCODE_INY (0xC8)
#define OPCODE_JMP ()
#define OPCODE_JSR ()
#define OPCODE_LDA ()
#define OPCODE_LDX ()
#define OPCODE_LDY ()
#define OPCODE_LSR ()
#define OPCODE_NOP (0xEA)
#define OPCODE_ORA ()
#define OPCODE_PHA ()
#define OPCODE_PHP ()
#define OPCODE_PHX ()
#define OPCODE_PHY ()
#define OPCODE_PLA ()
#define OPCODE_PLP ()
#define OPCODE_PLX ()
#define OPCODE_PLY ()
#define OPCODE_RMB ()
#define OPCODE_ROL ()
#define OPCODE_ROR ()
#define OPCODE_RTI ()
#define OPCODE_RTS ()
#define OPCODE_SBC ()
#define OPCODE_SEC (0x38)
#define OPCODE_SED (0xF8)
#define OPCODE_SEI (0x78)
#define OPCODE_SMB ()
#define OPCODE_STA ()
#define OPCODE_STP ()
#define OPCODE_STX ()
#define OPCODE_STY ()
#define OPCODE_STZ ()
#define OPCODE_TAX (0xAA)
#define OPCODE_TAY (0xA8)
#define OPCODE_TRB ()
#define OPCODE_TSB ()
#define OPCODE_TSX (0xBA)
#define OPCODE_TXA (0x8A)
#define OPCODE_TXS (0x9A)
#define OPCODE_TYA (0x98)
#define OPCODE_WAI ()

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

static void op_adc(struct c6502 *c)
{
}

static void op_and(struct c6502 *c)
{
}

static void op_asl(struct c6502 *c)
{
}

static void op_bbr(struct c6502 *c)
{
}

static void op_bbs(struct c6502 *c)
{
}

static void op_bcc(struct c6502 *c)
{
}

static void op_bcs(struct c6502 *c)
{
}

static void op_beq(struct c6502 *c)
{
}

static void op_bit(struct c6502 *c)
{
}

static void op_bmi(struct c6502 *c)
{
}

static void op_bne(struct c6502 *c)
{
}

static void op_bpl(struct c6502 *c)
{
}

static void op_bra(struct c6502 *c)
{
}

static void op_brk(struct c6502 *c)
{
}

static void op_bvc(struct c6502 *c)
{
}

static void op_bvs(struct c6502 *c)
{
}

static void op_clc(struct c6502 *c)
{
	c->p &= ~STATUS_C;
}

static void op_cld(struct c6502 *c)
{
	c->p &= ~STATUS_D;
}

static void op_cli(struct c6502 *c)
{
	c->p &= ~STATUS_I;
}

static void op_clv(struct c6502 *c)
{
	c->p &= ~STATUS_V;
}

static void op_cmp(struct c6502 *c)
{
}

static void op_cpx(struct c6502 *c)
{
}

static void op_cpy(struct c6502 *c)
{
}

static void op_dec(struct c6502 *c)
{
}

static void op_dex(struct c6502 *c)
{
	c->x -= 1;
}

static void op_dey(struct c6502 *c)
{
	c->y -= 1;
}

static void op_eor(struct c6502 *c)
{
}

static void op_inc(struct c6502 *c)
{
}

static void op_inx(struct c6502 *c)
{
	c->x += 1;
}

static void op_iny(struct c6502 *c)
{
	c->y += 1;
}

static void op_jmp(struct c6502 *c)
{
}

static void op_jsr(struct c6502 *c)
{
}

static void op_lda(struct c6502 *c)
{
}

static void op_ldx(struct c6502 *c)
{
}

static void op_ldy(struct c6502 *c)
{
}

static void op_lsr(struct c6502 *c)
{
}

static void op_nop(struct c6502 *c)
{
}

static void op_ora(struct c6502 *c)
{
}

static void op_pha(struct c6502 *c)
{
}

static void op_php(struct c6502 *c)
{
}

static void op_phx(struct c6502 *c)
{
}

static void op_phy(struct c6502 *c)
{
}

static void op_pla(struct c6502 *c)
{
}

static void op_plp(struct c6502 *c)
{
}

static void op_plx(struct c6502 *c)
{
}

static void op_ply(struct c6502 *c)
{
}

static void op_rmb(struct c6502 *c)
{
}

static void op_rol(struct c6502 *c)
{
}

static void op_ror(struct c6502 *c)
{
}

static void op_rti(struct c6502 *c)
{
}

static void op_rts(struct c6502 *c)
{
}

static void op_sbc(struct c6502 *c)
{
}

static void op_sec(struct c6502 *c)
{
	c->p |= STATUS_C;
}

static void op_sed(struct c6502 *c)
{
	c->p |= STATUS_D;
}

static void op_sei(struct c6502 *c)
{
	c->p |= STATUS_I;
}

static void op_smb(struct c6502 *c)
{
}

static void op_sta(struct c6502 *c)
{
}

static void op_stp(struct c6502 *c)
{
}

static void op_stx(struct c6502 *c)
{
}

static void op_sty(struct c6502 *c)
{
}

static void op_stz(struct c6502 *c)
{
}

static void op_tax(struct c6502 *c)
{
	c->x = c->a;
}

static void op_tay(struct c6502 *c)
{
	c->y = c->a;
}

static void op_trb(struct c6502 *c)
{
}

static void op_tsb(struct c6502 *c)
{
}

static void op_tsx(struct c6502 *c)
{
	c->x = c->s;
}

static void op_txa(struct c6502 *c)
{
	c->a = c->x;
}

static void op_txs(struct c6502 *c)
{
	c->s = c->x;
}

static void op_tya(struct c6502 *c)
{
	c->a = c->y;
}

static void op_wai(struct c6502 *c)
{
}

void c6502_reset(struct c6502 *c)
{
	c->p |= STATUS_D | STATUS_I;
	c->pc = U16_FROM_HL(c->mem[VEC_RESB_H], c->mem[VEC_RESB_L]);
}

int main(void)
{
}
