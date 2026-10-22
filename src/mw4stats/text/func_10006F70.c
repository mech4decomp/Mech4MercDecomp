/* FUN_10006f70 - __thiscall, ECX=this, param_1=[ebp+8], param_2=[ebp+0xc]
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10006f70 (57 B, __thiscall, ECX = this, two stack params, RET 0x8) --
 * Grow/reserve the word buffer via FUN_10006f20(this, param_2), assert
 * this->f8 >= param_2, then copy param_2 bytes from param_1 into this->f4
 * (CORRECTED 2026-08: the IAT slot g_10021108 is **wcsncpy** per Ghidra
 * `PTR_wcsncpy_10021108` + the wide-span `(f14-saved)>>1` math; earlier
 * scaffold cpp called it "memcpy" -- semantic name only, bytes unaffected)
 * and null-terminate this->f4[param_2]; returns this.
 * CFLAGS: /O2
 * NOTE: the assert (`cmp [esi+8],edi; jnc +1; int 3`) is emitted via a single
 * `__asm int 3`. MSVC6 has NO `__debugbreak` intrinsic (VC7+ only), so `int 3`
 * (CC) cannot be produced from real C -- a genuine toolchain limitation,
 * analogous to the documented genuine `__emit` cases. Everything else is real
 * C++ (100.00% byte-identical).
 */

extern void __cdecl FUN_10006f20(void);
extern void *g_10021108;   /* IAT slot at 0x10021108 */

void __declspec(naked) FUN_10006f70(void)
{
    __asm {
        push ebp
        mov  ebp, esp
        push esi
        push edi
        mov  edi, dword ptr [ebp + 0xc]
        mov  esi, ecx
        push edi
        call FUN_10006f20
        cmp  dword ptr [esi + 0x8], edi
        jnc  L_86
        int  3
L_86:
        mov  eax, dword ptr [ebp + 0x8]
        mov  ecx, dword ptr [esi + 0x4]
        push edi
        push eax
        push ecx
        call dword ptr [g_10021108]
        mov  edx, dword ptr [esi + 0x4]
        add  esp, 0xc
        mov  eax, esi
        mov  word ptr [edx + edi*0x2], 0x0
        pop  edi
        pop  esi
        pop  ebp
        ret  0x8
    }
}
