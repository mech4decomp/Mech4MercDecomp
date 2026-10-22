/*
 * FUN_10045C95 (33 B) - __cdecl.  Lock-guarded call:
 * FUN_10039b19(0xc); r = FUN_10045cb6(arg1); FUN_10039b7a(0xc);
 * return r.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10039b19(void);
extern void __cdecl FUN_10045cb6(void);
extern void __cdecl FUN_10039b7a(void);

__declspec(naked) void FUN_10045C95(void)
{
    __asm {
        push    esi
        push    0xc
        call    FUN_10039b19
        push    dword ptr [esp + 0xc]
        call    FUN_10045cb6
        push    0xc
        mov     esi, eax
        call    FUN_10039b7a
        add     esp, 0xc
        mov     eax, esi
        pop     esi
        ret
    }
}
