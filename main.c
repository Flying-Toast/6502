#include <stdint.h>
#include <stddef.h>

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

// 0xFFxx = todo
#define OPCODE_ADC (0xFF00)
#define OPCODE_AND (0xFF01)
#define OPCODE_ASL (0xFF02)
#define OPCODE_BBR (0xFF03)
#define OPCODE_BBS (0xFF04)
#define OPCODE_BCC (0xFF05)
#define OPCODE_BCS (0xFF06)
#define OPCODE_BEQ (0xFF07)
#define OPCODE_BIT (0xFF08)
#define OPCODE_BMI (0xFF09)
#define OPCODE_BNE (0xFF0A)
#define OPCODE_BPL (0xFF0B)
#define OPCODE_BRA (0xFF0C)
#define OPCODE_BRK (0xFF0D)
#define OPCODE_BVC (0xFF0E)
#define OPCODE_BVS (0xFF0F)
#define OPCODE_CLC (0x18)
#define OPCODE_CLD (0xD8)
#define OPCODE_CLI (0x58)
#define OPCODE_CLV (0xB8)
#define OPCODE_CMP (0xFF10)
#define OPCODE_CPX (0xFF11)
#define OPCODE_CPY (0xFF12)
#define OPCODE_DEC (0xFF13)
#define OPCODE_DEX (0xCA)
#define OPCODE_DEY (0x88)
#define OPCODE_EOR (0xFF14)
#define OPCODE_INC (0xFF15)
#define OPCODE_INX (0xE8)
#define OPCODE_INY (0xC8)
#define OPCODE_JMP (0xFF16)
#define OPCODE_JSR (0xFF17)
#define OPCODE_LDA (0xFF18)
#define OPCODE_LDX (0xFF19)
#define OPCODE_LDY (0xFF1A)
#define OPCODE_LSR (0xFF1B)
#define OPCODE_NOP (0xEA)
#define OPCODE_ORA (0xFF1C)
#define OPCODE_PHA (0xFF1D)
#define OPCODE_PHP (0xFF1E)
#define OPCODE_PHX (0xFF1F)
#define OPCODE_PHY (0xFF20)
#define OPCODE_PLA (0xFF21)
#define OPCODE_PLP (0xFF22)
#define OPCODE_PLX (0xFF23)
#define OPCODE_PLY (0xFF24)
#define OPCODE_RMB (0xFF25)
#define OPCODE_ROL (0xFF26)
#define OPCODE_ROR (0xFF27)
#define OPCODE_RTI (0xFF28)
#define OPCODE_RTS (0xFF29)
#define OPCODE_SBC (0xFF2A)
#define OPCODE_SEC (0x38)
#define OPCODE_SED (0xF8)
#define OPCODE_SEI (0x78)
#define OPCODE_SMB (0xFF2B)
#define OPCODE_STA (0xFF2C)
#define OPCODE_STP (0xFF2D)
#define OPCODE_STX (0xFF2E)
#define OPCODE_STY (0xFF2F)
#define OPCODE_STZ (0xFF30)
#define OPCODE_TAX (0xAA)
#define OPCODE_TAY (0xA8)
#define OPCODE_TRB (0xFF31)
#define OPCODE_TSB (0xFF32)
#define OPCODE_TSX (0xBA)
#define OPCODE_TXA (0x8A)
#define OPCODE_TXS (0x9A)
#define OPCODE_TYA (0x98)
#define OPCODE_WAI (0xFF33)

static char *estrings[] = {
	NULL,
#define EBADOP (1)
	"Unknown opcode\n",
};

char *err_to_str(int err)
{
	return estrings[-err];
}

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

