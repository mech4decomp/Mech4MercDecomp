/*
 * FUN_1003c3d7 (44 B) - __cdecl. Retry loop: calls FUN_1003c403, and if it
 * fails (and arg1 differs) retries via FUN_100426ef; returns 0 on failure.
 * (Transcribed from reference bytes; gaptext; second entry of the
 * 0x1003c3c5 candidate.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003c403(void);   /* rel32 call */
extern void __cdecl FUN_100426ef(void);   /* rel32 call */

__declspec(naked) void __cdecl FUN_1003c3d7(void)
{
    __asm {
        cmp     dword ptr [esp + 0x4], -0x20
        ja      L_400
L_3de:
        push    dword ptr [esp + 0x4]
        call    FUN_1003c403
        test    eax, eax
        pop     ecx
        jne     L_402
        cmp     dword ptr [esp + 0x8], eax
        je      L_402
        push    dword ptr [esp + 0x4]
        call    FUN_100426ef
        test    eax, eax
        pop     ecx
        jne     L_3de
L_400:
        xor     eax, eax
L_402:
        ret
    }
}
