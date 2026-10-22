/*
 * FUN_1000bee0 (19 B) - forwards two args to FUN_1000bb60.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1000bb60(void);

__declspec(naked) void __cdecl FUN_1000bee0(void)
{
    __asm {
        mov     eax, dword ptr [esp+8]
        mov     ecx, dword ptr [esp+4]
        push    eax
        push    ecx
        call    FUN_1000bb60
        add     esp, 8
        ret
    }
}
