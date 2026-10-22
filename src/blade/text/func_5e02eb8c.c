/*
 * FUN_5e02eb8c (389 B) - builds the case-mapping tables. Queries
 * GetCPInfo, fills local buffers, calls FUN_5e02f5b3 / FUN_5e02fd75
 * to build conversion tables, then populates DAT_5e77ad01 /
 * DAT_5e77ac00 with case flags and mapped bytes.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77abe8;      /* DAT_5e77abe8 */
extern int g_5e77ae04;      /* DAT_5e77ae04 */
extern int *g_5e0350b8;     /* IAT: GetCPInfo */
extern unsigned char g_5e77ad01[];  /* DAT_5e77ad01 (byte array) */
extern unsigned char g_5e77ac00[];  /* DAT_5e77ac00 (byte array) */
extern void __cdecl FUN_5e02f5b3(int, void *, int, void *, int, int, int);
extern void __cdecl FUN_5e02fd75(int, int, void *, int, void *, int, int, int);

__declspec(naked) void FUN_5e02eb8c(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x514
        lea     eax, [ebp-0x14]
        push    esi
        push    eax
        push    dword ptr [g_5e77abe8]
        call    dword ptr [g_5e0350b8]
        cmp     eax, 1
        jnz     L_ecc5
        xor     eax, eax
        mov     esi, 0x100
    L_ebb6:
        mov     byte ptr [ebp+eax-0x114], al
        inc     eax
        cmp     eax, esi
        jc      L_ebb6
        mov     al, byte ptr [ebp-0xe]
        mov     byte ptr [ebp-0x114], 0x20
        test    al, al
        jz      L_ec07
        push    ebx
        push    edi
        lea     edx, [ebp-0xd]
    L_ebd5:
        movzx   ecx, byte ptr [edx]
        movzx   eax, al
        cmp     eax, ecx
        ja      L_ebfc
        sub     ecx, eax
        lea     edi, [ebp+eax-0x114]
        inc     ecx
        mov     eax, 0x20202020
        mov     ebx, ecx
        shr     ecx, 2
        rep stosd
        mov     ecx, ebx
        and     ecx, 3
        rep stosb
    L_ebfc:
        inc     edx
        inc     edx
        mov     al, byte ptr [edx-1]
        test    al, al
        jnz     L_ebd5
        pop     edi
        pop     ebx
    L_ec07:
        push    0
        lea     eax, [ebp-0x514]
        push    dword ptr [g_5e77ae04]
        push    dword ptr [g_5e77abe8]
        push    eax
        lea     eax, [ebp-0x114]
        push    esi
        push    eax
        push    1
        call    FUN_5e02f5b3
        push    0
        lea     eax, [ebp-0x214]
        push    dword ptr [g_5e77abe8]
        push    esi
        push    eax
        lea     eax, [ebp-0x114]
        push    esi
        push    eax
        push    esi
        push    dword ptr [g_5e77ae04]
        call    FUN_5e02fd75
        push    0
        lea     eax, [ebp-0x314]
        push    dword ptr [g_5e77abe8]
        push    esi
        push    eax
        lea     eax, [ebp-0x114]
        push    esi
        push    eax
        push    0x200
        push    dword ptr [g_5e77ae04]
        call    FUN_5e02fd75
        add     esp, 0x5c
        xor     eax, eax
        lea     ecx, [ebp-0x514]
    L_ec82:
        mov     dx, word ptr [ecx]
        test    dl, 1
        jz      L_eca0
        or      byte ptr [eax + g_5e77ad01], 0x10
        mov     dl, byte ptr [ebp+eax-0x214]
    L_ec98:
        mov     byte ptr [eax + g_5e77ac00], dl
        jmp     L_ecbc
    L_eca0:
        test    dl, 2
        jz      L_ecb5
        or      byte ptr [eax + g_5e77ad01], 0x20
        mov     dl, byte ptr [ebp+eax-0x314]
        jmp     L_ec98
    L_ecb5:
        and     byte ptr [eax + g_5e77ac00], 0
    L_ecbc:
        inc     eax
        inc     ecx
        inc     ecx
        cmp     eax, esi
        jc      L_ec82
        jmp     L_ed0e
    L_ecc5:
        xor     eax, eax
        mov     esi, 0x100
    L_eccc:
        cmp     eax, 0x41
        jc      L_ecea
        cmp     eax, 0x5a
        ja      L_ecea
        or      byte ptr [eax + g_5e77ad01], 0x10
        mov     cl, al
        add     cl, 0x20
    L_ece2:
        mov     byte ptr [eax + g_5e77ac00], cl
        jmp     L_ed09
    L_ecea:
        cmp     eax, 0x61
        jc      L_ed02
        cmp     eax, 0x7a
        ja      L_ed02
        or      byte ptr [eax + g_5e77ad01], 0x20
        mov     cl, al
        sub     cl, 0x20
        jmp     L_ece2
    L_ed02:
        and     byte ptr [eax + g_5e77ac00], 0
    L_ed09:
        inc     eax
        cmp     eax, esi
        jc      L_eccc
    L_ed0e:
        pop     esi
        leave
        ret
    }
}
