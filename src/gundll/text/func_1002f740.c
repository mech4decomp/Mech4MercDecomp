/*
 * FUN_1002F740 (38 B) - __stdcall, RET 0x4.  Calls InterlockedDecrement (IAT
 * 0x100491bc) on this->field at +0x8; if the result is 0, frees via
 * FUN_10001d60.  Returns the decremented value.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void *g_100491bc;   /* IAT: KERNEL32.InterlockedDecrement */
extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __stdcall FUN_1002F740(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        lea     eax, [edi + 8]
        push    eax
        call    dword ptr [g_100491bc]
        mov     esi, eax
        test    esi, esi
        jne     L1
        push    edi
        call    FUN_10001d60
        add     esp, 4
L1:
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
