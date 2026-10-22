/*
 * FUN_1004516D (33 B) - __cdecl.  Lock-guarded call:
 * FUN_10039b19(0xb); r = FUN_1004518e(arg1); FUN_10039b7a(0xb);
 * return r.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10039b19(void);
extern void __cdecl FUN_1004518e(void);
extern void __cdecl FUN_10039b7a(void);

__declspec(naked) void FUN_1004516D(void)
{
    __asm {
        push    esi
        push    0xb
        call    FUN_10039b19
        push    dword ptr [esp + 0xc]
        call    FUN_1004518e
        push    0xb
        mov     esi, eax
        call    FUN_10039b7a
        add     esp, 0xc
        mov     eax, esi
        pop     esi
        ret
    }
}
