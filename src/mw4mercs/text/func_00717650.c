/*
 * FUN_00717650 (596 B) — rendering/color setup. Computes a packed color
 * value, stores several FPU-derived color components into globals, and
 * initializes a color table (0x0087c1d0..0x0087c250).
 *
 * __stdcall, RET 0x28 (10 params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char  g_858955;      /* byte */
extern char  g_85a26c;      /* byte */
extern char  g_859c2c[];    /* byte lookup table */
extern int   g_85a0c8;      /* dword mask */
extern int   g_858940;      /* int */
extern int   g_858944;      /* int */
extern float g_859d88;
extern float g_859d80;
extern float g_859d84;
extern float g_859d7c;
extern char  g_858958;      /* byte */
extern char  g_87dd0a;      /* byte */
extern int   g_85a248;      /* dword */
extern int   g_87c598;
extern int   g_87c594;
extern char  g_87c5b0;
extern char  g_87c5b1;
extern char  g_87c5b2;
extern int   g_87bc84;
extern int   g_87c26c;
extern int   g_87c5a4;
extern int   g_87c1d0[];    /* dword array */
extern int   g_87c1e0;
extern int   g_87c1e4;
extern int   g_87c1e8;
extern int   g_87c1f0;
extern int   g_87c204;
extern int   g_87c208;
extern int   g_87c20c;
extern int   g_87c210;
extern int   g_87c220;
extern int   g_87c228;
extern int   g_87c230;
extern int   g_87c238;
extern int   g_87c234;
extern int   g_87c23c;
extern int   g_87c244;
extern int   g_87c250[];    /* dword array */

extern void __cdecl FUN_0074a4e0(void);
extern void __cdecl FUN_0070a920(void);
extern void __cdecl FUN_0074afd0(void);
extern void __cdecl FUN_0074a280(int);
extern void __cdecl FUN_007159b0(void);
extern void __cdecl FUN_007175f0(void);
extern void __cdecl FUN_00714040(int, int);

