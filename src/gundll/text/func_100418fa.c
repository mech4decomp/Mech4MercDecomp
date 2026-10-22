/*
 * FUN_100418FA (43 B) - __cdecl.
 * Calls FUN_10042c7e, reads a pointer from [eax], fninit, calls
 * FUN_1003b016; if the object's flags at +0x00 have 0x10008 set, clears
 * +0x20 and sets +0x24 to 0xffff.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10042c7e(void);   /* rel32 call */
extern void __cdecl FUN_1003b016(void);   /* rel32 call */

__declspec(naked) void __cdecl FUN_100418FA(void)
{
    __asm {
        push    esi
        call    FUN_10042c7e
        mov     esi, dword ptr [eax]
        fninit
        call    FUN_1003b016
        test    esi, esi
        je      L_23
        mov     eax, dword ptr [esi + 4]
        test    dword ptr [eax], 0x10008
        je      L_23
        and     dword ptr [eax + 0x20], 0
        mov     dword ptr [eax + 0x24], 0xffff
    L_23:
        pop     esi
        ret
    }
}
