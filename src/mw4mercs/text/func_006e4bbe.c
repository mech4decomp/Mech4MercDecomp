/*
 * In-.text data block at 0x6E4BBE (1701 B). Contains:
 *   - 2x NOP pad
 *   - main __stdcall function at 0x6E4BC0 (RET 0x10, 4 params).
 *     Dispatches on the first param (a message/command id), calls a
 *     logging/string API (0x76B5xx IAT), and copies a set of strings
 *     (via FUN_0072D830) into a table of fixed buffers at 0x84xxxx.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00404840(void);
extern void __cdecl FUN_006E6040(void);
extern void __cdecl FUN_006E5910(void);
extern void __cdecl FUN_006E5270(void);
extern void __cdecl FUN_0052A460(void);
extern void __cdecl FUN_0052A770(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_006FC4D0(void);
extern void __cdecl FUN_006E4210(void);
extern void __cdecl FUN_0051FB70(void);
extern void __cdecl FUN_00536840(void);
extern void __cdecl FUN_00404D60(void);
extern void __cdecl FUN_00404910(void);
extern void __cdecl FUN_00404620(void);
extern void __cdecl FUN_004015B0(void);
extern void __cdecl FUN_0072D830(void);
extern void __cdecl FUN_004084E0(void *ptr);

extern void *g_76b570;   /* IAT fn ptr */
extern void *g_76b5a4;   /* IAT fn ptr */
extern void *g_76b560;   /* IAT fn ptr */
extern void *g_76b564;   /* IAT fn ptr */
extern void *g_76b568;   /* IAT fn ptr */
extern void *g_76b574;   /* IAT fn ptr */
extern void *g_76b56c;   /* IAT fn ptr */

extern unsigned int g_84175c;
extern unsigned int g_841758;
extern unsigned int g_7b82b4;
extern unsigned int g_7dd268;
extern unsigned int g_7dab44;
extern unsigned int g_7dab40;
extern unsigned char g_7ddd22;
extern int g_7b7df4;
extern unsigned int g_7b7e14;
extern unsigned int g_7b7df0;
extern unsigned int g_841768;

