/*
 * FUN_005cbc00 (18 B) — Copy *param to *this, then clear bit 0 of
 * *param.
 *
 * __thiscall (ECX = this), RET 4 (one param at ESP+0x4).
 *   *this = *param; *param &= ~1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005cbc00(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        and     edx, 0xfffffffe
        mov     dword ptr [ecx], edx
        ret     0x4
    }
}
