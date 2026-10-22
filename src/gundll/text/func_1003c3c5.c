/*
 * FUN_1003c3c5 (18 B) - __cdecl. Pushes g_10075728 and arg[0], calls
 * FUN_1003c3d7. (Transcribed from reference bytes; gaptext.)
 *
 * NOTE: this candidate (62 B) spans two functions; the second entry
 * FUN_1003c3d7 (44 B) is transcribed separately.
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10075728;   /* DAT_10075728 */
extern void __cdecl FUN_1003c3d7(void);   /* rel32 call */

__declspec(naked) void __cdecl FUN_1003c3c5(void)
{
    __asm {
        push    dword ptr [g_10075728]
        push    dword ptr [esp + 0x8]
        call    FUN_1003c3d7
        pop     ecx
        pop     ecx
        ret
    }
}
