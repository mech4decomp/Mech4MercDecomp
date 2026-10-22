/*
 * FUN_10041755 (42 B) - __cdecl.
 * Calls FUN_10040c8e(arg), FUN_1004177f(arg,arg), FUN_10040ce0(arg);
 * returns the low 16 bits of the last result.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10040c8e(void);   /* rel32 call */
extern void __cdecl FUN_1004177f(void);   /* rel32 call */
extern void __cdecl FUN_10040ce0(void);   /* rel32 call */

__declspec(naked) void __cdecl FUN_10041755(void)
{
    __asm {
        push    esi
        push    dword ptr [esp + 0xc]
        call    FUN_10040c8e
        push    dword ptr [esp + 0x10]
        push    dword ptr [esp + 0x10]
        call    FUN_1004177f
        push    dword ptr [esp + 0x18]
        mov     esi, eax
        call    FUN_10040ce0
        add     esp, 0x10
        mov     ax, si
        pop     esi
        ret
    }
}
