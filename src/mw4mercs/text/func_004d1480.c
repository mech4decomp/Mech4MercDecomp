/*
 * FUN_004d1480 (1218 B) — MLR network subsystem: resource-type dispatcher
 * (instance/data/notation/file/directory/substitutedata) via _stricmp.
 * __thiscall (this=ECX), RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040dca0(void);
extern void __cdecl FUN_004d1f10(void);
extern void __cdecl FUN_004d0690(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_0040de20(void);
extern void __cdecl FUN_004d0100(void);
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_004d24f0(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_0040e450(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_0041de80(void);
extern void __cdecl FUN_00412b30(void);
extern void __cdecl FUN_00412bf0(void);
extern void __cdecl FUN_00412b60(void);
extern void __cdecl FUN_0041dec0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00412670(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_0041d890(void);
extern void __cdecl FUN_0041db30(void);
extern void __cdecl FUN_0041db70(void);
extern void __cdecl FUN_0041dac0(void);
extern void __cdecl FUN_004d19d0(void);

extern void         *g_0076b2ac;   /* IAT: _stricmp */
extern void         *g_0076b308;   /* IAT: strchr */
extern unsigned char g_007dc694;
extern unsigned short g_007dc696;
extern unsigned char g_0076b768;

__declspec(naked) void FUN_004d1480(void)
{
    __asm {
        sub     esp, 0x510
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x51c]
        push    edi
        mov     edi, dword ptr [g_0076b2ac]
        push    0x77253c
        push    esi
        mov     ebx, ecx
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d1517
        push    eax
        mov     eax, dword ptr [esp + 0x528]
        push    0x1
        push    eax
        lea     ecx, [esp + 0xa0]
        call    FUN_0040dca0
        lea     ecx, [esp + 0x44]
        call    FUN_004d1f10
        mov     cl, byte ptr [g_007dc694]
        mov     dx, word ptr [g_007dc696]
        mov     byte ptr [esp + 0xc], cl
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [esp + 0x98]
        mov     word ptr [esp + 0x12], dx
        push    ecx
        lea     edx, [esp + 0x4c]
        push    edx
        mov     ecx, ebx
        call    FUN_004d0690
        lea     ecx, [esp + 0x44]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x94]
        call    FUN_0040de20
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x510
        ret     0x8
L_4d1517:
        push    0x772534
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d1558
        lea     ecx, [esp + 0x44]
        call    FUN_004d1f10
        mov     eax, dword ptr [esp + 0x524]
        push    eax
        lea     ecx, [esp + 0x48]
        push    ecx
        mov     ecx, ebx
        call    FUN_004d0100
        lea     ecx, [esp + 0x44]
        call    FUN_004d21c0
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x510
        ret     0x8
L_4d1558:
        push    0x772520
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d1611
        mov     edx, dword ptr [esp + 0x524]
        push    eax
        push    0x1
        push    edx
        lea     ecx, [esp + 0x50]
        call    FUN_0040dca0
        mov     eax, dword ptr [esp + 0x44]
        push    0x0
        push    eax
        lea     ecx, [esp + 0x9c]
        call    FUN_004d2000
        mov     eax, dword ptr [esp + 0xd0]
        test    eax, eax
        jz      L_4d15b8
        mov     eax, dword ptr [esp + 0xb0]
        test    eax, eax
        jbe     L_4d15b8
        lea     ecx, [esp + 0x94]
        call    FUN_004d24f0
        test    al, al
        jnz     L_4d15f0
L_4d15b8:
        push    0x0
        lea     ecx, [esp + 0x18]
        call    FUN_0041ee70
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     ecx, [esp + 0x48]
        call    FUN_0040e450
        lea     edx, [esp + 0x50]
        push    edx
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x9c]
        call    FUN_004d2680
        lea     ecx, [esp + 0x14]
        call    FUN_0041ef60
L_4d15f0:
        lea     ecx, [esp + 0x94]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x44]
        call    FUN_0040de20
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x510
        ret     0x8
