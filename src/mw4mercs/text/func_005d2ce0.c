/*
 * FUN_005d2ce0 (821 B) — __thiscall, RET 8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00684fb0(void);
extern void __stdcall FUN_004084e0(void *p);
extern void __stdcall FUN_005d9c70(void *p);
extern void __stdcall FUN_005d9500(void);
extern double __stdcall FUN_00707e70(int);
extern void __stdcall FUN_005c5300(void);
extern void __stdcall FUN_005dcd00(void *p);
extern void __stdcall FUN_00419480(void *p);
extern void __stdcall FUN_00686140(void);
extern void __stdcall FUN_00416110(void);

__declspec(naked) void __stdcall FUN_005d2ce0(void)
{
    

extern int DAT_007f2438;
extern int DAT_0077431c;
extern int DAT_007f24cc;
__asm {
push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x3c
        mov     al, byte ptr [ebp + 0xc]
        test    al, al
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        jz      L_cfd
        mov     eax, dword ptr [esi]
        call    dword ptr [eax + 0x1c4]
L_cfd:
        mov     edi, dword ptr [esi + 0x368]
        xor     ebx, ebx
        cmp     edi, ebx
        jz      L_d19
        mov     ecx, edi
        call    FUN_00684fb0
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_d19:
        mov     edi, dword ptr [esi + 0x45c]
        cmp     edi, ebx
        mov     ecx, dword ptr [ebp + 0x8]
        mov     dword ptr [esi + 0x368], ecx
        jz      L_d52
        mov ecx, dword ptr [DAT_007f2438]
        push    edi
        call    FUN_005d9c70
        cmp     edi, ebx
        jz      L_d4c
        mov     ecx, edi
        call    FUN_005d9500
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_d4c:
        mov     dword ptr [esi + 0x45c], ebx
L_d52:
        cmp     dword ptr [ebp + 0x8], ebx
        jnz     L_e39
        cmp     dword ptr [esi + 0x364], ebx
        jnz     L_300c
        push    ebx
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x10]
        push    edx
        push    eax
        push    ebx
        push    0x7
        mov     ecx, esi
        call    FUN_005c5300
        push    eax
        mov     ecx, esi
        mov     dword ptr [eax + 0x14], ebx
        call    FUN_005dcd00
        push    ebx
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
        push    ecx
        push    edx
        push    ebx
        push    0x8
        mov     ecx, esi
        call    FUN_005c5300
        push    eax
        mov     ecx, esi
        mov     dword ptr [eax + 0x14], ebx
        call    FUN_005dcd00
        push    ebx
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        push    ebx
        push    0x3
        mov     ecx, esi
        call    FUN_005c5300
        push    eax
        mov     ecx, esi
        call    FUN_005dcd00
        mov     edx, dword ptr [esi]
        push    ebx
        lea     eax, [esp + 0x14]
        push    eax
        push    ebx
        lea     ecx, [esp + 0x30]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x20], 0xbf800000
        mov     dword ptr [esp + 0x24], 0xbf800000
        mov     dword ptr [esp + 0x28], 0xbf800000
        mov     dword ptr [esp + 0x34], 0xbf800000
        mov     dword ptr [esp + 0x38], 0xbf800000
        mov     dword ptr [esp + 0x3c], 0xbf800000
        call    dword ptr [edx + 0x1d0]
        mov     edx, dword ptr [esi]
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 0x140]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
L_e39:
        mov     eax, dword ptr [esi + 0x35c]
        mov     ecx, dword ptr [eax + 0xd8]
        add     ecx, 0x80
        push    ecx
        lea     ecx, [esp + 0x28]
        call    FUN_00419480
        mov     ecx, dword ptr [esi + 0x364]
        cmp     ecx, ebx
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x2c]
        mov     dword ptr [esp + 0x30], edx
        mov     dword ptr [esp + 0x38], eax
        mov     dword ptr [esp + 0x34], 0x0
        jz      L_e8a
        mov     edx, dword ptr [ecx]
        mov     edi, dword ptr [esi]
        call    dword ptr [edx + 0x34]
        push    ecx
        mov     ecx, esi
        fstp    dword ptr [esp]
        call    dword ptr [edi + 0x140]
L_e8a:
        mov     edi, dword ptr [esi + 0x35c]
        mov     eax, dword ptr [edi + 0x78]
        lea     ecx, [edi + 0x78]
        call    dword ptr [eax + 0x4]
        cmp     dword ptr [esi + 0x3d4], ebx
        jz      L_eb9
        fld     dword ptr [eax + 0x2bc]
        fmul    dword ptr [esi + 0x3a8]
        fmul dword ptr [DAT_0077431c]
        fstp    dword ptr [esp + 0x10]
        jmp     L_ec3
L_eb9:
        mov     ecx, dword ptr [edi + 0x440]
        mov     dword ptr [esp + 0x10], ecx
L_ec3:
        mov     edi, dword ptr [esi + 0x368]
        mov     al, byte ptr [edi + 0x3c]
        test    al, al
        mov     ebx, dword ptr [esp + 0x10]
        jz      L_f17
        push    0x0
        call    FUN_00707e70
        fsub    qword ptr [esi + 0xe4]
        mov     edx, dword ptr [edi]
        mov     dword ptr [esp + 0x24], edx
        mov     eax, dword ptr [edi + 0x4]
        mov     dword ptr [esp + 0x28], eax
        mov     ecx, dword ptr [edi + 0x8]
        lea     edx, [esp + 0xe]
        push    edx
        mov     dword ptr [esp + 0x30], ecx
        lea     eax, [esp + 0x13]
        push    eax
        lea     ecx, [esp + 0x44]
        push    ecx
        push    ebx
        sub     esp, 0x8
        lea     edx, [esp + 0x3c]
        fstp    qword ptr [esp]
        push    edx
        mov     ecx, edi
        call    FUN_00686140
L_f17:
        mov     al, byte ptr [edi + 0x3c]
        test    al, al
        jz      L_f58
        push    0x0
        call    FUN_00707e70
        fsub    qword ptr [esi + 0xe4]
        lea     eax, [esp + 0xe]
        push    eax
        lea     ecx, [esp + 0x13]
        push    ecx
        lea     edx, [esp + 0x44]
        push    edx
        push    ebx
        sub     esp, 0x8
        lea     eax, [esp + 0x48]
        fstp    qword ptr [esp]
        push    eax
        mov     ecx, edi
        call    FUN_00686140
        mov     al, byte ptr [edi + 0x3c]
        test    al, al
        jnz     L_fee
L_f58:
        mov     edx, dword ptr [esi]
        push    0x0
        lea     eax, [esp + 0x28]
        push    eax
        push    0x0
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x34], 0xbf800000
        mov     dword ptr [esp + 0x38], 0xbf800000
        mov     dword ptr [esp + 0x3c], 0xbf800000
        mov     dword ptr [esp + 0x20], 0xbf800000
        mov     dword ptr [esp + 0x24], 0xbf800000
        mov     dword ptr [esp + 0x28], 0xbf800000
        call    dword ptr [edx + 0x1d0]
        push    0x0
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x10]
        mov ecx, dword ptr [DAT_007f24cc]
        call    FUN_00416110
        test    eax, eax
        jz      L_fc6
        mov     dword ptr [eax + 0x4], 0x8
        mov     byte ptr [eax], 0x0
        jmp     L_fc8
L_fc6:
        xor     eax, eax
L_fc8:
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax + 0xc], ecx
        push    eax
        mov     ecx, esi
        mov     dword ptr [eax + 0x14], 0x0
        call    FUN_005dcd00
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
L_fee:
        cmp     dword ptr [edi + 0x68], 0x6
        jz      L_ffe
        mov     dword ptr [esi + 0x3d0], 0x0
L_ffe:
        mov     byte ptr [esi + 0x459], 0x0
        mov     byte ptr [esi + 0x4ac], 0x0
L_300c:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }


}