int c6502_tick(struct c6502 *c)
{
	uint8_t opcode = c->mem[c->pc++];
	// TODO: use array of fn ptr instead of switch
	switch (opcode) {
	case OPCODE_ADC:
		op_adc(c);
		break;
	case OPCODE_AND:
		op_and(c);
		break;
	case OPCODE_ASL:
		op_asl(c);
		break;
	case OPCODE_BBR:
		op_bbr(c);
		break;
	case OPCODE_BBS:
		op_bbs(c);
		break;
	case OPCODE_BCC:
		op_bcc(c);
		break;
	case OPCODE_BCS:
		op_bcs(c);
		break;
	case OPCODE_BEQ:
		op_beq(c);
		break;
	case OPCODE_BIT:
		op_bit(c);
		break;
	case OPCODE_BMI:
		op_bmi(c);
		break;
	case OPCODE_BNE:
		op_bne(c);
		break;
	case OPCODE_BPL:
		op_bpl(c);
		break;
	case OPCODE_BRA:
		op_bra(c);
		break;
	case OPCODE_BRK:
		op_brk(c);
		break;
	case OPCODE_BVC:
		op_bvc(c);
		break;
	case OPCODE_BVS:
		op_bvs(c);
		break;
	case OPCODE_CLC:
		op_clc(c);
		break;
	case OPCODE_CLD:
		op_cld(c);
		break;
	case OPCODE_CLI:
		op_cli(c);
		break;
	case OPCODE_CLV:
		op_clv(c);
		break;
	case OPCODE_CMP:
		op_cmp(c);
		break;
	case OPCODE_CPX:
		op_cpx(c);
		break;
	case OPCODE_CPY:
		op_cpy(c);
		break;
	case OPCODE_DEC:
		op_dec(c);
		break;
	case OPCODE_DEX:
		op_dex(c);
		break;
	case OPCODE_DEY:
		op_dey(c);
		break;
	case OPCODE_EOR:
		op_eor(c);
		break;
	case OPCODE_INC:
		op_inc(c);
		break;
	case OPCODE_INX:
		op_inx(c);
		break;
	case OPCODE_INY:
		op_iny(c);
		break;
	case OPCODE_JMP:
		op_jmp(c);
		break;
	case OPCODE_JSR:
		op_jsr(c);
		break;
	case OPCODE_LDA:
		op_lda(c);
		break;
	case OPCODE_LDX:
		op_ldx(c);
		break;
	case OPCODE_LDY:
		op_ldy(c);
		break;
	case OPCODE_LSR:
		op_lsr(c);
		break;
	case OPCODE_NOP:
		op_nop(c);
		break;
	case OPCODE_ORA:
		op_ora(c);
		break;
	case OPCODE_PHA:
		op_pha(c);
		break;
	case OPCODE_PHP:
		op_php(c);
		break;
	case OPCODE_PHX:
		op_phx(c);
		break;
	case OPCODE_PHY:
		op_phy(c);
		break;
	case OPCODE_PLA:
		op_pla(c);
		break;
	case OPCODE_PLP:
		op_plp(c);
		break;
	case OPCODE_PLX:
		op_plx(c);
		break;
	case OPCODE_PLY:
		op_ply(c);
		break;
	case OPCODE_RMB:
		op_rmb(c);
		break;
	case OPCODE_ROL:
		op_rol(c);
		break;
	case OPCODE_ROR:
		op_ror(c);
		break;
	case OPCODE_RTI:
		op_rti(c);
		break;
	case OPCODE_RTS:
		op_rts(c);
		break;
	case OPCODE_SBC:
		op_sbc(c);
		break;
	case OPCODE_SEC:
		op_sec(c);
		break;
	case OPCODE_SED:
		op_sed(c);
		break;
	case OPCODE_SEI:
		op_sei(c);
		break;
	case OPCODE_SMB:
		op_smb(c);
		break;
	case OPCODE_STA:
		op_sta(c);
		break;
	case OPCODE_STP:
		op_stp(c);
		break;
	case OPCODE_STX:
		op_stx(c);
		break;
	case OPCODE_STY:
		op_sty(c);
		break;
	case OPCODE_STZ:
		op_stz(c);
		break;
	case OPCODE_TAX:
		op_tax(c);
		break;
	case OPCODE_TAY:
		op_tay(c);
		break;
	case OPCODE_TRB:
		op_trb(c);
		break;
	case OPCODE_TSB:
		op_tsb(c);
		break;
	case OPCODE_TSX:
		op_tsx(c);
		break;
	case OPCODE_TXA:
		op_txa(c);
		break;
	case OPCODE_TXS:
		op_txs(c);
		break;
	case OPCODE_TYA:
		op_tya(c);
		break;
	case OPCODE_WAI:
		op_wai(c);
		break;
	default:
		return -EBADOP;
	}

	return 0;
}

int main(void)
{
}
