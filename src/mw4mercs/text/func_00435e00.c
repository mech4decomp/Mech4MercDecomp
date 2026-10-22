/*
 * FUN_00435e00 (50 B) — MLR __thiscall constructor. Calls FUN_00455070,
 * initializes a list head at +0xa8 (self-referential), sets vtable 0x76e430.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00455070(void);

__declspec(naked) void FUN_00435e00(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00455070
        lea     eax, [esi+0xa8]
        mov     dword ptr [eax], 0
        mov     dword ptr [esi+0xb0], eax
        mov     dword ptr [eax+4], 0
        mov     dword ptr [esi], 0x76e430
        mov     eax, esi
        pop     esi
        ret     4
    }
}
