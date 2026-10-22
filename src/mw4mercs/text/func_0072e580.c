/*
 * FUN_0072e580 (2103 B) — Large message/command dispatch routine.
 *
 * Dispatches on EBX (a message/command id) via three jump tables
 * (0x72edb8, 0x72edec, 0x72eef0) and a byte-index table (0x72edd8,
 * 0x72ee08). Handles a wide range of input/display commands.
 *
 * __stdcall, RET 0x10 (four stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* IAT function pointers */
extern void *g_0076b438;
extern void *g_0076b448;
extern void *g_0076b44c;
extern void *g_0076b450;
extern void *g_0076b050;
extern void *g_0076b054;
extern void *g_0076b058;
extern void *g_0076b498;
extern void *g_0076b454;
extern void *g_0076b4e4;
extern void *g_0076b4f0;

/* Data symbols */
extern unsigned long g_00859278;
extern unsigned long g_00896cbc;
extern unsigned long g_0087c5a0;
extern unsigned long g_00858ab0;
extern char          g_00858ab5;
extern char          g_00858954;
extern unsigned long g_00858c08;
extern unsigned long g_0085a210;
extern unsigned long g_00858c10;
extern unsigned long g_00858940;
extern unsigned long g_00858c14;
extern unsigned long g_00858944;
extern char          g_0087dd0a;
extern unsigned long g_0085a214;
extern unsigned long g_00858ba0;
extern char          g_00858ae0;
extern char          g_00858ae1;
extern unsigned long g_008b2520;
extern char          g_0085a208;
extern unsigned long g_008aaef0;
extern unsigned long g_00858bf8;
extern unsigned long g_007b6fbc;
extern unsigned long g_007b6fb8;
extern unsigned long g_00858968;
extern unsigned long g_00849eb8;
extern unsigned long g_0085a264;
extern unsigned long g_0085896c;
extern unsigned long g_0085894c;
extern unsigned long g_008abe54;
extern unsigned long g_0085a260;
extern unsigned long g_00858970;
extern char          g_00858ac4;
extern char          g_007b71e4;
extern unsigned long g_00896cb8;
extern char          g_00896cb4;
extern unsigned long g_007b73c8;
extern unsigned long g_008aae58;
extern char          g_0087bc34;
extern unsigned long g_0087e5f4;
extern unsigned long g_0087dde4;
extern unsigned long g_0087dde8;
extern unsigned long g_0087ddec[];
extern unsigned long g_008aaea4;
extern unsigned long g_008aaeb4;
extern char          g_00896cb5;

/* Direct callees */
extern void __cdecl FUN_0072e500(void);
extern void __cdecl FUN_007355d0(void *a, void *b, void *c, void *d);
extern void __cdecl FUN_00735310(void *a, void *b);
extern void __cdecl FUN_00735350(void *a, void *b);
extern void __cdecl FUN_00722390(void);
extern void __cdecl FUN_00722470(void);
extern void __cdecl FUN_0072d1f0(int a);
extern void __cdecl FUN_007238d0(int a, int b);
extern void __cdecl FUN_006fabf0(void *a);
extern void __cdecl FUN_007239a0(int a);
extern void __cdecl FUN_007238a0(void *a);
extern void __cdecl FUN_0072b450(void *a, void *b, void *c, void *d, void *e);

