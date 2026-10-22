/*
 * FUN_10017cb0 (30 B) - __thiscall ctor. Calls FUN_1001c870(this,0x5210,
 * param_1), then sets vtable ptr to 0x10049a04.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001c870(void);   /* rel32 call */

__declspec(naked) void FUN_10017cb0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x5210
        mov     esi, ecx
        call    FUN_1001c870
        mov     dword ptr [esi], 0x10049a04
        mov     eax, esi
        pop     esi
        ret     4
    }
}
