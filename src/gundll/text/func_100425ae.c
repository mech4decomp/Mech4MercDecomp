/*
 * FUN_100425AE (42 B) - __cdecl.  FUN_10040c8e(arg3);
 * r = FUN_100425d8(arg4, arg3); FUN_10040ce0(arg4); return (short)r.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10040c8e(void);
extern void __cdecl FUN_100425d8(void);
extern void __cdecl FUN_10040ce0(void);

__declspec(naked) void FUN_100425AE(void)
{
    __asm {
        push    esi
        push    dword ptr [esp + 0xc]
        call    FUN_10040c8e
        push    dword ptr [esp + 0x10]
        push    dword ptr [esp + 0x10]
        call    FUN_100425d8
        push    dword ptr [esp + 0x18]
        mov     esi, eax
        call    FUN_10040ce0
        add     esp, 0x10
        mov     ax, si
        pop     esi
        ret
    }
}
