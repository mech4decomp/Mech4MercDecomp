/*
 * FUN_1004407A (47 B) - __cdecl.  If arg1==0: FUN_1004413c(0), return.
 * Else: FUN_10040c8e(arg1); r = FUN_100440a9(arg1); FUN_10040ce0(arg1);
 * return r.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1004413c(void);
extern void __cdecl FUN_10040c8e(void);
extern void __cdecl FUN_100440a9(void);
extern void __cdecl FUN_10040ce0(void);

__declspec(naked) void FUN_1004407A(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        test    esi, esi
        jne     L_work
        push    esi
        call    FUN_1004413c
        pop     ecx
        pop     esi
        ret
L_work:
        push    edi
        push    esi
        call    FUN_10040c8e
        push    esi
        call    FUN_100440a9
        push    esi
        mov     edi, eax
        call    FUN_10040ce0
        add     esp, 0xc
        mov     eax, edi
        pop     edi
        pop     esi
        ret
    }
}
