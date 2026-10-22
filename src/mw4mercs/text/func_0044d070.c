/*
 * FUN_0044D070 (33 B) — Constructor.
 *
 * Calls FUN_00450B10 (sub-constructor), zeroes fields at +0x70/+0x74,
 * sets vtable to 0x76E974.
 *
 * __thiscall, RET 4 (one stack param).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00450B10(void);

__declspec(naked) void __fastcall FUN_0044d070(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00450B10
        xor     eax, eax
        mov     dword ptr [esi + 0x70], eax
        mov     dword ptr [esi + 0x74], eax
        mov     dword ptr [esi], 0x0076E974
        mov     eax, esi
        pop     esi
        ret     4
    }
}
