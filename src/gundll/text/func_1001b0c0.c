/*
 * FUN_1001B0C0 (80 B) - __stdcall, RET 0x4.  Wide-char string hash: for up
 * to 16 chars, hash = hash*0x11 + FUN_10037e02(wchar).  Returns 0 for
 * null/empty.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10037e02(void);   /* rel32 call */

__declspec(naked) int __stdcall FUN_1001B0C0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        xor     edi, edi
        test    esi, esi
        je      L_b108
        xor     eax, eax
        mov     ax, word ptr [esi]
        xor     ebx, ebx
        test    ax, ax
        je      L_b108
        /* __emit: 7-byte alignment NOP (lea esp,[esp+0]) MSVC6 collapses to 3-byte form */
        __emit 0x8D
        __emit 0xA4
        __emit 0x24
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
    L_b0e0:
        mov     ecx, ebx
        inc     ebx
        cmp     ecx, 0x10
        jge     L_b108
        push    eax
        call    FUN_10037e02
        imul    edi, edi, 0x11
        xor     edx, edx
        mov     dx, ax
        add     esi, 2
        xor     eax, eax
        mov     ax, word ptr [esi]
        add     esp, 4
        add     edi, edx
        test    ax, ax
        jne     L_b0e0
    L_b108:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    }
}
