/*
 * FUN_00681020 (38 B) — Capacity check.
 *
 * __thiscall (ECX = this, 2 stack params). Returns
 * (param_1[0x14] + this[0x14] + param_2) < (DAT_007b3cc8 * 8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7b3cc8;

__declspec(naked) int __stdcall FUN_00681020(int param1, int param2)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     edx, dword ptr [eax + 0x14]
        mov     eax, dword ptr [ecx + 0x14]
        mov     ecx, dword ptr [esp + 0x8]
        add     edx, eax
        mov     eax, dword ptr [g_7b3cc8]
        add     edx, ecx
        lea     ecx, [eax * 0x8 + 0]
        cmp     edx, ecx
        setl    al
        ret     8
    }
}
