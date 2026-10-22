/*
 * FUN_005cb200 (14 B) — __thiscall. If *this != 0, calls FUN_004084e0(*this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void __fastcall FUN_005cb200(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      L
        push    eax
        call    FUN_004084e0
        pop     ecx
L:
        ret
    }
}
