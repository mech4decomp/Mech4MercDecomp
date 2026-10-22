/*
 * FUN_10006070 (19 B) - __thiscall ctor wrapper: calls FUN_10004110(this,
 * param_1) and returns this.
 *
 * __thiscall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10004110(void);

__declspec(naked) void * __cdecl FUN_10006070(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_10004110
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