__declspec(naked) void __stdcall FUN_00717650(
    char param_1, int param_2, char param_3, unsigned int param_4,
    float param_5, float param_6, float param_7, float param_8,
    char param_9, int param_10)
{
    __asm {
        mov     al, byte ptr [g_858955]
        test    al, al
        mov     al, byte ptr [esp + 0x4]
        jz      L_663
        test    al, al
        jz      L_663
        xor     al, al
    L_663:
        mov     cl, byte ptr [esp + 0xc]
        test    cl, cl
        push    ebx
        push    esi
        push    edi
        jz      L_b6
        mov     dl, byte ptr [g_85a26c]
        test    dl, dl
        jz      L_b6
        xor     ecx, ecx
        mov     cl, byte ptr [esp + 0x1e]
        xor     edx, edx
        xor     ebx, ebx
        mov     dl, byte ptr [ecx + g_859c2c]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     esi, edx
        xor     edx, edx
        mov     dl, ch
        and     ecx, 0xff
        shl     esi, 0x8
        mov     bl, byte ptr [edx + g_859c2c]
        xor     edx, edx
        mov     dl, byte ptr [ecx + g_859c2c]
        mov     cl, byte ptr [esp + 0x18]
        add     esi, ebx
        shl     esi, 0x8
        add     esi, edx
        jmp     L_ba
    L_b6:
        mov     esi, dword ptr [esp + 0x1c]
    L_ba:
        fild    dword ptr [g_858940]
        mov     edi, dword ptr [g_85a0c8]
        fld     dword ptr [esp + 0x2c]
        mov     dl, byte ptr [esp + 0x30]
        fsub    dword ptr [esp + 0x24]
        and     esi, edi
        test    al, al
        mov     ebx, 0x1
        fmul    st(0), st(1)
        fstp    dword ptr [g_859d88]
        fild    dword ptr [g_858944]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x28]
        fsub    dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x10]
        fstp    dword ptr [g_859d80]
        fmul    dword ptr [esp + 0x24]
        fstp    dword ptr [g_859d84]
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x20]
        fstp    dword ptr [g_859d7c]
        jnz     L_721
        test    cl, cl
        jnz     L_721
        test    dl, dl
        jz      L_790
    L_721:
        cmp     byte ptr [g_858958], 0
        mov     byte ptr [g_87dd0a], bl
        jz      L_73b
        test    dl, dl
        jz      L_73b
        mov     edi, 0x4
        jmp     L_73d
    L_73b:
        xor     edi, edi
    L_73d:
        mov     edx, dword ptr [esp + 0x34]
        push    edx
        mov     edx, dword ptr [esp + 0x18]
        neg     al
        push    edx
        push    esi
        sbb     eax, eax
        and     eax, 0x2
        xor     edx, edx
        test    cl, cl
        setnz   dl
        add     edi, eax
        mov     eax, dword ptr [g_85a248]
        add     edx, edi
        push    edx
        xor     edi, edi
        push    edi
        push    edi
        push    eax
        call    FUN_0074a4e0
        cmp     eax, edi
        mov     byte ptr [g_87dd0a], 0
        jge     L_77a
        call    FUN_0070a920
    L_77a:
        mov     al, byte ptr [esp + 0x18]
        test    al, al
        jz      L_792
        mov     dword ptr [g_87c598], esi
        mov     dword ptr [g_87c594], ebx
        jmp     L_792
    L_790:
        xor     edi, edi
    L_792:
        mov     al, byte ptr [g_87c5b0]
        test    al, al
        jnz     L_89e
        call    FUN_0074afd0
        mov     ecx, dword ptr [g_85a248]
        push    ecx
        call    FUN_0074a280
        mov     al, byte ptr [g_87c5b1]
        test    al, al
        mov     byte ptr [g_87c5b0], bl
        mov     dword ptr [g_87bc84], edi
        mov     dword ptr [g_87c26c], edi
        mov     dword ptr [g_87c5a4], edi
        jz      L_7dd
        call    FUN_007159b0
        mov     byte ptr [g_87c5b1], 0
    L_7dd:
        mov     al, byte ptr [g_87c5b2]
        test    al, al
        jz      L_807
        mov     edx, dword ptr [g_858944]
        mov     eax, dword ptr [g_858940]
        push    0x3f800000
        push    edi
        push    edx
        push    eax
        push    edi
        push    edi
        call    FUN_007175f0
        mov     byte ptr [g_87c5b2], 0
    L_807:
        mov     ecx, 0x21
        xor     eax, eax
        mov     edi, offset g_87c1d0
        rep stosd
        mov     dword ptr [g_87c1e0], ebx
        mov     dword ptr [g_87c1e4], ebx
        mov     dword ptr [g_87c1e8], ebx
        mov     dword ptr [g_87c1f0], ebx
        mov     dword ptr [g_87c204], ebx
        mov     dword ptr [g_87c208], ebx
        mov     dword ptr [g_87c20c], 0x2
        mov     dword ptr [g_87c210], 0x3
        mov     dword ptr [g_87c220], ebx
        mov     dword ptr [g_87c228], ebx
        mov     dword ptr [g_87c230], 0xffffffff
        mov     dword ptr [g_87c238], ebx
        mov     dword ptr [g_87c234], ebx
        mov     dword ptr [g_87c23c], ebx
        mov     dword ptr [g_87c244], 0xffffff
        mov     edi, 0x20
        mov     esi, offset g_87c250
    L_889:
        mov     ecx, dword ptr [esi]
        push    ecx
        push    edi
        call    FUN_00714040
        sub     esi, 0x4
        dec     edi
        cmp     esi, offset g_87c1d0
        jnz     L_889
    L_89e:
        pop     edi
        pop     esi
        pop     ebx
        ret     0x28
    }
}
