/*
 * FUN_10005e80 (30 B) - __thiscall. Calls FUN_10005db0 with a fixed vtable
 * pointer, then FUN_10005e40.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10005db0(void);
extern void __cdecl FUN_10005e40(void);

__declspec(naked) void __cdecl FUN_10005e80(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        push    eax
        mov     ecx, 0x10027520
        call    FUN_10005db0
        push    eax
        mov     ecx, esi
        call    FUN_10005e40
        pop     esi
        ret     0x4
    }
}
