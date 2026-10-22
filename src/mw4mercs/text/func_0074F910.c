/*
 * FUN_0074F910 (360 B, __stdcall RET 0x1c) - in-.text data block transcription
 * (wave U). Jump-table dispatcher on a mode value (0..5): copies one of
 * several global strings into the 0x8BA094 buffer, then formats a message
 * (FUN_0074E740 + sprintf via IAT) and conditionally appends another string.
 *
 * The dispatch `jmp [eax*4+imm32]` is emitted as __emit (MSVC6 re-bases via
 * EBX). The jump table itself lives at 0x74FA78, just past this 360-byte
 * slice (separate data block).
 *
 * Match: target 100%
 */

#pragma warning(disable : 4035 4793)

extern int *g_0076b4f8;
extern void __cdecl FUN_0074e740(void);

__declspec(naked) void FUN_0074F910(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        sub     esp, 0x80
        dec     eax
        cmp     eax, 5
        push    esi
        push    edi
        ja      L74f9a8
        /* __emit: jmp [eax*4+imm32] dispatch - MSVC6 re-bases via EBX */
        __emit 0xFF
        __emit 0x24
        __emit 0x85
        __emit 0x78
        __emit 0xFA
        __emit 0x74
        __emit 0x00
        /* case 0x74F92D */
        mov     edi, 0x7aca14
        jmp     L74f9ad
        /* case 0x74F934 */
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7aca08
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, 0x8ba094
        rep movsd
        mov     ecx, eax
        jmp     L74f9c8
        /* case 0x74F956 */
        mov     edi, 0x7ac9fc
        jmp     L74f9ad
        /* case 0x74F95D */
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ac9ec
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, 0x8ba094
        rep movsd
        mov     ecx, eax
        jmp     L74f9c8
        /* case 0x74F97F */
        mov     edi, 0x7ac9dc
        jmp     L74f9ad
        /* case 0x74F986 */
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ac9d0
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, 0x8ba094
        rep movsd
        mov     ecx, eax
        jmp     L74f9c8
        /* case 0x74F9A8 (default) */
    L74f9a8:
        mov     edi, 0x7ac9c4
    L74f9ad:
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, 0x8ba094
        rep movsd
        mov     ecx, edx
    L74f9c8:
        mov     eax, dword ptr [esp + 0xa0]
        and     ecx, 3
        rep movsb
        mov     ecx, dword ptr [esp + 0x90]
        push    eax
        push    ecx
        lea     edx, [esp + 0x50]
        push    edx
        call    FUN_0074e740
        push    eax
        mov     eax, dword ptr [esp + 0xa0]
        push    eax
        lea     ecx, [esp + 0x14]
        push    0x7ac9a8
        push    ecx
        call    dword ptr [g_0076b4f8]
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0x14
        lea     edi, [esp + 8]
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba094
        repne scasb
        mov     al, byte ptr [esp + 0xa4]
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        test    al, 1
        rep movsb
        je      L74fa67
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ac99c
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba094
        repne scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
    L74fa67:
        pop     edi
        mov     eax, 0x8ba094
        pop     esi
        add     esp, 0x80
        ret     0x1c
        nop
    }
}
