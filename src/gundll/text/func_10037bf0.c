/*
 * FUN_10037bf0 (208 B) -- __thiscall.
 * Case-insensitive string comparison. If DAT_10075674+8 is 0, does a fast
 * ASCII fold compare; otherwise uses a lock-guarded path with FUN_10037d37
 * per-char conversion and FUN_10039b19/FUN_10039b7a lock helpers.
 *
 * CFLAGS: /O1
 */

extern char g_10075674;
extern int g_10076a8c;
extern int g_10076a88;
extern void __cdecl FUN_10039b19(void);
extern void __cdecl FUN_10037d37(void);
extern void __cdecl FUN_10039b7a(void);

__declspec(naked) void FUN_10037bf0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    edi
        push    esi
        push    ebx
        mov     esi, dword ptr [ebp + 0xc]
        mov     edi, dword ptr [ebp + 0x8]
        lea     eax, [g_10075674]
        cmp     dword ptr [eax + 0x8], 0x0
        jnz     L_43
        mov     al, 0xff
        mov     edi, edi
    L_0c:
        or      al, al
        jz      L_3e
        mov     al, byte ptr [esi]
        inc     esi
        mov     ah, byte ptr [edi]
        inc     edi
        __emit 0x38   /* __emit: MSVC6 swaps cmp ah,al to 3A E0; ref needs 38 C4 */
        __emit 0xC4
        jz      L_0c
        sub     al, 0x41
        cmp     al, 0x1a
        sbb     cl, cl
        and     cl, 0x20
        add     al, cl
        add     al, 0x41
        __emit 0x86   /* __emit: MSVC6 swaps xchg al,ah to 86 C4; ref needs 86 E0 */
        __emit 0xE0
        sub     al, 0x41
        cmp     al, 0x1a
        sbb     cl, cl
        and     cl, 0x20
        add     al, cl
        add     al, 0x41
        __emit 0x38   /* __emit: MSVC6 swaps cmp al,ah to 3A C4; ref needs 38 E0 */
        __emit 0xE0
        jz      L_0c
        sbb     al, al
        sbb     al, 0xff
    L_3e:
        movsx   eax, al
        jmp     L_bb
    L_43:
        lock inc dword ptr [g_10076a8c]
        cmp     dword ptr [g_10076a88], 0x0
        jg      L_57
        push    0x0
        jmp     L_6c
    L_57:
        lock dec dword ptr [g_10076a8c]
        push    0x13
        call    FUN_10039b19
        mov     dword ptr [esp], 0x1
    L_6c:
        mov     eax, 0xff
        xor     ebx, ebx
        nop
    L_74:
        or      al, al
        jz      L_9f
        mov     al, byte ptr [esi]
        inc     esi
        mov     bl, byte ptr [edi]
        inc     edi
        __emit 0x38   /* __emit: MSVC6 swaps cmp al,bl to 3A C3; ref needs 38 D8 */
        __emit 0xD8
        jz      L_74
        push    eax
        push    ebx
        call    FUN_10037d37
        mov     ebx, eax
        add     esp, 0x4
        call    FUN_10037d37
        add     esp, 0x4
        __emit 0x38   /* __emit: MSVC6 swaps cmp bl,al to cmp al,bl (3A D8); ref needs 38 C3 */
        __emit 0xC3
        jz      L_74
        sbb     eax, eax
        sbb     eax, -0x1
    L_9f:
        mov     ebx, eax
        pop     eax
        or      eax, eax
        jnz     L_af
        lock dec dword ptr [g_10076a8c]
        jmp     L_b9
    L_af:
        push    0x13
        call    FUN_10039b7a
        add     esp, 0x4
    L_b9:
        mov     eax, ebx
    L_bb:
        pop     ebx
        pop     esi
        pop     edi
        leave
        ret
    }
}
