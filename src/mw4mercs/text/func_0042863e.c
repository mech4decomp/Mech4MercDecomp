/*
 * FUN_0042863e (extent 0x42863e-0x4286b3, 119 B) - residual: 2-byte nop +
 * tail of prior function's jump table (5 dwords) + nops + real code.
 */
#pragma warning(disable : 4035 4793)

extern char   g_95004285;
extern void __cdecl FUN_00765f80(void);
extern void __cdecl FUN_004286b9(void);

__declspec(naked) void FUN_0042863e(void)
{
    __asm {
        mov     edi, edi            /* 8B FF 2-byte nop (alignment) */
        /* jump-table dwords (patched absolute addresses) - literal bytes */
        __emit 0x7E  /* -> 0x0042777E */
        __emit 0x77
        __emit 0x42
        __emit 0x00
        __emit 0x4E  /* -> 0x00427B4E */
        __emit 0x7B
        __emit 0x42
        __emit 0x00
        __emit 0x15  /* -> 0x00428515 */
        __emit 0x85
        __emit 0x42
        __emit 0x00
        __emit 0x95  /* -> 0x00428095 */
        __emit 0x80
        __emit 0x42
        __emit 0x00
        __emit 0x35  /* -> 0x00428635 */
        __emit 0x86
        __emit 0x42
        __emit 0x00
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        call    dword ptr [eax + 8]
        test    eax, eax
        jle     L_86b1
        push    ebx
        mov     ebx, dword ptr [esi + 0x5c]
        push    ebp
        push    edi
        mov     edi, dword ptr [esi + 0x14]
        mov     esi, dword ptr [esi + 0x48]
        inc     esi
        mov     ebp, eax
L_867b:
        xor     eax, eax
        mov     al, byte ptr [esi + 1]
        lea     ecx, [eax + eax*2]
        xor     eax, eax
        mov     al, byte ptr [esi]
        lea     edx, [edi + ecx*4]
        push    edx
        lea     eax, [eax + eax*2]
        lea     ecx, [edi + eax*4]
        xor     eax, eax
        mov     al, byte ptr [esi - 1]
        push    ecx
        mov     ecx, ebx
        lea     edx, [eax + eax*2]
        lea     eax, [edi + edx*4]
        push    eax
        call    FUN_00765f80
        add     ebx, 0x10
        add     esi, 3
        dec     ebp
        jne     L_867b
        pop     edi
        pop     ebp
        pop     ebx
L_86b1:
        pop     esi
        ret
    }
}