__declspec(naked) void __stdcall func_006E4BBE(void)
{
    __asm {
        nop
        nop
        mov     eax, dword ptr [esp + 8]
        sub     esp, 0x114
        sub     eax, 0x10
        push    ebx
        push    esi
        push    edi
        je      L_6e5240
        sub     eax, 0x100
        je      L_6e4d32
        dec     eax
        jne     L_6e5255
        mov     ecx, dword ptr [esp + 0x12c]
        mov     eax, ecx
        shr     eax, 0x10
        dec     eax
        je      L_6e4d0a
        and     ecx, 0xffff
        sub     ecx, 2
        je      L_6e4ce4
        sub     ecx, 0x407
        je      L_6e4c23
        pop     edi
        pop     esi
        mov     eax, 1
        pop     ebx
        add     esp, 0x114
        ret     0x10
    L_6e4c23:
        mov     esi, dword ptr [esp + 0x124]
        mov     edi, dword ptr [g_76b570]
        push    1
        push    esi
        call    edi
        push    0x40f
        push    esi
        call    dword ptr [g_76b5a4]
        mov     ebx, dword ptr [g_76b560]
        push    0
        push    0
        push    0x147
        push    eax
        call    ebx
        cmp     eax, -1
        je      L_6e4cd3
        push    0
        push    0
        push    0
        call    FUN_00404840
        test    eax, eax
        je      L_6e4cd3
        call    FUN_006E6040
        test    eax, eax
        je      L_6e4c8b
        call    FUN_006E5910
        push    1
        push    esi
        call    edi
        pop     edi
        pop     esi
        mov     eax, 1
        pop     ebx
        add     esp, 0x114
        ret     0x10
    L_6e4c8b:
        mov     eax, dword ptr [g_84175c]
        test    eax, eax
        push    0
        jne     L_6e4cba
        mov     eax, dword ptr [g_841758]
        mov     ecx, dword ptr [g_7b82b4]
        push    0x6e7370
        push    eax
        push    0x81
        push    ecx
        call    dword ptr [g_76b564]
        mov     dword ptr [g_84175c], eax
        jmp     L_6e4cc4
    L_6e4cba:
        push    0
        push    0x110
        push    eax
        call    ebx
    L_6e4cc4:
        mov     edx, dword ptr [g_84175c]
        push    5
        push    edx
        call    dword ptr [g_76b568]
    L_6e4cd3:
        pop     edi
        pop     esi
        mov     eax, 1
        pop     ebx
        add     esp, 0x114
        ret     0x10
    L_6e4ce4:
        call    FUN_006E5910
        mov     eax, dword ptr [esp + 0x124]
        push    1
        push    eax
        call    dword ptr [g_76b570]
        pop     edi
        pop     esi
        mov     eax, 1
        pop     ebx
        add     esp, 0x114
        ret     0x10
    L_6e4d0a:
        cmp     cx, 0x40f
        jne     L_6e4d21
        mov     ecx, dword ptr [esp + 0x124]
        push    ecx
        call    FUN_006E5270
        add     esp, 4
    L_6e4d21:
        pop     edi
        pop     esi
        mov     eax, 1
        pop     ebx
        add     esp, 0x114
        ret     0x10
    L_6e4d32:
        mov     ecx, dword ptr [g_7dd268]
        call    FUN_0052A460
        mov     ecx, dword ptr [g_7dd268]
        call    FUN_0052A770
        push    0x77a0c8
        lea     ecx, [esp + 0x10]
        call    FUN_00412570
        mov     edx, dword ptr [esp + 0xc]
        push    edx
        call    FUN_006FC4D0
        test    al, al
        jne     L_6e4dbc
        mov     ecx, dword ptr [g_7b82b4]
        push    0x100
        lea     eax, [esp + 0x24]
        push    eax
        push    5
        push    ecx
        call    dword ptr [g_76b574]
        mov     edx, dword ptr [g_7dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_7dab40]
        mov     ecx, dword ptr [eax + 0xc]
        push    0
        lea     edx, [esp + 0x24]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    edx
        push    0x7546
        call    dword ptr [eax + 0x34]
        push    eax
        call    FUN_006E4210
        add     esp, 0xc
        call    FUN_006E5910
        mov     eax, dword ptr [esp + 0xc]
        jmp     L_6e5210
    L_6e4dbc:
        mov     ecx, dword ptr [g_7dd268]
        call    FUN_0051FB70
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [edx + 0xc]
        push    1
        xor     ecx, 0x85739531
        call    FUN_00536840
        xor     eax, eax
        mov     al, byte ptr [g_7ddd22]
        push    eax
        push    0
        call    FUN_00404D60
        push    0
        push    0
        push    0
        call    FUN_00404910
        push    0
        push    0
        push    0
        call    FUN_00404620
        mov     eax, dword ptr [g_7b7df4]
        test    eax, eax
        jg      L_6e4e6a
        mov     edx, dword ptr [g_7b82b4]
        push    0x100
        lea     ecx, [esp + 0x24]
        push    ecx
        push    6
        push    edx
        call    dword ptr [g_76b574]
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        push    0
        lea     edx, [esp + 0x24]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    edx
        push    0x7546
        call    dword ptr [eax + 0x34]
        push    eax
        call    FUN_006E4210
        add     esp, 0xc
        call    FUN_006E5910
        mov     eax, dword ptr [esp + 0xc]
        jmp     L_6e5210
    L_6e4e6a:
        push    ebp
        push    0
        push    0
        push    0
        call    FUN_004015B0
        mov     ebp, dword ptr [esp + 0x128]
        push    0x40f
        push    ebp
        call    dword ptr [g_76b5a4]
        mov     ebx, dword ptr [g_76b560]
        push    0
        push    0
        mov     edi, eax
        push    0x14b
        push    edi
        call    ebx
        mov     eax, dword ptr [g_7b7df4]
        xor     esi, esi
        test    eax, eax
        jle     L_6e4ec5
    L_6e4ea8:
        mov     ecx, dword ptr [g_7b7e14]
        mov     edx, dword ptr [ecx + esi*4]
        push    edx
        push    esi
        push    0x14a
        push    edi
        call    ebx
        mov     eax, dword ptr [g_7b7df4]
        inc     esi
        cmp     esi, eax
        jl      L_6e4ea8
    L_6e4ec5:
        mov     eax, dword ptr [g_7b7df0]
        push    0
        push    eax
        push    0x14e
        push    edi
        call    ebx
        mov     ecx, dword ptr [g_841768]
        push    0x60d
        push    ecx
        call    FUN_0072D830
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        mov     eax, dword ptr [g_841768]
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, 0x841258
        rep movsd
        mov     ecx, edx
        push    0x60e
        and     ecx, 3
        push    eax
        rep movsb
        call    FUN_0072D830
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        mov     eax, dword ptr [g_841768]
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, 0x841358
        rep movsd
        mov     ecx, edx
        push    0x60f
        and     ecx, 3
        push    eax
        rep movsb
        call    FUN_0072D830
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        mov     eax, dword ptr [g_841768]
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, 0x841458
        rep movsd
        mov     ecx, edx
        push    0x610
        and     ecx, 3
        push    eax
        rep movsb
        call    FUN_0072D830
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        mov     eax, dword ptr [g_841768]
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, 0x841558
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        push    0x611
        rep movsb
        push    eax
        call    FUN_0072D830
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        mov     eax, dword ptr [g_841768]
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, 0x841658
        rep movsd
        mov     ecx, edx
        push    0x613
        and     ecx, 3
        push    eax
        rep movsb
        call    FUN_0072D830
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        mov     eax, dword ptr [g_841768]
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, 0x840858
        rep movsd
        mov     ecx, edx
        push    0x614
        and     ecx, 3
        push    eax
        rep movsb
        call    FUN_0072D830
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        mov     eax, dword ptr [g_841768]
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, 0x840958
        rep movsd
        mov     ecx, edx
        push    0x615
        and     ecx, 3
        push    eax
        rep movsb
        call    FUN_0072D830
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        mov     eax, dword ptr [g_841768]
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, 0x840a58
        rep movsd
        mov     ecx, edx
        push    0x616
        and     ecx, 3
        push    eax
        rep movsb
        call    FUN_0072D830
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        mov     eax, dword ptr [g_841768]
        shr     ecx, 2
        mov     edi, 0x840b58
        rep movsd
        mov     ecx, edx
        push    0x617
        and     ecx, 3
        push    eax
        rep movsb
        call    FUN_0072D830
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        mov     eax, dword ptr [g_841768]
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, 0x840c58
        rep movsd
        mov     ecx, edx
        push    0x618
        and     ecx, 3
        push    eax
        rep movsb
        call    FUN_0072D830
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        mov     eax, dword ptr [g_841768]
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, 0x840d58
        rep movsd
        mov     ecx, edx
        push    0x619
        and     ecx, 3
        push    eax
        rep movsb
        call    FUN_0072D830
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        mov     eax, dword ptr [g_841768]
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, 0x840e58
        rep movsd
        mov     ecx, edx
        push    0x61a
        and     ecx, 3
        push    eax
        rep movsb
        call    FUN_0072D830
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        mov     eax, dword ptr [g_841768]
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, 0x840f58
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        push    0x61b
        rep movsb
        push    eax
        call    FUN_0072D830
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        mov     eax, dword ptr [g_841768]
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, 0x841058
        rep movsd
        mov     ecx, edx
        push    0x61c
        and     ecx, 3
        push    eax
        rep movsb
        call    FUN_0072D830
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, 0x841158
        rep movsd
        mov     ecx, edx
        push    0x3ee
        and     ecx, 3
        push    ebp
        rep movsb
        call    dword ptr [g_76b5a4]
        mov     esi, eax
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        call    dword ptr [g_76b56c]
        mov     eax, dword ptr [esp + 0x1c]
        sub     eax, dword ptr [esp + 0x14]
        cdq
        push    0
        sub     eax, edx
        sar     eax, 1
        push    eax
        push    0x195
        push    esi
        call    ebx
        push    0
        push    0x14
        push    0x1a7
        push    esi
        call    ebx
        push    ebp
        call    FUN_006E5270
        mov     eax, dword ptr [esp + 0x14]
        add     esp, 4
        pop     ebp
    L_6e5210:
        test    eax, eax
        je      L_6e4d21
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_6e4d21
        push    eax
        call    FUN_004084E0
        add     esp, 4
        pop     edi
        pop     esi
        mov     eax, 1
        pop     ebx
        add     esp, 0x114
        ret     0x10
    L_6e5240:
        call    FUN_006E5910
        mov     ecx, dword ptr [esp + 0x124]
        push    1
        push    ecx
        call    dword ptr [g_76b570]
    L_6e5255:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x114
        ret     0x10
    }
}
