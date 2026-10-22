/*
 * FUN_006e5270 (986 B) — Dialog/control population routine.
 * Uses IAT function pointers (GetDlgItem/SendMessageA) + several globals.
 * No vtable reconstruction, no .txt2. In scope.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b5a4;   /* IAT: GetDlgItem */
extern void *g_76b560;   /* IAT: SendMessageA */
extern int g_7b7df0;
extern int g_841768;
extern int g_7b4678;
extern int g_7b4674;
extern int g_7b7dfc;
extern int g_7b7e00;
extern int g_7b7e04;
extern int g_7b7e08;
extern int g_7b7e7c;

extern void __cdecl FUN_00404870(void);
extern void __cdecl FUN_0072d830(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void __cdecl FUN_006e5270(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x20]
        push    edi
        mov     edi, dword ptr [g_76b5a4]
        push    0x40f
        push    esi
        call    edi
        mov     ebx, dword ptr [g_76b560]
        push    0x0
        push    0x0
        push    0x147
        push    eax
        call    ebx
        push    0x0
        push    0x0
        push    0x0
        mov     dword ptr [g_7b7df0], eax
        call    FUN_00404870
        push    0x0
        push    0x0
        push    0x184
        push    0x3ee
        push    esi
        call    edi
        push    eax
        call    ebx
        mov     eax, dword ptr [g_841768]
        push    0x116
        push    eax
        call    FUN_0072d830
        push    eax
        push    0x0
        push    0x181
        push    0x3ee
        push    esi
        call    edi
        push    eax
        call    ebx
        mov     ecx, dword ptr [g_841768]
        push    0xef
        push    ecx
        call    FUN_0072d830
        push    eax
        push    0x1
        push    0x181
        push    0x3ee
        push    esi
        call    edi
        push    eax
        call    ebx
        mov     edx, dword ptr [g_841768]
        push    0x51e
        push    edx
        call    FUN_0072d830
        push    eax
        push    0x2
        push    0x181
        push    0x3ee
        push    esi
        call    edi
        push    eax
        call    ebx
        mov     ebp, 0x3
L_006e532f:
        push    0x76cb8c
        push    ebp
        push    0x181
        push    0x3ee
        push    esi
        call    edi
        push    eax
        call    ebx
        inc     ebp
        cmp     ebp, 0xa
        jl      L_006e532f
        mov     eax, dword ptr [g_7b4678]
        cmp     eax, -0x1
        jle     L_006e539e
        cmp     eax, 0x5
        jge     L_006e539e
        shl     eax, 0x8
        add     eax, 0x841258
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412570
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        push    0xa
        push    0x181
        push    0x3ee
        push    esi
        call    edi
        push    eax
        call    ebx
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L_006e539e
        mov     cl, byte ptr [eax + -0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_006e539e
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_006e539e:
        mov     eax, dword ptr [g_7b4674]
        cmp     eax, -0x1
        jle     L_006e53f1
        cmp     eax, 0xa
        jge     L_006e53f1
        shl     eax, 0x8
        add     eax, 0x840858
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412570
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        push    0xb
        push    0x181
        push    0x3ee
        push    esi
        call    edi
        push    eax
        call    ebx
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L_006e53f1
        mov     cl, byte ptr [eax + -0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_006e53f1
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_006e53f1:
        cmp     dword ptr [g_7b7dfc], 0x1
        mov     ebp, 0x2
        jnz     L_006e5451
        mov     edx, dword ptr [g_841768]
        push    0x61e
        push    edx
        call    FUN_0072d830
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412570
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        push    0xc
        push    0x181
        push    0x3ee
        push    esi
        mov     ebp, 0x3
        call    edi
        push    eax
        call    ebx
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L_006e5451
        mov     cl, byte ptr [eax + -0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_006e5451
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_006e5451:
        cmp     dword ptr [g_7b7e00], 0x1
        jnz     L_006e54aa
        mov     ecx, dword ptr [g_841768]
        push    0x61f
        push    ecx
        call    FUN_0072d830
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412570
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        lea     eax, [ebp + 0xa]
        push    eax
        push    0x181
        push    0x3ee
        push    esi
        inc     ebp
        call    edi
        push    eax
        call    ebx
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L_006e54aa
        mov     cl, byte ptr [eax + -0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_006e54aa
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_006e54aa:
        cmp     dword ptr [g_7b7e04], 0x1
        jnz     L_006e5502
        mov     eax, dword ptr [g_841768]
        push    0x611
        push    eax
        call    FUN_0072d830
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412570
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        lea     eax, [ebp + 0xa]
        push    eax
        push    0x181
        push    0x3ee
        push    esi
        inc     ebp
        call    edi
        push    eax
        call    ebx
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L_006e5502
        mov     cl, byte ptr [eax + -0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_006e5502
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_006e5502:
        push    0x76b768
        lea     ecx, [esp + 0x28]
        call    FUN_00412570
        mov     eax, dword ptr [g_7b7e08]
        test    eax, eax
        mov     dword ptr [esp + 0x10], 0x0
        jle     L_006e5627
        add     ebp, 0xa
        mov     dword ptr [esp + 0x1c], ebp
L_006e552c:
        mov     edx, dword ptr [g_7b7e7c]
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [edx + eax*0x4]
        push    ecx
        lea     ecx, [esp + 0x28]
        call    FUN_00412780
        mov     ebp, dword ptr [esp + 0x24]
        mov     eax, 0x76b768
L_006e554c:
        mov     dl, byte ptr [ebp]
        mov     cl, dl
        cmp     dl, byte ptr [eax]
        jnz     L_006e5571
        test    cl, cl
        jz      L_006e556d
        mov     dl, byte ptr [ebp + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [eax + 0x1]
        jnz     L_006e5571
        add     ebp, 0x2
        add     eax, 0x2
        test    cl, cl
        jnz     L_006e554c
L_006e556d:
        xor     eax, eax
        jmp     L_006e5576
L_006e5571:
        sbb     eax, eax
        sbb     eax, -0x1
L_006e5576:
        test    eax, eax
        jnz     L_006e5610
        mov     eax, dword ptr [g_841768]
        push    0x544
        push    eax
        call    FUN_0072d830
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00412570
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x18]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_004125e0
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      L_006e55d4
        mov     cl, byte ptr [eax + -0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_006e55d4
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_006e55d4:
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jz      L_006e55ef
        mov     cl, byte ptr [eax + -0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_006e55ef
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_006e55ef:
        mov     ecx, dword ptr [esp + 0x1c]
        mov     eax, ecx
        inc     ecx
        mov     dword ptr [esp + 0x1c], ecx
        mov     ecx, dword ptr [esp + 0x24]
        push    ecx
        push    eax
        push    0x181
        push    0x3ee
        push    esi
        call    edi
        push    eax
        call    ebx
L_006e5610:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [g_7b7e08]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [esp + 0x10], eax
        jl      L_006e552c
L_006e5627:
        mov     eax, dword ptr [esp + 0x24]
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        jz      L_006e5646
        mov     cl, byte ptr [eax + -0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_006e5646
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_006e5646:
        add     esp, 0x10
        ret
    }
}
