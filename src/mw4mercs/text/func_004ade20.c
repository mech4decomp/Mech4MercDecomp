/*
 * FUN_004ADE20 (56 B) — range check: stores param1 and (param2-param1),
 * returns 1 if |((param2-param1)+param1)-param2| <= DAT_007b220c.
 *
 * __thiscall (ECX = this), RET 0x8 (2 stack params: float, float).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float DAT_007b220c;

__declspec(naked) int __fastcall FUN_004ade20(int this, float param1, float param2)
{
    __asm {
        fld     dword ptr [esp + 0x8]
        mov     eax, [esp + 0x4]
        fsub    dword ptr [esp + 0x4]
        mov     [ecx + 0x4], eax
        fst     dword ptr [ecx + 0x8]
        fadd    dword ptr [esp + 0x4]
        fsub    dword ptr [esp + 0x8]
        fabs
        fld     dword ptr [DAT_007b220c]        ; fld dword ptr [0x007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     l_return_0
        mov     eax, 0x1
        ret     0x8
    l_return_0:
        xor     eax, eax
        ret     0x8
    }
}
