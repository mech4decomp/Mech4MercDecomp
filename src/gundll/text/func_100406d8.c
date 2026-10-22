/*
 * FUN_100406d8 (423 B) — __cdecl.
 * SEH-guarded string-type detection + WideCharToMultiByte/GetStringTypeA
 * conversion dispatcher. Contains 4 embedded SEH handlers (A/B/C/D) that
 * sit between the main code blocks and are skipped by short jumps.
 *
 * CFLAGS: /O1
 */

extern int g_1007571c;
extern int g_1007568c;
extern int g_1007567c;
extern int *g_10049164;   /* IAT: GetStringTypeW */
extern int *g_10049160;   /* IAT: GetStringTypeA */
extern int *g_100490fc;   /* IAT: WideCharToMultiByte */
extern void __cdecl FUN_10037940(void);
extern void __cdecl FUN_10040680(void);
extern void __cdecl FUN_1003ec80(void);

__declspec(naked) void FUN_100406d8(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    -1
        push    0x1004bec0
        push    0x1003eb9c
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x1c
        push    ebx
        push    esi
        push    edi
        mov     dword ptr [ebp - 0x18], esp
        mov     eax, dword ptr [g_1007571c]
        xor     edi, edi
        cmp     eax, edi
        jnz     L_10040747
        lea     eax, [ebp - 0x1c]
        push    eax
        push    0x1
        pop     esi
        push    esi
        push    0x1004b71c
        push    esi
        call    dword ptr [g_10049164]
        test    eax, eax
        jz      L_10040725
        mov     eax, esi
        jmp     L_10040742
    L_10040725:
        lea     eax, [ebp - 0x1c]
        push    eax
        push    esi
        push    0x1004b718
        push    esi
        push    edi
        call    dword ptr [g_10049160]
        test    eax, eax
        jz      L_10040889
        push    0x2
        pop     eax
    L_10040742:
        mov     dword ptr [g_1007571c], eax
    L_10040747:
        cmp     eax, 0x1
        jnz     L_10040763
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x8]
        call    dword ptr [g_10049164]
        jmp     L_1004088b
    L_10040763:
        cmp     eax, 0x2
        jnz     L_10040889
        cmp     dword ptr [ebp + 0x18], edi
        jnz     L_10040779
        mov     eax, dword ptr [g_1007568c]
        mov     dword ptr [ebp + 0x18], eax
    L_10040779:
        push    edi
        push    edi
        push    edi
        push    edi
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        push    0x220
        push    dword ptr [ebp + 0x18]
        call    dword ptr [g_100490fc]
        mov     esi, eax
        mov     dword ptr [ebp - 0x28], esi
        cmp     esi, edi
        jz      L_10040889
        mov     dword ptr [ebp - 0x4], edi
        add     eax, 0x3
        and     al, 0xfc
        call    FUN_10037940
        mov     dword ptr [ebp - 0x18], esp
        mov     eax, esp
        mov     dword ptr [ebp - 0x2c], eax
        push    esi
        push    edi
        push    eax
        call    FUN_10040680
        add     esp, 0xc
        or      dword ptr [ebp - 0x4], 0xffffffff
        jmp     L_100407d7
        /* SEH handler A */
        push    0x1
        pop     eax
        ret
        /* SEH handler B */
        mov     esp, dword ptr [ebp - 0x18]
        xor     edi, edi
        mov     dword ptr [ebp - 0x2c], edi
        or      dword ptr [ebp - 0x4], 0xffffffff
        mov     esi, dword ptr [ebp - 0x28]
    L_100407d7:
        cmp     dword ptr [ebp - 0x2c], edi
        jz      L_10040889
        push    edi
        push    edi
        push    esi
        push    dword ptr [ebp - 0x2c]
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        push    0x220
        push    dword ptr [ebp + 0x18]
        call    dword ptr [g_100490fc]
        test    eax, eax
        jz      L_10040889
        mov     dword ptr [ebp - 0x4], 0x1
        lea     eax, [esi + esi + 0x2]
        add     eax, 0x3
        and     al, 0xfc
        call    FUN_10037940
        mov     dword ptr [ebp - 0x18], esp
        mov     ebx, esp
        mov     dword ptr [ebp - 0x24], ebx
        jmp     L_1004082c
        /* SEH handler C */
        push    0x1
        pop     eax
        ret
        /* SEH handler D */
        mov     esp, dword ptr [ebp - 0x18]
        xor     edi, edi
        xor     ebx, ebx
    L_1004082c:
        or      dword ptr [ebp - 0x4], 0xffffffff
        cmp     ebx, edi
        jz      L_10040889
        mov     eax, dword ptr [ebp + 0x1c]
        cmp     eax, edi
        jnz     L_10040840
        mov     eax, dword ptr [g_1007567c]
    L_10040840:
        mov     ecx, dword ptr [ebp + 0x10]
        lea     edi, [ecx + ecx]
        lea     esi, [edi + ebx]
        __emit 0x66   /* __emit: MSVC6 uses 83 (imm8) for or word ptr [esi],0xffff; ref needs 81 (imm16) */
        __emit 0x81
        __emit 0x0E
        __emit 0xFF
        __emit 0xFF
        __emit 0x66   /* __emit: MSVC6 uses 83 (imm8) for or word ptr [esi-2],0xffff; ref needs 81 (imm16) */
        __emit 0x81
        __emit 0x4E
        __emit 0xFE
        __emit 0xFF
        __emit 0xFF
        push    ebx
        push    dword ptr [ebp - 0x28]
        push    dword ptr [ebp - 0x2c]
        push    dword ptr [ebp + 0x8]
        push    eax
        call    dword ptr [g_10049160]
        mov     dword ptr [ebp - 0x20], eax
        __emit 0x66   /* __emit: MSVC6 uses 83 (imm8) for cmp word ptr [esi-2],0xffff; ref needs 81 (imm16) */
        __emit 0x81
        __emit 0x7E
        __emit 0xFE
        __emit 0xFF
        __emit 0xFF
        jz      L_10040889
        __emit 0x66   /* __emit: MSVC6 uses 83 (imm8) for cmp word ptr [esi],0xffff; ref needs 81 (imm16) */
        __emit 0x81
        __emit 0x3E
        __emit 0xFF
        __emit 0xFF
        jnz     L_10040889
        push    edi
        push    ebx
        push    dword ptr [ebp + 0x14]
        call    FUN_1003ec80
        add     esp, 0xc
        mov     eax, dword ptr [ebp - 0x20]
        jmp     L_1004088b
    L_10040889:
        xor     eax, eax
    L_1004088b:
        lea     esp, [ebp - 0x38]
        mov     ecx, dword ptr [ebp - 0x10]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
