/* FUN_10006ef0 - __fastcall, ECX=param_1
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10006ef0 (46 B, __fastcall, ECX = this, RET 0x4) - Tokenizer-style
 * advance. Reads the current pointer at this+0x8; if the 16-bit value it
 * points at is 0xa, bumps this->f0 and sets this->f4 = 1; otherwise bumps
 * this->f4. Either way advances this->f8 by 2 and RETURNS the original
 * pointer (kept in EAX; the advance is computed in EDX).
 * CFLAGS: /O2
 */

void __declspec(naked) FUN_10006ef0(void)
{
    __asm {
        mov  eax, dword ptr [ecx + 0x8]
        cmp  word ptr [eax], 0xa
        jnz  L_0e
        mov  edx, dword ptr [ecx]
        mov  dword ptr [ecx + 0x4], 0x1
        inc  edx
        mov  dword ptr [ecx], edx
        lea  edx, [eax + 0x2]
        mov  dword ptr [ecx + 0x8], edx
        ret  0x4
L_0e:
        mov  edx, dword ptr [ecx + 0x4]
        inc  edx
        mov  dword ptr [ecx + 0x4], edx
        lea  edx, [eax + 0x2]
        mov  dword ptr [ecx + 0x8], edx
        ret  0x4
    }
}
