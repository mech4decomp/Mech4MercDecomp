/*
 * FUN_007104F0 (716 B) — Debug overlay / HUD display routine.
 *
 * Reads a key state (FUN_00723bd0), copies one of two mode strings into a
 * global buffer, then draws a progress-bar style overlay (percentage text +
 * color swatches) via the FUN_0073d3b0 / FUN_007103b0 helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0070b130(void);
extern char __cdecl FUN_00723bd0(void);
extern void __cdecl FUN_0070a090(int a, int b);
extern void __cdecl FUN_00717650(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j);
extern void __cdecl FUN_00713cc0(int a, int b);
extern void __cdecl FUN_007103b0(int a, int b, int c, int d, int e);
extern void __cdecl FUN_0073d430(void);
extern void __cdecl FUN_0073d3b0(int a, char *b);

extern char str_7a1dd0[];
extern char str_7a1d44[];
extern char str_7a1dc8[];
extern char str_7a1dc4[];
extern int arr_7b6fc4[];
extern int arr_7b6fe4[];

extern int DAT_00859bac[];
extern int DAT_00859d30[];
extern int DAT_00859d50;
extern int DAT_00859d2c;
extern int DAT_0085a270;
extern int DAT_0085b608;
extern int DAT_0085a218;
extern int DAT_0085a214;
extern int DAT_0085a21c;
extern int DAT_00858940;
extern int DAT_00858944;
extern int DAT_008aaf30;
extern int DAT_008aaf2c;

__declspec(naked) void __cdecl FUN_007104f0(void)
{
    __asm {
        sub     esp, 0xc
        push    esi
        push    edi
        call    FUN_0070b130
        call    FUN_00723bd0
        cmp     al, 0x20
        mov     eax, dword ptr [DAT_0085b608]
        jnz     L_10650
        test    eax, eax
        jz      L_1060a
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset str_7a1dd0
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, offset DAT_00859bac
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     dword ptr [DAT_0085a270], 1
        mov     dword ptr [DAT_0085b608], 0
L_1054d:
        mov     edx, dword ptr [DAT_0085a218]
        mov     eax, dword ptr [DAT_0085a214]
        push    edx
        push    eax
L_1055a:
        call    FUN_0070a090
        push    0
        push    0
        push    0x3f800000
        push    0x3f800000
        push    0
        push    0
        push    0
        push    0
        push    0
        push    0
        call    FUN_00717650
        mov     eax, dword ptr [DAT_0085a270]
        test    eax, eax
        jz      L_107b6
        mov     eax, dword ptr [DAT_0085b608]
        test    eax, eax
        jnz     L_107b6
        mov     eax, dword ptr [DAT_00858940]
        mov     ecx, dword ptr [DAT_00858944]
        push    ebx
        push    ebp
        cdq
        sub     eax, edx
        mov     ebp, eax
        push    0
        lea     edi, [ecx - 0x50]
        sar     ebp, 1
        push    1
        sub     ebp, 0x80
        mov     dword ptr [esp + 0x20], edi
        call    FUN_00713cc0
        push    1
        push    0xd
        call    FUN_00713cc0
        push    2
        push    0x10
        call    FUN_00713cc0
        push    0xff606060
        push    0x3c
        push    0x108
        push    edi
        lea     edx, [ebp - 4]
        push    edx
        call    FUN_007103b0
        call    FUN_0073d430
        push    1
        push    0xd
        call    FUN_00713cc0
        mov     dword ptr [esp + 0x14], 0
        mov     ebx, offset DAT_00859d30
        lea     esi, [ebp + 0xa]
        jmp     L_1066e
L_1060a:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset str_7a1d44
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, offset DAT_00859bac
        rep     movsd
        mov     eax, 1
        mov     ecx, edx
        and     ecx, 3
        mov     dword ptr [DAT_0085a270], eax
        mov     dword ptr [DAT_0085b608], eax
        mov     eax, dword ptr [DAT_0085a21c]
        rep     movsb
        mov     ecx, dword ptr [DAT_0085a214]
        push    eax
        push    ecx
        jmp     L_1055a
L_10650:
        test    eax, eax
        jz      L_1054d
        mov     eax, dword ptr [DAT_0085a21c]
        mov     ecx, dword ptr [DAT_0085a214]
        push    eax
        push    ecx
        jmp     L_1055a
L_1066a:
        mov     edi, dword ptr [esp + 0x18]
L_1066e:
        mov     cl, byte ptr [esp + 0x14]
        lea     eax, [esi + 4]
        lea     edx, [esp + 0x10]
        mov     dword ptr [DAT_008aaf30], eax
        push    edx
        lea     eax, [edi + 8]
        add     cl, 0x30
        push    0xffffff
        mov     dword ptr [DAT_008aaf2c], eax
        mov     byte ptr [esp + 0x18], cl
        mov     byte ptr [esp + 0x19], 0
        call    FUN_0073d3b0
        lea     eax, [esi - 3]
        mov     dword ptr [DAT_008aaf30], eax
        lea     eax, [edi + 0x30]
        mov     edi, dword ptr [ebx]
        mov     dword ptr [DAT_008aaf2c], eax
        lea     eax, [edi + edi*4]
        lea     eax, [eax + eax*4]
        shl     eax, 2
        xor     edx, edx
        div     dword ptr [DAT_00859d2c]
        mov     ecx, eax
        cmp     ecx, 0x63
        jbe     L_106d7
        lea     ecx, [esi - 6]
        mov     dword ptr [DAT_008aaf30], ecx
        push    offset str_7a1dc8
        jmp     L_10749
L_106d7:
        test    ecx, ecx
        jnz     L_106ec
        test    edi, edi
        jz      L_10753
        mov     dword ptr [DAT_008aaf30], esi
        push    offset str_7a1dc4
        jmp     L_10749
L_106ec:
        jbe     L_10753
        cmp     ecx, 0xa
        jnc     L_10717
        mov     eax, ecx
        xor     edx, edx
        mov     ecx, 0xa
        div     ecx
        mov     dword ptr [DAT_008aaf30], esi
        mov     byte ptr [esp + 0x11], 0x25
        mov     byte ptr [esp + 0x12], 0
        add     dl, 0x30
        mov     byte ptr [esp + 0x10], dl
        jmp     L_10744
L_10717:
        mov     eax, 0xcccccccd
        mul     ecx
        shr     edx, 3
        add     dl, 0x30
        mov     byte ptr [esp + 0x10], dl
        mov     eax, ecx
        xor     edx, edx
        mov     ecx, 0xa
        div     ecx
        mov     byte ptr [esp + 0x12], 0x25
        mov     byte ptr [esp + 0x13], 0
        add     dl, 0x30
        mov     byte ptr [esp + 0x11], dl
L_10744:
        lea     edx, [esp + 0x10]
        push    edx
L_10749:
        push    0xffffff
        call    FUN_0073d3b0
L_10753:
        mov     edi, dword ptr [esp + 0x14]
        inc     edi
        add     ebx, 4
        add     esi, 0x20
        cmp     ebx, offset DAT_00859d50
        mov     dword ptr [esp + 0x14], edi
        jc      L_1066a
        push    2
        push    0x10
        call    FUN_00713cc0
        push    1
        push    0xd
        call    FUN_00713cc0
        push    0
        push    1
        call    FUN_00713cc0
        mov     eax, dword ptr [esp + 0x18]
        lea     ebx, [eax + 0x14]
        lea     edi, [ebp + 4]
        mov     esi, offset arr_7b6fc4
L_10798:
        mov     ecx, dword ptr [esi]
        push    ecx
        push    0x18
        push    0x18
        push    ebx
        push    edi
        call    FUN_007103b0
        add     esi, 4
        add     edi, 0x20
        cmp     esi, offset arr_7b6fe4
        jc      L_10798
        pop     ebp
        pop     ebx
L_107b6:
        pop     edi
        pop     esi
        add     esp, 0xc
        ret
    }
}
