/*
 * FUN_5e02e939 (429 B) - codepage table initializer. Looks up a
 * codepage in a static table (DAT_5e039490), or queries GetCPInfo,
 * and builds the lead-byte table at DAT_5e77ad00 plus related globals.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e02c830(int);
extern int __cdecl FUN_5e02eae6(int);
extern int __cdecl FUN_5e02eb30(int);
extern void __cdecl FUN_5e02eb63(void);
extern void __cdecl FUN_5e02eb8c(void);
extern void __cdecl FUN_5e02c891(int);
extern int g_5e77abe8;      /* DAT_5e77abe8 */
extern int g_5e77ae04;      /* DAT_5e77ae04 */
extern int g_5e77abfc;      /* DAT_5e77abfc */
extern int g_5e77aa40;      /* DAT_5e77aa40 */
extern int g_5e039490;      /* DAT_5e039490 (dword array base) */
extern int *g_5e0350b8;     /* IAT: GetCPInfo */
extern unsigned char g_5e77ad00[];  /* DAT_5e77ad00 (byte array) */
extern unsigned char g_5e77ad01[];  /* DAT_5e77ad01 (byte array) */
extern unsigned char g_5e0394a0[];  /* DAT_5e0394a0 (byte array) */
extern unsigned char g_5e039488[];  /* DAT_5e039488 (byte array) */
extern int g_5e039494[];    /* DAT_5e039494 (dword array) */
extern int g_5e77abf0[];    /* DAT_5e77abf0 (dword array) */

__declspec(naked) void FUN_5e02e939(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x18
        push    ebx
        push    esi
        push    edi
        push    0x19
        call    FUN_5e02c830
        push    dword ptr [ebp+8]
        call    FUN_5e02eae6
        mov     ebx, eax
        pop     ecx
        cmp     ebx, dword ptr [g_5e77abe8]
        pop     ecx
        mov     dword ptr [ebp+8], ebx
        jnz     L967
    L960:
        xor     esi, esi
        jmp     L_ad7
    L967:
        test    ebx, ebx
        jz      L_eac5
        xor     edx, edx
        mov     eax, offset g_5e039490
    L976:
        cmp     dword ptr [eax], ebx
        jz      L_e9ee
        add     eax, 0x30
        inc     edx
        cmp     eax, 0x5e039580
        jl      L976
    L985:
        lea     eax, [ebp-0x18]
        push    eax
        push    ebx
        call    dword ptr [g_5e0350b8]
        push    1
        pop     esi
        cmp     eax, esi
        jnz     L_eabc
        push    0x40
        and     dword ptr [g_5e77ae04], 0
        pop     ecx
        xor     eax, eax
        mov     edi, offset g_5e77ad00
        cmp     dword ptr [ebp-0x18], esi
        rep stosd
        stosb
        mov     dword ptr [g_5e77abe8], ebx
        jbe     L_eaa9
        cmp     byte ptr [ebp-0x12], 0
        jz      L_ea84
        lea     ecx, [ebp-0x11]
    L9cb:
        mov     dl, byte ptr [ecx]
        test    dl, dl
        jz      L_ea84
    L9dc:
        movzx   eax, byte ptr [ecx-1]
        movzx   edx, dl
        cmp     eax, edx
        ja      L_ea78
        or      byte ptr [eax + g_5e77ad01], 4
        inc     eax
        __emit 0xEB /* jmp L9dc: MSVC6 miscomputes backward rel-offset (off-by-7) due to reloc'd or [eax+g_5e77ad01] between branch and target */
        __emit 0xEE
    L_e9ee:
        and     dword ptr [ebp-4], 0
        push    0x40
        pop     ecx
        xor     eax, eax
        mov     edi, offset g_5e77ad00
        lea     esi, [edx+edx*2]
        rep stosd
        shl     esi, 4
        stosb
        lea     ebx, [esi + g_5e0394a0]
    L_ea0b:
        cmp     byte ptr [ebx], 0
        mov     ecx, ebx
        jz      L_ea3e
    L_ea12:
        mov     dl, byte ptr [ecx+1]
        test    dl, dl
        jz      L_ea3e
        movzx   eax, byte ptr [ecx]
        movzx   edi, dl
        cmp     eax, edi
        ja      L_ea37
    L_ea2c:
        mov     edx, dword ptr [ebp-4]
        mov     dl, byte ptr [edx + g_5e039488]
        or      byte ptr [eax + g_5e77ad01], dl
        inc     eax
        cmp     eax, edi
        __emit 0x76 /* jbe L_ea2c: MSVC6 miscomputes backward rel-offset (off-by-9) due to reloc'd or [eax+g_5e77ad01] between branch and target */
        __emit 0xF5
    L_ea37:
        inc     ecx
        inc     ecx
        cmp     byte ptr [ecx], 0
        jnz     L_ea12
    L_ea3e:
        inc     dword ptr [ebp-4]
        add     ebx, 8
        cmp     dword ptr [ebp-4], 4
        jc      L_ea0b
        mov     eax, dword ptr [ebp+8]
        mov     dword ptr [g_5e77abfc], 1
        push    eax
        mov     [g_5e77abe8], eax
        call    FUN_5e02eb30
        lea     esi, [esi + g_5e039494]
        mov     edi, offset g_5e77abf0
        movsd
        movsd
        pop     ecx
        mov     [g_5e77ae04], eax
        movsd
        jmp     L_eaca
    L_ea78:
        inc     ecx
        inc     ecx
        cmp     byte ptr [ecx-1], 0
        jnz     L9cb
    L_ea84:
        mov     eax, esi
    L_ea86:
        or      byte ptr [eax + g_5e77ad01], 8
        inc     eax
        cmp     eax, 0xff
        jc      L_ea86
        push    ebx
        call    FUN_5e02eb30
        pop     ecx
        mov     [g_5e77ae04], eax
        mov     dword ptr [g_5e77abfc], esi
        jmp     L_eab0
    L_eaa9:
        and     dword ptr [g_5e77abfc], 0
    L_eab0:
        xor     eax, eax
        mov     edi, offset g_5e77abf0
        stosd
        stosd
        stosd
        jmp     L_eaca
    L_eabc:
        cmp     dword ptr [g_5e77aa40], 0
        jz      L_ead4
    L_eac5:
        call    FUN_5e02eb63
    L_eaca:
        call    FUN_5e02eb8c
        jmp     L960
    L_ead4:
        or      esi, 0xffffffff
    L_ad7:
        push    0x19
        call    FUN_5e02c891
        pop     ecx
        mov     eax, esi
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
