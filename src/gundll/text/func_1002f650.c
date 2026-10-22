/*
 * FUN_1002f650 (99 B) - __stdcall, RET 0x4. Allocates a 0xc-byte object,
 * initializes it, stores it via param_1.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10001d50(void);   /* rel32 call */
extern int g_1004adb4;                    /* vtable ptr, C7 06 imm32 */
extern void *g_10049078;                  /* IAT: GetProcessHeap */

__declspec(naked) void __stdcall FUN_1002f650(void)
{
    __asm {
        push    edi
        mov     edi, dword ptr [esp + 8]
        test    edi, edi
        jnz     L_662
        mov     eax, 0x80070057
        pop     edi
        ret     4
L_662:
        push    esi
        push    0xc
        call    FUN_10001d50
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_69d
        mov     dword ptr [esi + 8], 1
        mov     dword ptr [esi], offset g_1004adb4
        call    dword ptr [g_10049078]
        mov     dword ptr [esi + 4], eax
        xor     eax, eax
        test    esi, esi
        setnz   al
        mov     dword ptr [edi], esi
        pop     esi
        pop     edi
        dec     eax
        and     eax, 0x8007000e
        ret     4
L_69d:
        xor     esi, esi
        xor     eax, eax
        test    esi, esi
        setnz   al
        mov     dword ptr [edi], esi
        pop     esi
        pop     edi
        dec     eax
        and     eax, 0x8007000e
        ret     4
    }
}
