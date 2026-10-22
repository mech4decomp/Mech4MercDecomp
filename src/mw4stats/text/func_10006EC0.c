/* FUN_10006ec0 - __fastcall, ECX=param_1
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10006ec0 (44 B, __fastcall, ECX = this) - Word-boundary skip helper.
 * Reads the WORD at this->f8; if it equals 0xa, increments this->f0 and sets
 * this->f4 = 1; otherwise increments this->f4. Advances this->f8 by one word.
 * Returns `this` (the caller FUN_10007F00 reads [eax+8] after the call).
 * CFLAGS: /O2
 */

void __declspec(naked) FUN_10006ec0(void)
{
    __asm {
        mov  eax, ecx
        mov  ecx, dword ptr [eax + 0x8]
        cmp  word ptr [ecx], 0xa
        jnz  L_de
        mov  edx, dword ptr [eax]
        mov  dword ptr [eax + 0x4], 0x1
        inc  edx
        add  ecx, 0x2
        mov  dword ptr [eax], edx
        mov  dword ptr [eax + 0x8], ecx
        ret
L_de:
        mov  edx, dword ptr [eax + 0x4]
        add  ecx, 0x2
        inc  edx
        mov  dword ptr [eax + 0x8], ecx
        mov  dword ptr [eax + 0x4], edx
        ret
    }
}