__declspec(naked) void __stdcall FUN_0072e580(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x50
        push    ebx
        mov     ebx, dword ptr [ebp + 0xc]
        cmp     ebx, 0x84
        push    esi
        push    edi
        jz      L_72ed9b
        cmp     ebx, 0x200
        jz      L_72ed9b
        cmp     ebx, 0x20
        jnz     L_72e5e6
        mov     eax, dword ptr [g_00859278]
        test    eax, eax
        mov     eax, dword ptr [ebp + 0x14]
        jz      L_72e5ce
        mov     ecx, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [ebp + 0x8]
        push    eax
        push    ecx
        push    ebx
        push    edx
        call    dword ptr [g_0076b438]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
L_72e5ce:
        mov     dword ptr [g_00896cbc], eax
        call    FUN_0072e500
        pop     edi
        pop     esi
        mov     eax, 1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
L_72e5e6:
        cmp     ebx, 0x104
        mov     esi, dword ptr [ebp + 0x14]
        mov     ecx, dword ptr [ebp + 0x8]
        mov     edi, dword ptr [ebp + 0x10]
        ja      L_72eb67
        cmp     ebx, 0x104
        jz      L_72eb21
        cmp     ebx, 0x15
        ja      L_72e857
        jz      L_72e874
        lea     eax, [ebx - 3]
        cmp     eax, 0x11
        ja      L_72ed7c
        xor     edx, edx
        mov     dl, byte ptr [eax + 0x72edd8]
        jmp     dword ptr [edx * 4 + 0x72edb8]
L_72e631:
        mov     eax, dword ptr [g_0087c5a0]
        test    eax, eax
        jnz     L_72e6c8
        mov     ecx, dword ptr [g_00858ab0]
        mov     eax, 1
        cmp     ecx, eax
        jnz     L_72e6c8
        mov     cl, byte ptr [g_00858ab5]
        test    cl, cl
        jz      L_72e6c8
        mov     cl, byte ptr [g_00858954]
        test    cl, cl
        jnz     L_72e6c8
        mov     ecx, dword ptr [g_00858c08]
        cmp     ecx, 3
        jz      L_72e671
        cmp     ecx, 2
        jnz     L_72e6c8
L_72e671:
        mov     edx, dword ptr [g_0085a210]
        test    edx, edx
        jz      L_72e6df
        mov     ecx, dword ptr [g_00858c10]
        mov     esi, dword ptr [g_00858940]
        add     esi, ecx
        push    0
        push    0x1000000
        mov     dword ptr [ebp - 0x10], ecx
        mov     ecx, dword ptr [g_00858c14]
        mov     dword ptr [ebp - 8], esi
        mov     esi, dword ptr [g_00858944]
        push    0
        mov     byte ptr [g_0087dd0a], al
        mov     eax, dword ptr [g_0085a214]
        add     esi, ecx
        mov     dword ptr [ebp - 0xc], ecx
        push    eax
        lea     ecx, [ebp - 0x10]
        push    ecx
        push    edx
        mov     dword ptr [ebp - 4], esi
        call    FUN_007355d0
        mov     byte ptr [g_0087dd0a], 0
L_72e6c8:
        mov     eax, dword ptr [ebp + 0x8]
        push    0
        push    eax
        call    dword ptr [g_0076b448]
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
L_72e6df:
        mov     edi, dword ptr [ebp + 0x8]
        lea     edx, [ebp - 0x50]
        push    edx
        push    edi
        call    dword ptr [g_0076b44c]
        mov     ecx, dword ptr [g_0085a214]
        mov     esi, eax
        lea     eax, [ebp + 0x8]
        push    eax
        push    ecx
        call    FUN_00735310
        cmp     dword ptr [g_00858ba0], 8
        jnz     L_72e73a
        push    4
        push    esi
        call    dword ptr [g_0076b050]
        mov     eax, dword ptr [g_00858944]
        mov     ecx, dword ptr [g_00858940]
        mov     edx, dword ptr [ebp + 0x8]
        push    0xcc0020
        push    eax
        push    ecx
        push    0
        push    0
        push    edx
        push    eax
        push    ecx
        push    0
        push    0
        push    esi
        call    dword ptr [g_0076b054]
        jmp     L_72e760
L_72e73a:
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [g_00858944]
        mov     edx, dword ptr [g_00858940]
        push    0xcc0020
        push    0
        push    0
        push    eax
        push    ecx
        push    edx
        push    0
        push    0
        push    esi
        call    dword ptr [g_0076b058]
L_72e760:
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [g_0085a214]
        push    eax
        push    ecx
        call    FUN_00735350
        lea     edx, [ebp - 0x50]
        push    edx
        push    edi
        call    dword ptr [g_0076b450]
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
L_72e786:
        mov     esi, edi
        and     esi, 0xffff
        mov     eax, 1
        cmp     esi, eax
        jz      L_72e79e
        cmp     esi, 2
        jz      L_72e79e
        xor     al, al
L_72e79e:
        test    edi, 0xffff0000
        mov     byte ptr [g_00858ae0], al
        jnz     L_72e7b4
        test    al, al
        jz      L_72e7b4
        call    FUN_00722390
L_72e7b4:
        mov     al, byte ptr [g_00858954]
        test    al, al
        jz      L_72ed94
        test    esi, esi
        jnz     L_72ed94
        push    esi
        call    dword ptr [g_0076b498]
        mov     ecx, dword ptr [ebp + 0x14]
        push    ecx
        push    edi
        jmp     L_72eda3
L_72e7da:
        mov     byte ptr [g_00858ae1], 0
        call    FUN_00722470
        mov     ecx, dword ptr [ebp + 0x14]
        push    ecx
        push    edi
        jmp     L_72eda3
L_72e7f0:
        mov     byte ptr [g_00858ae1], 1
        call    FUN_00722390
        mov     ecx, dword ptr [ebp + 0x14]
        push    ecx
        push    edi
        jmp     L_72eda3
L_72e806:
        xor     eax, eax
        push    0x858c10
        push    ecx
        mov     dword ptr [g_00858c10], eax
        mov     dword ptr [g_00858c14], eax
        call    dword ptr [g_0076b454]
        mov     ecx, dword ptr [ebp + 0x14]
        push    ecx
        push    edi
        jmp     L_72eda3
L_72e828:
        mov     eax, dword ptr [g_00859278]
        test    eax, eax
        jnz     L_72e844
        mov     edx, dword ptr [g_00858c08]
        mov     eax, 1
        cmp     edx, eax
        jnz     L_72edae
L_72e844:
        push    0
        push    ecx
        call    dword ptr [g_0076b448]
        mov     ecx, dword ptr [ebp + 0x14]
        push    ecx
        push    edi
        jmp     L_72eda3
L_72e857:
        lea     eax, [ebx - 0x1c]
        cmp     eax, 0xe6
        ja      L_72ed7c
        xor     edx, edx
        mov     dl, byte ptr [eax + 0x72ee08]
        jmp     dword ptr [edx * 4 + 0x72edec]
L_72e874:
        test    dword ptr [g_008b2520], 0x800000
        jnz     L_72ed94
        mov     al, byte ptr [g_0085a208]
        test    al, al
        jnz     L_72ed94
        mov     ecx, dword ptr [ebp + 0x14]
        push    ecx
        mov     dword ptr [g_008aaef0], 1
        push    edi
        jmp     L_72eda3
L_72e8a5:
        mov     al, byte ptr [g_0085a208]
        test    al, al
        jnz     L_72ed94
        mov     al, byte ptr [g_00858954]
        test    al, al
        jnz     L_72ed94
        mov     eax, dword ptr [esi + 0x18]
        and     eax, 2
        test    al, al
        jnz     L_72ed94
        mov     edx, dword ptr [g_00858bf8]
        lea     ecx, [ebp - 0x3c]
        push    ecx
        push    edx
        mov     dword ptr [ebp - 0x3c], 0x2c
        call    dword ptr [g_0076b4e4]
        cmp     dword ptr [ebp - 0x34], 1
        jnz     L_72ed94
        mov     ecx, dword ptr [esi + 0xc]
        mov     eax, dword ptr [esi + 0x8]
        mov     dword ptr [g_007b6fbc], ecx
        mov     ecx, dword ptr [ebp + 0x14]
        push    ecx
        mov     dword ptr [g_007b6fb8], eax
        push    edi
        jmp     L_72eda3
L_72e90a:
        mov     edx, dword ptr [g_00858bf8]
        push    edx
        call    dword ptr [g_0076b4f0]
        test    eax, eax
        jnz     L_72e924
        test    edi, edi
        jz      L_72e924
        call    FUN_00722390
L_72e924:
        xor     eax, eax
        test    edi, edi
        setz    al
        push    eax
        call    FUN_0072d1f0
        mov     ecx, dword ptr [ebp + 0x14]
        push    ecx
        push    edi
        jmp     L_72eda3
L_72e93b:
        cmp     edi, 0x91
        jz      L_72ea39
        push    esi
        push    edi
        call    FUN_007238d0
        mov     eax, dword ptr [g_00858968]
        test    eax, eax
        jz      L_72e98b
        mov     ecx, dword ptr [g_00849eb8]
        test    ecx, ecx
        jnz     L_72e98b
        cmp     edi, eax
        jnz     L_72e98b
        mov     al, byte ptr [g_00858954]
        test    al, al
        mov     eax, 1
        mov     dword ptr [g_008aaef0], eax
        jz      L_72ebf5
        mov     ecx, dword ptr [ebp + 0x14]
        push    ecx
        mov     dword ptr [g_0085a264], eax
        push    edi
        jmp     L_72eda3
L_72e98b:
        mov     eax, dword ptr [g_0085896c]
        test    eax, eax
        jz      L_72e9e3
        mov     ecx, dword ptr [g_00849eb8]
        test    ecx, ecx
        jnz     L_72e9e3
        cmp     edi, eax
        jnz     L_72e9e3
        mov     al, byte ptr [g_00858954]
        test    al, al
        jz      L_72e9ca
        mov     eax, dword ptr [g_0085894c]
        mov     ecx, dword ptr [g_008abe54]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [g_0085894c], eax
        jc      L_72e9ca
        mov     dword ptr [g_0085894c], 0
L_72e9ca:
        mov     ecx, dword ptr [ebp + 0x14]
        mov     eax, 1
        push    ecx
        mov     dword ptr [g_008aaef0], eax
        mov     dword ptr [g_0085a260], eax
        push    edi
        jmp     L_72eda3
L_72e9e3:
        mov     eax, dword ptr [g_00858970]
        test    eax, eax
        jz      L_72ed94
        mov     ecx, dword ptr [g_00849eb8]
        test    ecx, ecx
        jnz     L_72ed94
        cmp     edi, eax
        jnz     L_72ed94
        mov     al, byte ptr [g_00858954]
        test    al, al
        jz      L_72ea28
        mov     eax, 1
        mov     dword ptr [g_008aaef0], eax
L_72ea19:
        mov     ecx, dword ptr [ebp + 0x14]
        push    ecx
        mov     dword ptr [g_0085a264], eax
        push    edi
        jmp     L_72eda3
L_72ea28:
        mov     ecx, dword ptr [ebp + 0x14]
        push    ecx
        mov     byte ptr [g_00858ac4], 1
        push    edi
        jmp     L_72eda3
L_72ea39:
        mov     al, byte ptr [g_007b71e4]
        test    al, al
        jz      L_72ea68
        push    0x7a5bf0
        mov     dword ptr [g_00896cb8], 1
        call    FUN_006fabf0
        add     esp, 4
        test    eax, eax
        jz      L_72ea5e
        int     3
L_72ea5e:
        mov     dword ptr [g_00896cb8], 0
L_72ea68:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
L_72ea73:
        push    edi
        call    FUN_007239a0
        cmp     edi, 0x11
        jnz     L_72ea8f
        mov     ecx, dword ptr [ebp + 0x14]
        push    ecx
        mov     byte ptr [g_00896cb4], 0
        push    edi
        jmp     L_72eda3
L_72ea8f:
        cmp     edi, 0x2c
        jnz     L_72ed94
        mov     eax, dword ptr [g_007b73c8]
        test    eax, eax
        jz      L_72ed94
        mov     ecx, dword ptr [ebp + 0x14]
        push    ecx
        mov     dword ptr [g_008aae58], 1
        push    edi
        jmp     L_72eda3
L_72eab9:
        mov     al, byte ptr [g_0087bc34]
        test    al, al
        mov     edx, dword ptr [ebp + 0x10]
        mov     esi, dword ptr [g_0087e5f4]
        jz      L_72eb04
        mov     ecx, dword ptr [g_0087dde4]
        mov     edi, dword ptr [g_0087dde8]
        lea     eax, [ecx + 1]
        and     eax, 0xff
        cmp     eax, edi
        jz      L_72eaf2
        lea     edi, [esi + edx]
        mov     dword ptr [ecx * 4 + 0x87ddec], edi
        mov     dword ptr [g_0087dde4], eax
L_72eaf2:
        mov     eax, dword ptr [g_008aaea4]
        test    eax, eax
        jz      L_72eb0c
        mov     eax, dword ptr [g_008aaeb4]
        test    eax, eax
        jnz     L_72eb0c
L_72eb04:
        add     esi, edx
        push    esi
        call    FUN_007238a0
L_72eb0c:
        mov     dword ptr [g_0087e5f4], 0
L_72eb16:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
L_72eb21:
        cmp     edi, 0xd
        jnz     L_72eb56
        mov     eax, dword ptr [g_00849eb8]
        test    eax, eax
        jnz     L_72eb56
        mov     al, byte ptr [g_00858954]
        test    al, al
        mov     eax, 1
        mov     dword ptr [g_008aaef0], eax
        jz      L_72ec27
        pop     edi
        pop     esi
        mov     dword ptr [g_0085a264], eax
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
L_72eb56:
        push    esi
        push    edi
        call    FUN_007238d0
        mov     ecx, dword ptr [ebp + 0x14]
        push    ecx
        push    edi
        jmp     L_72eda3
L_72eb67:
        cmp     ebx, 0x205
        ja      L_72ed04
        jz      L_72ecf3
        cmp     ebx, 0x201
        ja      L_72ecbd
        jz      L_72ecaa
        mov     eax, ebx
        sub     eax, 0x105
        jz      L_72ec8a
        dec     eax
        jz      L_72ec76
        sub     eax, 0xc
        jnz     L_72ed7c
        mov     eax, edi
        and     eax, 0xfff0
        cmp     eax, 0xf100
        jnz     L_72ebc1
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
L_72ebc1:
        cmp     eax, 0xf140
        jz      L_72eb16
        cmp     eax, 0xf170
        jz      L_72eb16
        cmp     eax, 0xf120
        jnz     L_72ec04
        mov     al, byte ptr [g_00858954]
        test    al, al
        mov     eax, 1
        mov     dword ptr [g_008aaef0], eax
        jz      L_72ea19
L_72ebf5:
        mov     ecx, dword ptr [ebp + 0x14]
        push    ecx
        mov     dword ptr [g_0085a260], eax
        push    edi
        jmp     L_72eda3
L_72ec04:
        cmp     eax, 0xf030
        jnz     L_72ec37
        mov     al, byte ptr [g_00858954]
        test    al, al
        jnz     L_72ec2c
        mov     eax, dword ptr [g_00849eb8]
        test    eax, eax
        jnz     L_72ec2c
        mov     eax, 1
        mov     dword ptr [g_008aaef0], eax
L_72ec27:
        mov     dword ptr [g_0085a260], eax
L_72ec2c:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
L_72ec37:
        cmp     eax, 0xf060
        jnz     L_72ec50
        pop     edi
        pop     esi
        mov     byte ptr [g_00858ac4], 1
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
L_72ec50:
        mov     al, byte ptr [g_00858954]
        test    al, al
        jz      L_72ed94
        mov     ecx, dword ptr [ebp + 0x14]
        mov     eax, 1
        push    ecx
        mov     dword ptr [g_008aaef0], eax
        mov     dword ptr [g_0085a264], eax
        push    edi
        jmp     L_72eda3
L_72ec76:
        cmp     edi, 0x79
        jnz     L_72ed94
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
L_72ec8a:
        cmp     edi, 0xd
        jnz     L_72ec9a
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
L_72ec9a:
        push    edi
        call    FUN_007239a0
        mov     ecx, dword ptr [ebp + 0x14]
        push    ecx
        push    edi
        jmp     L_72eda3
L_72ecaa:
        push    0
        push    1
        call    FUN_007238d0
        mov     ecx, dword ptr [ebp + 0x14]
        push    ecx
        push    edi
        jmp     L_72eda3
L_72ecbd:
        mov     eax, ebx
        sub     eax, 0x202
        jz      L_72ece2
        sub     eax, 2
        jnz     L_72ed7c
        push    0
        push    2
        call    FUN_007238d0
        mov     ecx, dword ptr [ebp + 0x14]
        push    ecx
        push    edi
        jmp     L_72eda3
L_72ece2:
        push    1
        call    FUN_007239a0
        mov     ecx, dword ptr [ebp + 0x14]
        push    ecx
        push    edi
        jmp     L_72eda3
L_72ecf3:
        push    2
        call    FUN_007239a0
        mov     ecx, dword ptr [ebp + 0x14]
        push    ecx
        push    edi
        jmp     L_72eda3
L_72ed04:
        lea     eax, [ebx + 0xfffffdf9]
        cmp     eax, 0xb
        ja      L_72ed7c
        jmp     dword ptr [eax * 4 + 0x72eef0]
L_72ed16:
        mov     ecx, dword ptr [ebp + 0x14]
        push    ecx
        mov     byte ptr [g_00896cb5], 1
        push    edi
        jmp     L_72eda3
L_72ed24:
        mov     ecx, dword ptr [ebp + 0x14]
        push    ecx
        mov     byte ptr [g_00896cb5], 0
        push    edi
        jmp     L_72eda3
L_72ed32:
        push    0
        push    3
        call    FUN_007238d0
        mov     ecx, dword ptr [ebp + 0x14]
        push    ecx
        push    edi
        jmp     L_72eda3
L_72ed42:
        push    3
        call    FUN_007239a0
        mov     ecx, dword ptr [ebp + 0x14]
        push    ecx
        push    edi
        jmp     L_72eda3
L_72ed50:
        mov     ecx, edi
        shr     ecx, 0x10
        push    0
        add     ecx, 3
        push    ecx
        call    FUN_007238d0
        mov     ecx, dword ptr [ebp + 0x14]
        push    ecx
        push    edi
        jmp     L_72eda3
L_72ed67:
        mov     edx, edi
        shr     edx, 0x10
        add     edx, 3
        push    edx
        call    FUN_007239a0
        mov     ecx, dword ptr [ebp + 0x14]
        push    ecx
        push    edi
        jmp     L_72eda3
L_72ed7c:
        lea     eax, [ebp + 0x13]
        push    eax
        push    esi
        push    edi
        push    ebx
        push    ecx
        mov     byte ptr [ebp + 0x13], 0
        call    FUN_0072b450
        mov     cl, byte ptr [ebp + 0x13]
        test    cl, cl
        jnz     L_72edae
L_72ed94:
        mov     ecx, dword ptr [ebp + 0x14]
        push    ecx
        push    edi
        jmp     L_72eda3
L_72ed9b:
        mov     eax, dword ptr [ebp + 0x14]
        mov     ecx, dword ptr [ebp + 0x10]
        push    eax
        push    ecx
L_72eda3:
        mov     edx, dword ptr [ebp + 0x8]
        push    ebx
        push    edx
        call    dword ptr [g_0076b438]
L_72edae:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
    }
}
