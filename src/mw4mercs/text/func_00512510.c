/* func_00512510.c — inline-asm transcription of FUN_00512510 (0x00512510, 2454 B)
 * Network mission parameter setter. __stdcall, RET 0xc.
 * Two nested switches: outer on param_3[0] (jump table 0x512ec4), inner on
 * param_3[1] (jump table 0x512fbc). Both jump tables live outside this
 * function's byte range, so they are referenced via extern symbols.
 */

extern int g_007dab44;   /* dword [0x007dab44] */
extern int g_007dab40;   /* dword [0x007dab40] */
extern int g_007dd268;   /* dword [0x007dd268] */
extern int g_008589b4;   /* dword [0x008589b4] */
extern int g_jt_512ec4[];/* jump table @ 0x512ec4 */
extern int g_jt_512fbc[];/* jump table @ 0x512fbc */

extern void __cdecl FUN_00704820(void);
extern void __cdecl FUN_00702c20(void);
extern void __cdecl FUN_006f90d0(void);
extern void __cdecl FUN_006f90e0(void);
extern void __cdecl FUN_006fcab0(void);
extern void __cdecl FUN_00540050(void);
extern void __cdecl FUN_00535b50(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void func_00512510(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x8
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [g_007dab40]
        push    edi
        xor     ecx, dword ptr [eax]
        mov     edx, dword ptr [ecx + 0xc]
        xor     edx, 0x85739531
        mov     al, byte ptr [edx + 0x16]
        test    al, al
        mov     dword ptr [ebp - 0x8], ecx
        jnz     L_512540
        xor     eax, eax
        pop     edi
        mov     esp, ebp
        pop     ebp
        ret     0xc

    L_512540:
        mov     eax, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [eax]
        mov     edi, dword ptr [ecx + 0xc]
        mov     edx, dword ptr [edx]
        xor     edi, 0x85739531
        cmp     edx, 0x3d
        push    ebx
        mov     ebx, dword ptr [edi + 0x50]
        push    esi
        mov     dword ptr [ebp - 0x4], edi
        ja      L_512eaf
        jmp     dword ptr [edx*4 + g_jt_512ec4]

    L_512568:
        mov     eax, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebx + 0x36c], ecx
        jmp     L_512eaf

    L_512578:
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [edx]
        mov     ecx, dword ptr [ebx + 0x36c]
        cmp     eax, ecx
        mov     dword ptr [ebx + 0x370], eax
        jle     L_512eaf
        mov     dword ptr [ebx + 0x370], ecx
        jmp     L_512eaf

    L_51259c:
        mov     eax, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax]
        test    eax, eax
        mov     dword ptr [ebx + 0x10], eax
        jz      L_5125b6
        push    0x3
        push    0x4
        call    FUN_00704820
        jmp     L_512eaf
    L_5125b6:
        push    0x0
        push    0x4
        call    FUN_00704820
        jmp     L_512eaf

    L_5125c4:
        mov     ecx, dword ptr [eax + 0x4]
        mov     esi, dword ptr [ecx]
        push    esi
        push    0x1
        mov     dword ptr [ebx + 0x14], esi
        call    FUN_00702c20
        test    esi, esi
        jz      L_5125ed
        call    FUN_006f90d0
        or      eax, 0x800
        push    eax
        call    FUN_006f90e0
        jmp     L_512eaf
    L_5125ed:
        call    FUN_006f90d0
        and     eax, 0xfffff7ff
        push    eax
        call    FUN_006f90e0
        jmp     L_512eaf

    L_512602:
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [edx]
        mov     edx, dword ptr [ecx + 0x14]
        xor     edx, 0x85739531
        cmp     eax, dword ptr [edx + 0x1800]
        mov     dword ptr [ebx + 0x18], eax
        jge     L_51262c
        mov     eax, dword ptr [ecx + 0x14]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x1800]
        mov     dword ptr [ebx + 0x18], ecx
    L_51262c:
        mov     edx, dword ptr [ebx + 0x18]
        push    0x0
        push    0x3
        mov     dword ptr [g_008589b4], edx
        call    FUN_00702c20
        jmp     L_512eaf

    L_512643:
        mov     eax, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebx + 0x20], ecx
        jmp     L_512eaf

    L_512650:
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [edx]
        mov     dword ptr [ebx + 0x24], eax
        jmp     L_512eaf

    L_51265d:
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [ebx + 0x28], edx
        jmp     L_512eaf

    L_51266a:
        mov     eax, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebx + 0x2c], ecx
        jmp     L_512eaf

    L_512677:
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [edx]
        mov     dword ptr [ebx + 0x30], eax
        jmp     L_512eaf

    L_512684:
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [ebx + 0x34], edx
        jmp     L_512eaf

    L_512691:
        mov     eax, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax]
        test    eax, eax
        mov     ecx, dword ptr [ecx + 0xc]
        mov     dword ptr [ebx + 0x38], eax
        jz      L_5126c2
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0xea60
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x79fb24
        push    0x0
        call    FUN_006fcab0
        jmp     L_512eaf
    L_5126c2:
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    0xea61
        call    dword ptr [eax + 0x34]
        push    eax
        push    0x79fb24
        push    0x0
        call    FUN_006fcab0
        jmp     L_512eaf

    L_5126e4:
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [ebx + 0x3c], edx
        jmp     L_512eaf

    L_5126f1:
        mov     eax, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebx + 0x40], ecx
        jmp     L_512eaf

    L_5126fe:
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [edx]
        mov     dword ptr [ebx + 0x44], eax
        jmp     L_512eaf

    L_51270b:
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [ebx + 0x48], edx
        jmp     L_512eaf

    L_512718:
        mov     eax, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebx + 0x4c], ecx
        jmp     L_512eaf

    L_512725:
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [edx]
        mov     dword ptr [ebx + 0x50], eax
        jmp     L_512eaf

    L_512732:
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [ebx + 0x54], edx
        jmp     L_512eaf

    L_51273f:
        mov     eax, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebx + 0x58], ecx
        jmp     L_512eaf

    L_51274c:
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [edx]
        mov     dword ptr [ebx + 0x5c], eax
        jmp     L_512eaf

    L_512759:
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [ebx + 0x60], edx
        jmp     L_512eaf

    L_512766:
        mov     eax, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebx + 0x64], ecx
        jmp     L_512eaf

    L_512773:
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [edx]
        mov     dword ptr [ebx + 0x68], eax
        jmp     L_512eaf

    L_512780:
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [ecx]
        mov     ecx, edi
        mov     dword ptr [ebx + 0x84], edx
        call    FUN_00540050
        jmp     L_512eaf

    L_512797:
        mov     eax, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [ebx + 0x8c]
        mov     dword ptr [ebx + 0x88], eax
        jle     L_5127b0
        mov     dword ptr [ebx + 0x8c], eax
    L_5127b0:
        mov     ecx, edi
        call    FUN_00540050
        jmp     L_512eaf

    L_5127bc:
        mov     ecx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [ecx]
        cmp     dword ptr [ebx + 0x88], eax
        mov     dword ptr [ebx + 0x8c], eax
        jle     L_5127d5
        mov     dword ptr [ebx + 0x88], eax
    L_5127d5:
        mov     ecx, edi
        call    FUN_00540050
        jmp     L_512eaf

    L_5127e1:
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [edx]
        mov     ecx, edi
        mov     dword ptr [ebx + 0x90], eax
        call    FUN_00540050
        jmp     L_512eaf

    L_5127f8:
        mov     ecx, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [ecx]
        cmp     ecx, 0x20
        mov     edx, dword ptr [eax + 0x8]
        mov     eax, dword ptr [edx]
        jl      L_512815
        sub     ecx, 0x20
        add     ebx, 0xc0
        jmp     L_512d8b
    L_512815:
        add     ebx, 0xbc
        jmp     L_512d8b

    L_512820:
        mov     ecx, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [ecx]
        cmp     ecx, 0x20
        mov     edx, dword ptr [eax + 0x8]
        mov     eax, dword ptr [edx]
        jl      L_51283d
        sub     ecx, 0x20
        add     ebx, 0xc8
        jmp     L_512d8b
    L_51283d:
        add     ebx, 0xc4
        jmp     L_512d8b

    L_512848:
        mov     ecx, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x8]
        mov     eax, dword ptr [edx]
        sub     ecx, 0x33
        cmp     ecx, 0x20
        jl      L_512868
        sub     ecx, 0x20
        add     ebx, 0xd0
        jmp     L_512d8b
    L_512868:
        add     ebx, 0xcc
        jmp     L_512d8b

    L_512873:
        mov     ecx, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x8]
        mov     eax, dword ptr [edx]
        sub     ecx, 0x64
        cmp     ecx, 0x20
        jl      L_512893
        sub     ecx, 0x20
        add     ebx, 0xd8
        jmp     L_512d8b
    L_512893:
        add     ebx, 0xd4
        jmp     L_512d8b

    L_51289e:
        mov     ecx, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x8]
        mov     eax, dword ptr [edx]
        sub     ecx, 0x83
        cmp     ecx, 0x20
        jl      L_5128c1
        sub     ecx, 0x20
        add     ebx, 0xe0
        jmp     L_512d8b
    L_5128c1:
        add     ebx, 0xdc
        jmp     L_512d8b

    L_5128cc:
        mov     eax, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebx + 0x94], ecx
        jmp     L_512eaf

    L_5128dc:
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [edx]
        mov     dword ptr [ebx + 0x98], eax
        jmp     L_512eaf

    L_5128ec:
        mov     ecx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [ebx + 0x10]
        test    eax, eax
        mov     edx, dword ptr [ecx]
        mov     dword ptr [ebx + 0x9c], edx
        jnz     L_512eaf
        mov     dword ptr [ebx + 0x98], 0
        jmp     L_512eaf

    L_512911:
        mov     eax, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebx + 0xa0], ecx
        jmp     L_512eaf

    L_512921:
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [edx]
        mov     edx, dword ptr [g_007dd268]
        mov     ecx, eax
        shl     ecx, 9
        mov     dword ptr [ebx + 0x374], eax
        mov     esi, edx
        add     esi, ecx
        or      ecx, 0xffffffff
        lea     edi, [eax + esi*1 + 0xe0]
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edi, [ebx + 0x378]
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     eax, dword ptr [ebx + 0x374]
        mov     ecx, eax
        shl     ecx, 9
        mov     esi, edx
        add     esi, ecx
        or      ecx, 0xffffffff
        lea     edi, [eax + esi*1 + 0x1e0]
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        lea     esi, [ebx + 0x3f8]
        mov     dword ptr [ebp + 0x10], esi
        mov     esi, edi
        mov     edi, dword ptr [ebp + 0x10]
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     eax, dword ptr [ebx + 0x374]
        mov     ecx, eax
        shl     ecx, 9
        add     edx, ecx
        mov     cl, byte ptr [eax + edx*1 + 0x260]
        test    cl, cl
        lea     edx, [ebx + 0x478]
        mov     edi, 0x779cc4
        jnz     L_5129c8
        mov     edi, 0x779cb0
    L_5129c8:
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebp - 0x8]
        mov     ecx, dword ptr [ecx + 0xc]
        lea     esi, [ebx + 0x378]
        push    esi
        xor     ecx, 0x85739531
        call    FUN_00535b50
        push    esi
        push    0x79fa2c
        mov     dword ptr [ebx + 0xcf8], eax
        push    0x0
        mov     dword ptr [ebx + 0xcfc], edx
        call    FUN_006fcab0
        mov     edi, dword ptr [ebp - 0x4]
        jmp     L_512eaf

    L_512a1e:
        push    0x779c68
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_512eaf
        int     3
        jmp     L_512eaf

    L_512a39:
        push    0x779c1c
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_512eaf
        int     3
        jmp     L_512eaf

    L_512a54:
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [edx]
        mov     dword ptr [ebx + 0x6c], eax
        jmp     L_512eaf

    L_512a61:
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [ebx + 0x70], edx
        jmp     L_512eaf

    L_512a6e:
        mov     eax, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebx + 0x80], ecx
        jmp     L_512eaf

    L_512a7e:
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [edx]
        mov     dword ptr [ebx + 0x1c], eax
        jmp     L_512eaf

    L_512a8b:
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [ebx + 0x74], edx
        jmp     L_512eaf

    L_512a98:
        push    0x779bcc
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_512eaf
        int     3
        jmp     L_512eaf

    L_512ab3:
        push    0x779b7c
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_512eaf
        int     3
        jmp     L_512eaf

    L_512ace:
        push    0x779b34
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_512eaf
        int     3
        jmp     L_512eaf

    L_512ae9:
        mov     eax, dword ptr [eax + 0x4]
        mov     edi, dword ptr [eax]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        lea     edx, [ebx + 0x4f8]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     edi, dword ptr [ebp - 0x4]
        jmp     L_512eaf

    L_512b19:
        mov     ecx, dword ptr [eax + 0x4]
        mov     edi, dword ptr [ecx]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        lea     edx, [ebx + 0x5f8]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     edi, dword ptr [ebp - 0x4]
        jmp     L_512eaf

    L_512b49:
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [ecx]
        mov     ecx, edi
        mov     dword ptr [ebx + 0xa8], edx
        call    FUN_00540050
        jmp     L_512eaf

    L_512b60:
        mov     eax, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebx + 0xac], ecx
        jmp     L_512eaf

    L_512b70:
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [edx]
        mov     ecx, dword ptr [g_007dd268]
        mov     dword ptr [ebx + 0xa4], eax
        mov     dword ptr [ecx + 0x54], 0xffffffff
        jmp     L_512eaf

    L_512b8d:
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [edx]
        mov     dword ptr [ebx + 0xb0], eax
        jmp     L_512eaf

    L_512b9d:
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [ebx + 0xb4], edx
        jmp     L_512eaf

    L_512bad:
        mov     eax, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebx + 0xb8], ecx
        jmp     L_512eaf

    L_512bbd:
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [edx]
        mov     dword ptr [ebx + 0xe4], eax
        jmp     L_512eaf

    L_512bcd:
        mov     ecx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [ecx]
        cmp     eax, 2
        mov     dword ptr [ebx + 0xe8], eax
        jge     L_512bec
        mov     dword ptr [ebx + 0xe8], 2
        jmp     L_512eaf
    L_512bec:
        cmp     eax, 8
        jle     L_512eaf
        mov     dword ptr [ebx + 0xe8], 8
        jmp     L_512eaf

    L_512c04:
        push    0x779af8
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_512eaf
        int     3
        jmp     L_512eaf

    L_512c1f:
        mov     ecx, dword ptr [eax + 0x8]
        mov     ecx, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [edx]
        dec     ecx
        cmp     ecx, 0xc
        ja      L_512e9d
        jmp     dword ptr [ecx*4 + g_jt_512fbc]

    L_512c3a:
        mov     eax, dword ptr [eax + 0xc]
        lea     ecx, [edx + edx*4]
        mov     edx, dword ptr [eax]
        shl     ecx, 4
        mov     dword ptr [ecx + ebx*1 + 0xec], edx
        jmp     L_512eaf

    L_512c51:
        mov     eax, dword ptr [eax + 0xc]
        mov     eax, dword ptr [eax]
        lea     ecx, [edx + edx*4 + 0xf]
        lea     edx, [edx + edx*4]
        shl     ecx, 4
        shl     edx, 4
        add     ecx, ebx
        add     ebx, edx
        mov     dword ptr [ecx], eax
        cmp     eax, dword ptr [ebx + 0xf4]
        jle     L_512c77
        mov     dword ptr [ebx + 0xf4], eax
    L_512c77:
        mov     ecx, dword ptr [ecx]
        cmp     ecx, dword ptr [ebx + 0xf8]
        jle     L_512c87
        mov     dword ptr [ebx + 0xf8], ecx
    L_512c87:
        mov     ecx, edi
        call    FUN_00540050
        jmp     L_512eaf

    L_512c93:
        mov     eax, dword ptr [eax + 0xc]
        mov     eax, dword ptr [eax]
        lea     ecx, [edx + edx*4]
        shl     ecx, 4
        lea     edx, [edx + edx*4 + 0xf]
        shl     edx, 4
        mov     dword ptr [ecx + ebx*1 + 0xf4], eax
        mov     ecx, dword ptr [ebx + edx*1]
        add     ebx, edx
        cmp     ecx, eax
        jle     L_512cb7
        mov     dword ptr [ebx], eax
    L_512cb7:
        mov     ecx, edi
        call    FUN_00540050
        jmp     L_512eaf

    L_512cc3:
        mov     eax, dword ptr [eax + 0xc]
        mov     eax, dword ptr [eax]
        lea     ecx, [edx + edx*4]
        shl     ecx, 4
        lea     edx, [edx + edx*4 + 0xf]
        shl     edx, 4
        mov     dword ptr [ecx + ebx*1 + 0xf8], eax
        mov     ecx, dword ptr [ebx + edx*1]
        add     ebx, edx
        cmp     ecx, eax
        jle     L_512ce7
        mov     dword ptr [ebx], eax
    L_512ce7:
        mov     ecx, edi
        call    FUN_00540050
        jmp     L_512eaf

    L_512cf3:
        mov     eax, dword ptr [eax + 0xc]
        lea     ecx, [edx + edx*4]
        mov     edx, dword ptr [eax]
        shl     ecx, 4
        mov     dword ptr [ecx + ebx*1 + 0x100], edx
        mov     ecx, edi
        call    FUN_00540050
        jmp     L_512eaf

    L_512d11:
        mov     eax, dword ptr [eax + 0xc]
        lea     ecx, [edx + edx*4]
        mov     edx, dword ptr [eax]
        shl     ecx, 4
        mov     dword ptr [ecx + ebx*1 + 0x104], edx
        mov     ecx, edi
        call    FUN_00540050
        jmp     L_512eaf

    L_512d2f:
        mov     eax, dword ptr [eax + 0xc]
        lea     ecx, [edx + edx*4]
        mov     edx, dword ptr [eax]
        shl     ecx, 4
        mov     dword ptr [ecx + ebx*1 + 0x10c], edx
        jmp     L_512eaf

    L_512d46:
        mov     eax, dword ptr [eax + 0xc]
        lea     ecx, [edx + edx*4]
        mov     edx, dword ptr [eax]
        shl     ecx, 4
        mov     dword ptr [ecx + ebx*1 + 0x110], edx
        jmp     L_512eaf

    L_512d5d:
        mov     ecx, dword ptr [eax + 0xc]
        mov     ecx, dword ptr [ecx]
        cmp     ecx, 0x20
        mov     eax, dword ptr [eax + 0x10]
        mov     eax, dword ptr [eax]
        jl      L_512d7e
        lea     edx, [edx + edx*4]
        sub     ecx, 0x20
        shl     edx, 4
        lea     ebx, [edx + ebx*1 + 0x118]
        jmp     L_512d8b
    L_512d7e:
        lea     edx, [edx + edx*4]
        shl     edx, 4
        lea     ebx, [edx + ebx*1 + 0x114]
    L_512d8b:
        test    eax, eax
        jz      L_512da4
        mov     eax, 1
        shl     eax, cl
        or      dword ptr [ebx], eax
        mov     ecx, edi
        call    FUN_00540050
        jmp     L_512eaf
    L_512da4:
        mov     eax, dword ptr [ebx]
        mov     edx, 1
        shl     edx, cl
        mov     ecx, edi
        not     edx
        and     eax, edx
        mov     dword ptr [ebx], eax
        call    FUN_00540050
        jmp     L_512eaf

    L_512dbf:
        mov     ecx, dword ptr [eax + 0xc]
        mov     ecx, dword ptr [ecx]
        cmp     ecx, 0x20
        mov     eax, dword ptr [eax + 0x10]
        mov     eax, dword ptr [eax]
        jl      L_512de0
        lea     edx, [edx + edx*4]
        sub     ecx, 0x20
        shl     edx, 4
        lea     ebx, [edx + ebx*1 + 0x120]
        jmp     L_512d8b
    L_512de0:
        lea     edx, [edx + edx*4]
        shl     edx, 4
        lea     ebx, [edx + ebx*1 + 0x11c]
        jmp     L_512d8b

    L_512def:
        mov     ecx, dword ptr [eax + 0xc]
        mov     ecx, dword ptr [ecx]
        mov     eax, dword ptr [eax + 0x10]
        mov     eax, dword ptr [eax]
        sub     ecx, 0x33
        cmp     ecx, 0x20
        jl      L_512e16
        lea     edx, [edx + edx*4]
        sub     ecx, 0x20
        shl     edx, 4
        lea     ebx, [edx + ebx*1 + 0x128]
        jmp     L_512d8b
    L_512e16:
        lea     edx, [edx + edx*4]
        shl     edx, 4
        lea     ebx, [edx + ebx*1 + 0x124]
        jmp     L_512d8b

    L_512e28:
        mov     ecx, dword ptr [eax + 0xc]
        mov     ecx, dword ptr [ecx]
        mov     eax, dword ptr [eax + 0x10]
        mov     eax, dword ptr [eax]
        sub     ecx, 0x64
        cmp     ecx, 0x20
        jl      L_512e4f
        lea     edx, [edx + edx*4]
        sub     ecx, 0x20
        shl     edx, 4
        lea     ebx, [edx + ebx*1 + 0x130]
        jmp     L_512d8b
    L_512e4f:
        lea     edx, [edx + edx*4]
        shl     edx, 4
        lea     ebx, [edx + ebx*1 + 0x12c]
        jmp     L_512d8b

    L_512e61:
        mov     ecx, dword ptr [eax + 0xc]
        mov     ecx, dword ptr [ecx]
        mov     eax, dword ptr [eax + 0x10]
        mov     eax, dword ptr [eax]
        sub     ecx, 0x83
        cmp     ecx, 0x20
        jl      L_512e8b
        lea     edx, [edx + edx*4]
        sub     ecx, 0x20
        shl     edx, 4
        lea     ebx, [edx + ebx*1 + 0x138]
        jmp     L_512d8b
    L_512e8b:
        lea     edx, [edx + edx*4]
        shl     edx, 4
        lea     ebx, [edx + ebx*1 + 0x134]
        jmp     L_512d8b

    L_512e9d:
        push    0x779adc
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_512eaf
        int     3

    L_512eaf:
        pop     esi
        pop     ebx
        mov     byte ptr [edi + 0x239df0], 1
        mov     eax, 1
        pop     edi
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