L_4d1611:
        push    0x77252c
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d16d2
        mov     ecx, dword ptr [esp + 0x524]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x1c]
        call    FUN_0041de80
        mov     edx, dword ptr [esp + 0x38]
        push    0x0
        push    edx
        lea     ecx, [esp + 0x9c]
        call    FUN_004d2000
        mov     eax, dword ptr [esp + 0xd0]
        test    eax, eax
        jz      L_4d166f
        mov     eax, dword ptr [esp + 0xb0]
        test    eax, eax
        jbe     L_4d166f
        lea     ecx, [esp + 0x94]
        call    FUN_004d24f0
        test    al, al
        jnz     L_4d16b1
L_4d166f:
        lea     ecx, [esp + 0xe4]
        call    FUN_00412b30
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0xe8]
        call    FUN_00412bf0
        lea     ecx, [esp + 0xe4]
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        lea     ecx, [esp + 0x9c]
        call    FUN_004d2680
        lea     ecx, [esp + 0xe4]
        call    FUN_00412b60
L_4d16b1:
        lea     ecx, [esp + 0x94]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x14]
        call    FUN_0041dec0
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x510
        ret     0x8
L_4d16d2:
        push    0x77254c
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d1896
        mov     eax, dword ptr [esp + 0x524]
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412570
        mov     ecx, dword ptr [esp + 0xc]
        push    0x5c
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_00412670
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L_4d172b
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_4d172b
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_4d172b:
        mov     edx, dword ptr [esp + 0xc]
        push    0x772548
        push    edx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        mov     eax, dword ptr [esp + 0x10]
        push    0x0
        push    eax
        lea     ecx, [esp + 0xec]
        call    FUN_0041d890
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L_4d176c
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_4d176c
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_4d176c:
        lea     ecx, [esp + 0xe4]
        call    FUN_0041db30
        test    eax, eax
        jz      L_4d185b
L_4d1780:
        mov     ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        mov     edx, dword ptr [esp + 0x10]
        push    0x0
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_0041de80
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L_4d17ba
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_4d17ba
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_4d17ba:
        mov     eax, dword ptr [esp + 0x38]
        push    0x0
        push    eax
        lea     ecx, [esp + 0x4c]
        call    FUN_004d2000
        mov     eax, dword ptr [esp + 0x80]
        test    eax, eax
        jz      L_4d17ea
        mov     eax, dword ptr [esp + 0x60]
        test    eax, eax
        jbe     L_4d17ea
        lea     ecx, [esp + 0x44]
        call    FUN_004d24f0
        test    al, al
        jnz     L_4d1829
L_4d17ea:
        lea     ecx, [esp + 0x94]
        call    FUN_00412b30
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     ecx, [esp + 0x98]
        call    FUN_00412bf0
        lea     edx, [esp + 0x94]
        push    edx
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x4c]
        call    FUN_004d2680
        lea     ecx, [esp + 0x94]
        call    FUN_00412b60
L_4d1829:
        lea     ecx, [esp + 0xe4]
        call    FUN_0041db70
        lea     ecx, [esp + 0x44]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x14]
        call    FUN_0041dec0
        lea     ecx, [esp + 0xe4]
        call    FUN_0041db30
        test    eax, eax
        jnz     L_4d1780
L_4d185b:
        lea     ecx, [esp + 0xe4]
        call    FUN_0041dac0
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      L_4d1936
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_4d1936
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x510
        ret     0x8
L_4d1896:
        push    0x7724e8
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d1936
        mov     cl, byte ptr [g_0076b768]
        mov     byte ptr [esp + 0x11c], cl
        mov     ecx, 0xff
        lea     edi, [esp + 0x11d]
        rep     stosd
        stosw
        or      ecx, 0xffffffff
        stosb
        mov     edi, dword ptr [esp + 0x524]
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        lea     edx, [esp + 0x11c]
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        lea     ecx, [esp + 0x11c]
        push    0x2c
        push    ecx
        call    dword ptr [g_0076b308]
        mov     esi, eax
        add     esp, 0x8
        test    esi, esi
        jz      L_4d1936
        lea     ecx, [esp + 0x44]
        mov     byte ptr [esi], 0
        call    FUN_004d1f10
        inc     esi
        push    esi
        lea     edx, [esp + 0x120]
        push    edx
        lea     eax, [esp + 0x4c]
        push    eax
        mov     ecx, ebx
        call    FUN_004d19d0
        lea     ecx, [esp + 0x44]
        call    FUN_004d21c0
L_4d1936:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x510
        ret     0x8
    }
}
