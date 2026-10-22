/*
 * FUN_10005e00 (30 B) - __thiscall. Calls FUN_10005db0 with a fixed vtable
 * pointer, then FUN_10003250.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10005db0(void);
extern void __cdecl FUN_10003250(void);

__declspec(naked) void __cdecl FUN_10005e00(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        push    eax
        mov     ecx, 0x10027528
        call    FUN_10005db0
        push    eax
        mov     ecx, esi
        call    FUN_10003250
        pop     esi
        ret     0x4
    }
}
