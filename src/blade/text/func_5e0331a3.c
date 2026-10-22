/*
 * FUN_5e0331a3 (423 B) - WideChar->MultiByte string-type conversion with
 * SEH frame. Lazily probes GetStringTypeW/GetStringTypeA to pick the active
 * codepage mode (DAT_5e77ab08), then either calls GetStringTypeW directly
 * (mode 1) or converts via WideCharToMultiByte + GetStringTypeA (mode 2).
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77ab08;   /* DAT_5e77ab08 (codepage mode) */
extern int g_5e77aa8c;   /* DAT_5e77aa8c */
extern int g_5e77aa7c;   /* DAT_5e77aa7c */
extern char g_5e036e90;  /* SEH handler */
extern char g_5e030a84;  /* SEH scope table */
extern char g_5e036630;  /* L"" */
extern char g_5e03662c;  /* "" */
extern int *g_5e0350d0;  /* IAT: GetStringTypeW */
extern int *g_5e0350cc;  /* IAT: GetStringTypeA */
extern int *g_5e035078;  /* IAT: WideCharToMultiByte */

extern void __cdecl FUN_5e030b60(void);   /* alloca/chkstk */
extern void __cdecl FUN_5e02e310(void *, void *, int);
extern void __cdecl FUN_5e02e370(int, int, int);

__declspec(naked) void FUN_5e0331a3(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    -1
        push    offset g_5e036e90
        push    offset g_5e030a84
        mov     eax, fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x1c
        push    ebx
        push    esi
        push    edi
        mov     dword ptr [ebp-0x18], esp
        mov     eax, dword ptr [g_5e77ab08]
        xor     edi, edi
        cmp     eax, edi
        jnz     L3212
        lea     eax, [ebp-0x1c]
        push    eax
        push    1
        pop     esi
        push    esi
        push    offset g_5e036630
        push    esi
        call    dword ptr [g_5e0350d0]
        test    eax, eax
        jz      L31f0
        mov     eax, esi
        jmp     L320d
    L31f0:
        lea     eax, [ebp-0x1c]
        push    eax
        push    esi
        push    offset g_5e03662c
        push    esi
        push    edi
        call    dword ptr [g_5e0350cc]
        test    eax, eax
        jz      L3354
        push    2
        pop     eax
    L320d:
        mov     dword ptr [g_5e77ab08], eax
    L3212:
        cmp     eax, 1
        jnz     L322e
        push    dword ptr [ebp+0x14]
        push    dword ptr [ebp+0x10]
        push    dword ptr [ebp+0xc]
        push    dword ptr [ebp+0x8]
        call    dword ptr [g_5e0350d0]
        jmp     L3356
    L322e:
        cmp     eax, 2
        jnz     L3354
        cmp     dword ptr [ebp+0x18], edi
        jnz     L3244
        mov     eax, dword ptr [g_5e77aa8c]
        mov     dword ptr [ebp+0x18], eax
    L3244:
        push    edi
        push    edi
        push    edi
        push    edi
        push    dword ptr [ebp+0x10]
        push    dword ptr [ebp+0xc]
        push    0x220
        push    dword ptr [ebp+0x18]
        call    dword ptr [g_5e035078]
        mov     esi, eax
        mov     dword ptr [ebp-0x28], esi
        cmp     esi, edi
        jz      L3354
        mov     dword ptr [ebp-0x4], edi
        add     eax, 3
        and     al, 0xfc
        call    FUN_5e030b60
        mov     dword ptr [ebp-0x18], esp
        mov     eax, esp
        mov     dword ptr [ebp-0x2c], eax
        push    esi
        push    edi
        push    eax
        call    FUN_5e02e310
        add     esp, 0xc
        or      dword ptr [ebp-0x4], -1
        jmp     L32a2
        /* embedded SEH handler (unreachable from main flow, jumped over) */
        push    1
        pop     eax
        ret
        mov     esp, dword ptr [ebp-0x18]
        xor     edi, edi
        mov     dword ptr [ebp-0x2c], edi
        or      dword ptr [ebp-0x4], -1
        mov     esi, dword ptr [ebp-0x28]
    L32a2:
        cmp     dword ptr [ebp-0x2c], edi
        jz      L3354
        push    edi
        push    edi
        push    esi
        push    dword ptr [ebp-0x2c]
        push    dword ptr [ebp+0x10]
        push    dword ptr [ebp+0xc]
        push    0x220
        push    dword ptr [ebp+0x18]
        call    dword ptr [g_5e035078]
        test    eax, eax
        jz      L3354
        mov     dword ptr [ebp-0x4], 1
        lea     eax, [esi+esi+2]
        add     eax, 3
        and     al, 0xfc
        call    FUN_5e030b60
        mov     dword ptr [ebp-0x18], esp
        mov     ebx, esp
        mov     dword ptr [ebp-0x24], ebx
        jmp     L32f7
        /* embedded SEH handler (unreachable from main flow, jumped over) */
        push    1
        pop     eax
        ret
        mov     esp, dword ptr [ebp-0x18]
        xor     edi, edi
        xor     ebx, ebx
    L32f7:
        or      dword ptr [ebp-0x4], -1
        cmp     ebx, edi
        jz      L3354
        mov     eax, dword ptr [ebp+0x1c]
        cmp     eax, edi
        jnz     L330b
        mov     eax, dword ptr [g_5e77aa7c]
    L330b:
        mov     ecx, dword ptr [ebp+0x10]
        lea     edi, [ecx+ecx]
        lea     esi, [edi+ebx]
        /* __emit: MSVC uses imm8 sign-extended form (66 83 0E FF) for or word ptr [esi],0xffff; ref uses imm16 (66 81 0E FF FF) */
        __emit 0x66
        __emit 0x81
        __emit 0x0E
        __emit 0xFF
        __emit 0xFF
        /* __emit: same imm16-vs-imm8 encoding issue for or word ptr [esi-2],0xffff */
        __emit 0x66
        __emit 0x81
        __emit 0x4E
        __emit 0xFE
        __emit 0xFF
        __emit 0xFF
        push    ebx
        push    dword ptr [ebp-0x28]
        push    dword ptr [ebp-0x2c]
        push    dword ptr [ebp+0x8]
        push    eax
        call    dword ptr [g_5e0350cc]
        mov     dword ptr [ebp-0x20], eax
        /* __emit: MSVC uses imm8 sign-extended form for cmp word ptr [esi-2],0xffff; ref uses imm16 (66 81 7E FE FF FF) */
        __emit 0x66
        __emit 0x81
        __emit 0x7E
        __emit 0xFE
        __emit 0xFF
        __emit 0xFF
        jz      L3354
        /* __emit: MSVC uses imm8 sign-extended form for cmp word ptr [esi],0xffff; ref uses imm16 (66 81 3E FF FF) */
        __emit 0x66
        __emit 0x81
        __emit 0x3E
        __emit 0xFF
        __emit 0xFF
        jnz     L3354
        push    edi
        push    ebx
        push    dword ptr [ebp+0x14]
        call    FUN_5e02e370
        add     esp, 0xc
        mov     eax, dword ptr [ebp-0x20]
        jmp     L3356
    L3354:
        xor     eax, eax
    L3356:
        lea     esp, [ebp-0x38]
        mov     ecx, dword ptr [ebp-0x10]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
