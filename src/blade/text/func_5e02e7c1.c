/*
 * FUN_5e02e7c1 (318 B) - SEH exception filter. Looks up a handler via
 * FUN_5e02e8ff, dispatches on handler type, maps NTSTATUS codes to
 * exception codes, and calls the handler. Falls back to
 * UnhandledExceptionFilter.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_5e02bdd2(void);
extern void *__cdecl FUN_5e02e8ff(int, int);
extern int g_5e039478;   /* DAT_5e039478 */
extern int g_5e03947c;   /* DAT_5e03947c */
extern int *g_5e0350b4;  /* IAT: UnhandledExceptionFilter */

__declspec(naked) void FUN_5e02e7c1(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    ebx
        push    esi
        call    FUN_5e02bdd2
        mov     esi, eax
        push    dword ptr [esi+0x50]
        push    dword ptr [ebp+8]
        call    FUN_5e02e8ff
        pop     ecx
        test    eax, eax
        pop     ecx
        jz      L8f2
        mov     ebx, dword ptr [eax+8]
        test    ebx, ebx
        mov     dword ptr [ebp+8], ebx
        jz      L8f2
        cmp     ebx, 5
        jnz     L802
        and     dword ptr [eax+8], 0
        push    1
        pop     eax
        jmp     L8fb
    L802:
        cmp     ebx, 1
        jz      L8ed
        mov     ecx, dword ptr [esi+0x54]
        mov     dword ptr [ebp-4], ecx
        mov     ecx, dword ptr [ebp+0xc]
        mov     dword ptr [esi+0x54], ecx
        mov     ecx, dword ptr [eax+4]
        cmp     ecx, 8
        jnz     L8df
        mov     edx, dword ptr [g_5e039478]
        mov     ecx, dword ptr [g_5e03947c]
        add     ecx, edx
        push    edi
        cmp     edx, ecx
        jge     L85d
    L836:
        lea     ecx, [edx+edx*2]
        shl     ecx, 2
        mov     edi, dword ptr [esi+0x50]
        add     ecx, 0xc
        and     dword ptr [ecx+edi-4], 0
        mov     edi, dword ptr [g_5e039478]
        mov     ebx, dword ptr [g_5e03947c]
        inc     edx
        add     ebx, edi
        cmp     edx, ebx
        __emit 0x7C /* jl L836: MSVC6 miscomputes backward rel-offset (off-by-6) due to reloc'd movs between branch and target */
        __emit 0xE2
        mov     ebx, dword ptr [ebp+8]
    L85d:
        mov     eax, dword ptr [eax]
        mov     edi, dword ptr [esi+0x58]
        cmp     eax, 0xc000008e
        jnz     L872
        mov     dword ptr [esi+0x58], 0x83
        jmp     L8d0
    L872:
        cmp     eax, 0xc0000090
        jnz     L882
        mov     dword ptr [esi+0x58], 0x81
        jmp     L8d0
    L882:
        cmp     eax, 0xc0000091
        jnz     L892
        mov     dword ptr [esi+0x58], 0x84
        jmp     L8d0
    L892:
        cmp     eax, 0xc0000093
        jnz     L8a2
        mov     dword ptr [esi+0x58], 0x85
        jmp     L8d0
    L8a2:
        cmp     eax, 0xc000008d
        jnz     L8b2
        mov     dword ptr [esi+0x58], 0x82
        jmp     L8d0
    L8b2:
        cmp     eax, 0xc000008f
        jnz     L8c2
        mov     dword ptr [esi+0x58], 0x86
        jmp     L8d0
    L8c2:
        cmp     eax, 0xc0000092
        jnz     L8d0
        mov     dword ptr [esi+0x58], 0x8a
    L8d0:
        push    dword ptr [esi+0x58]
        push    8
        call    ebx
        pop     ecx
        mov     dword ptr [esi+0x58], edi
        pop     ecx
        pop     edi
        jmp     L8e7
    L8df:
        and     dword ptr [eax+8], 0
        push    ecx
        call    ebx
        pop     ecx
    L8e7:
        mov     eax, dword ptr [ebp-4]
        mov     dword ptr [esi+0x54], eax
    L8ed:
        or      eax, 0xffffffff
        jmp     L8fb
    L8f2:
        push    dword ptr [ebp+0xc]
        call    dword ptr [g_5e0350b4]
    L8fb:
        pop     esi
        pop     ebx
        leave
        ret
    }
}
