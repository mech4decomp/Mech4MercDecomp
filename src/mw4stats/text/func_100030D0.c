/*
 * FUN_100030d0 (18 B) - __fastcall. Calls a sub-ctor then installs a
 * vtable pointer at [this] and returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10003780(void);

__declspec(naked) void __cdecl FUN_100030d0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10003780
        mov     dword ptr [esi], 0x100211e8
        mov     eax, esi
        pop     esi
        ret
    }
}
