/* FUN_10008be0 - __thiscall, ECX=this, param_1=[esp+4], param_2=[esp+8]
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10008be0 (59 B, __thiscall, ECX = this, 2 stack params, RET 0x8).
 * Validates the object via three chained checks (FUN_10007ed0(this,p1),
 * FUN_10007f40(this), FUN_10008b90(this,p2)); returns 1 only if all three
 * succeed, else 0.
 * CFLAGS: /O2
 */

extern void __cdecl FUN_10007ed0(void);
extern void __cdecl FUN_10007f40(void);
extern void __cdecl FUN_10008b90(void);

void __declspec(naked) FUN_10008be0(void)
{
    __asm {
        mov  eax, dword ptr [esp + 0x4]
        push esi
        mov  esi, ecx
        push eax
        call FUN_10007ed0
        test al, al
        jz   L_c15
        mov  ecx, esi
        call FUN_10007f40
        test al, al
        jz   L_c15
        mov  ecx, dword ptr [esp + 0xc]
        push ecx
        mov  ecx, esi
        call FUN_10008b90
        test al, al
        jz   L_c15
        mov  eax, 0x1
        pop  esi
        ret  0x8
L_c15:
        xor  eax, eax
        pop  esi
        ret  0x8
    }
}
