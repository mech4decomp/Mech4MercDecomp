/*
 * FUN_100026de (389 B, __stdcall) — builds the case-mapping tables
 * (0x10008ee1 flags + 0x10008de0 fold table) for the current codepage.
 * Uses GetCPInfo; if it succeeds, calls MultiByteToWideChar-style helpers
 * FUN_10004437 / FUN_100041e8 to build per-byte case tables; otherwise
 * falls back to ASCII A-Z/a-z folding.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (__stdcall *g_GetCPInfo)(unsigned int, void *);

extern void __cdecl FUN_10004437(void);
extern void __cdecl FUN_100041e8(void);

extern int  g_10008db4;
extern int  g_10008fe4;
extern char g_10008ee1;
extern char g_10008de0;

__declspec(naked) void __stdcall FUN_100026de(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x514
        lea     eax, [ebp - 0x14]
        push    esi
        push    eax
        push    dword ptr [g_10008db4]
        call    dword ptr [g_GetCPInfo]
        cmp     eax, 1
        jnz     L_2817
        xor     eax, eax
        mov     esi, 0x100
L_2708:
        mov     byte ptr [ebp + eax - 0x114], al
        inc     eax
        cmp     eax, esi
        jc      L_2708
        mov     al, byte ptr [ebp - 0xe]
        mov     byte ptr [ebp - 0x114], 0x20
        test    al, al
        jz      L_2759
        push    ebx
        push    edi
        lea     edx, [ebp - 0xd]
L_2727:
        movzx   ecx, byte ptr [edx]
        movzx   eax, al
        cmp     eax, ecx
        ja      L_274e
        sub     ecx, eax
        lea     edi, [ebp + eax - 0x114]
        inc     ecx
        mov     eax, 0x20202020
        mov     ebx, ecx
        shr     ecx, 2
        rep stosd
        mov     ecx, ebx
        and     ecx, 3
        rep stosb
L_274e:
        inc     edx
        inc     edx
        mov     al, byte ptr [edx - 1]
        test    al, al
        jnz     L_2727
        pop     edi
        pop     ebx
L_2759:
        push    0
        lea     eax, [ebp - 0x514]
        push    dword ptr [g_10008fe4]
        push    dword ptr [g_10008db4]
        push    eax
        lea     eax, [ebp - 0x114]
        push    esi
        push    eax
        push    1
        call    FUN_10004437
        push    0
        lea     eax, [ebp - 0x214]
        push    dword ptr [g_10008db4]
        push    esi
        push    eax
        lea     eax, [ebp - 0x114]
        push    esi
        push    eax
        push    esi
        push    dword ptr [g_10008fe4]
        call    FUN_100041e8
        push    0
        lea     eax, [ebp - 0x314]
        push    dword ptr [g_10008db4]
        push    esi
        push    eax
        lea     eax, [ebp - 0x114]
        push    esi
        push    eax
        push    0x200
        push    dword ptr [g_10008fe4]
        call    FUN_100041e8
        add     esp, 0x5c
        xor     eax, eax
        lea     ecx, [ebp - 0x514]
L_27d4:
        mov     dx, word ptr [ecx]
        test    dl, 1
        jz      L_27f2
        or      byte ptr [eax + g_10008ee1], 0x10
        mov     dl, byte ptr [ebp + eax - 0x214]
L_27ea:
        mov     byte ptr [eax + g_10008de0], dl
        jmp     L_280e
L_27f2:
        test    dl, 2
        jz      L_2807
        or      byte ptr [eax + g_10008ee1], 0x20
        mov     dl, byte ptr [ebp + eax - 0x314]
        jmp     L_27ea
L_2807:
        and     byte ptr [eax + g_10008de0], 0
L_280e:
        inc     eax
        inc     ecx
        inc     ecx
        cmp     eax, esi
        jc      L_27d4
        jmp     L_2860
L_2817:
        xor     eax, eax
        mov     esi, 0x100
L_281e:
        cmp     eax, 0x41
        jc      L_283c
        cmp     eax, 0x5a
        ja      L_283c
        or      byte ptr [eax + g_10008ee1], 0x10
        mov     cl, al
        add     cl, 0x20
L_2834:
        mov     byte ptr [eax + g_10008de0], cl
        jmp     L_285b
L_283c:
        cmp     eax, 0x61
        jc      L_2854
        cmp     eax, 0x7a
        ja      L_2854
        or      byte ptr [eax + g_10008ee1], 0x20
        mov     cl, al
        sub     cl, 0x20
        jmp     L_2834
L_2854:
        and     byte ptr [eax + g_10008de0], 0
L_285b:
        inc     eax
        cmp     eax, esi
        jc      L_281e
L_2860:
        pop     esi
        leave
        ret
    }
}
