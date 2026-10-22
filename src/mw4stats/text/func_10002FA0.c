/*
 * FUN_10002fa0 (23 B) - __fastcall. Returns the buffer pointer if the
 * buffer is non-empty, else the empty-string constant.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10002fc0(void);

__declspec(naked) void __cdecl FUN_10002fa0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10002fc0
        test    eax, eax
        jbe     L2fb0
        mov     eax, dword ptr [esi]
        pop     esi
        ret
L2fb0:
        mov     eax, 0x100274ec
        pop     esi
        ret
    }
}
