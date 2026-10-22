/*
 * FUN_00563800 (1135 B) — writes a game-info header block to the log
 * (game name/version/author, server address, timelimit, fraglimit, etc.)
 * via FUN_00563550 + FUN_00563c80. Switch on DAT_007eebbc with a jump
 * table at 0x563c70.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007eebbc;
extern int *g_007dab44;
extern int g_007dab40;
extern int g_007ee7b8;
extern int g_007ee7bc;
extern int g_007dd268;
extern int g_jumptable_563c70[4];

extern char g_str_77ead4[];
extern char g_str_77eab8[];
extern char g_str_77eaa4[];
extern char g_str_773040[];
extern char g_str_77ea8c[];
extern char g_str_77ea80[];
extern char g_str_77ea6c[];
extern char g_str_77ea50[];
extern char g_str_77ea38[];
extern char g_str_77ea20[];
extern char g_str_77ea0c[];
extern char g_str_77e9f8[];
extern char g_str_77e9e0[];
extern char g_str_77e9c8[];
extern char g_str_77e9ac[];
extern char g_str_77e990[];
extern char g_str_77e978[];
extern char g_str_77e958[];
extern char g_str_77e940[];
extern char g_str_77e92c[];
extern char g_str_77e91c[];
extern char g_str_77e908[];
extern char g_str_77e8ec[];
extern char g_str_77e8d4[];
extern char g_str_77e8c0[];
extern char g_str_77e8ac[];
extern char g_str_77e89c[];
extern char g_str_77e888[];
extern char g_str_77e87c[];
extern char g_str_77e870[];
extern char g_str_77e860[];
extern char g_str_77e84c[];
extern char g_str_77e838[];

extern void __cdecl FUN_006fc400(void *, void *, int);
extern void __cdecl FUN_006fc640(int, int, int);
extern char __cdecl FUN_006fc4d0(void *);
extern void __cdecl FUN_00563630(int, char *);
extern int __cdecl FUN_00563550(const char *, ...);
extern void __cdecl FUN_00563c80(int);
extern int __cdecl FUN_004cc9f0(void);
extern int __cdecl FUN_00523000(int);
extern int __cdecl FUN_005635a0(void);

__declspec(naked) void FUN_00563800(void)
{
    __asm {
        mov     ecx, dword ptr [g_007eebbc]
        sub     esp, 0x104
        test    ecx, ecx
        push    ebx
        push    esi
        push    edi
        jnz     L_822
        pop     edi
        pop     esi
        mov     eax, 0x1
        pop     ebx
        add     esp, 0x104
        ret
L_822:
        mov     esi, dword ptr [g_007dab44]
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [g_007dab40]
        xor     eax, edx
        mov     edi, dword ptr [eax + 0xc]
        add     eax, 0xc
        xor     edi, 0x85739531
        jz      L_c60
        mov     edi, dword ptr [eax]
        xor     edi, 0x85739531
        mov     bl, byte ptr [edi + 0x16]
        test    bl, bl
        jz      L_c60
        mov     eax, dword ptr [eax]
        xor     eax, 0x85739531
        mov     bl, byte ptr [eax + 0x17]
        test    bl, bl
        jz      L_c60
        lea     eax, [ecx - 1]
        cmp     eax, 0x3
        ja      L_977
        jmp     dword ptr [eax*4 + g_jumptable_563c70]
L_87c:
        push    0x2
        push    offset g_007ee7bc
        push    offset g_007ee7b8
        call    FUN_006fc400
        mov     ecx, dword ptr [g_007ee7b8]
        push    0x0
        push    0x2
        push    ecx
        call    FUN_006fc640
        jmp     L_977
L_8a2:
        push    offset g_007ee7bc
        call    FUN_006fc4d0
        test    al, al
        jz      L_966
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        mov     edi, dword ptr [g_007dab40]
        lea     edx, [esp + 0xc]
        push    edx
        xor     ecx, edi
        mov     edx, dword ptr [ecx + 0xc]
        xor     edx, 0x85739531
        add     edx, 0x239dcc
        push    edx
        call    FUN_00563630
        or      ecx, 0xffffffff
        add     esp, 0x8
        xor     eax, eax
        mov     edi, offset g_str_77ead4
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0xc]
        mov     edi, edx
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        push    0x1
        lea     eax, [esp + 0x10]
        rep     movsb
        push    eax
        jmp     L_96d
L_917:
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0xc]
        push    ecx
        xor     eax, edx
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        add     ecx, 0x239dcc
        push    ecx
        call    FUN_00563630
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0x8
        mov     edi, offset g_str_77ead4
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0xc]
        mov     edi, edx
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
L_966:
        push    0x1
        push    offset g_007ee7bc
L_96d:
        push    offset g_007ee7b8
        call    FUN_006fc400
L_977:
        mov     eax, dword ptr [g_007ee7b8]
        test    eax, eax
        jz      L_c60
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        push    ebp
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx + 0xc]
        xor     edx, 0x85739531
        mov     esi, dword ptr [edx + 0x50]
        push    offset g_str_77eab8
        push    offset g_str_77eaa4
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        push    offset g_str_773040
        push    offset g_str_77ea8c
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        push    offset g_str_77ea80
        push    offset g_str_77ea6c
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        push    offset g_str_77ea50
        push    offset g_str_77ea38
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax + 0x14]
        add     esp, 0x30
        xor     ecx, 0x85739531
        jz      L_a1f
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004cc9f0
        mov     ebx, eax
        jmp     L_a21
L_a1f:
        xor     ebx, ebx
L_a21:
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax + 0xc]
        add     eax, 0xc
        xor     ecx, 0x85739531
        jz      L_a4d
        mov     edx, dword ptr [eax]
        xor     edx, 0x85739531
        mov     edi, dword ptr [edx + 0xa8]
        jmp     L_a4f
L_a4d:
        xor     edi, edi
L_a4f:
        mov     eax, dword ptr [g_007dd268]
        test    eax, eax
        jz      L_a68
        mov     eax, dword ptr [esi + 0xa4]
        push    eax
        call    FUN_00523000
        mov     ebp, eax
        jmp     L_a6a
L_a68:
        xor     ebp, ebp
L_a6a:
        call    FUN_005635a0
        push    eax
        push    offset g_str_77ea20
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        mov     ecx, dword ptr [esi + 0x94]
        push    ecx
        push    offset g_str_77ea0c
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        mov     edx, dword ptr [esi + 0x30]
        push    edx
        push    offset g_str_77e9f8
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        mov     eax, dword ptr [esi + 0x34]
        push    eax
        push    offset g_str_77e9e0
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        mov     ecx, dword ptr [esi + 0x38]
        push    ecx
        push    offset g_str_77e9c8
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        mov     edx, dword ptr [esi + 0x3c]
        push    edx
        push    offset g_str_77e9ac
        call    FUN_00563550
        add     esp, 0x44
        push    eax
        call    FUN_00563c80
        mov     eax, dword ptr [esi + 0x40]
        push    eax
        push    offset g_str_77e990
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        mov     ecx, dword ptr [esi + 0x48]
        push    ecx
        push    offset g_str_77e978
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        mov     edx, dword ptr [esi + 0x4c]
        push    edx
        push    offset g_str_77e958
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        mov     eax, dword ptr [esi + 0x50]
        push    eax
        push    offset g_str_77e940
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        mov     ecx, dword ptr [esi + 0x2c]
        push    ecx
        push    offset g_str_77e92c
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        mov     edx, dword ptr [esi + 0x60]
        add     esp, 0x40
        push    edx
        push    offset g_str_77e91c
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        mov     eax, dword ptr [esi + 0x84]
        push    eax
        push    offset g_str_77e908
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        mov     ecx, dword ptr [esi + 0x68]
        push    ecx
        push    offset g_str_77e8ec
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        mov     edx, dword ptr [esi + 0x44]
        push    edx
        push    offset g_str_77e8d4
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        mov     eax, dword ptr [esi + 0x80]
        push    eax
        push    offset g_str_77e8c0
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        mov     ecx, dword ptr [esi + 0x36c]
        push    ecx
        push    offset g_str_77e8ac
        call    FUN_00563550
        add     esp, 0x44
        push    eax
        call    FUN_00563c80
        add     esp, 0x4
        test    ebx, ebx
        mov     eax, ebx
        jnz     L_be3
        mov     eax, offset g_str_77e89c
L_be3:
        push    eax
        push    offset g_str_77e888
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        lea     edx, [esi + 0x6f8]
        push    edx
        push    offset g_str_77e87c
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        add     esp, 0x18
        test    edi, edi
        mov     eax, edi
        jnz     L_c19
        mov     eax, offset g_str_77e870
L_c19:
        push    eax
        mov     eax, dword ptr [esi + 0x374]
        push    eax
        push    offset g_str_77e860
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        add     esp, 0x10
        test    ebp, ebp
        mov     eax, ebp
        jnz     L_c3f
        mov     eax, offset g_str_77e84c
L_c3f:
        push    eax
        push    offset g_str_77e838
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        add     esp, 0xc
        pop     ebp
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x104
        ret
L_c60:
        pop     edi
        pop     esi
        mov     eax, 0x80004005
        pop     ebx
        add     esp, 0x104
        ret
    }
}
