/*
 * FUN_00665670 (667 B) — ABL transform/color builder. __thiscall-style
 * (ESI = this). Computes interpolated float vectors via virtual calls
 * (offsets 0x20/0x24/0x28/0x34/0x38/0x3c/0x44/0x11c/0x120/0xe4) and FPU.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f268c;
extern float g_0076c5b0;
extern char __cdecl FUN_00415230(int);
extern void * __cdecl FUN_005fbb00(void *);

__declspec(naked) void FUN_00665670(void)
{
    __asm {
        sub     esp, 0x30
        push    ebx
        mov     bl, byte ptr [esp + 0x40]
        cmp     bl, 0x1
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x40]
        push    edi
        jnz     L_665690
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x11c]
        mov     bl, al
L_665690:
        cmp     byte ptr [esp + 0x50], 0x1
        jnz     L_6656a5
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x120]
        mov     byte ptr [esp + 0x50], al
L_6656a5:
        test    bl, bl
        jnz     L_6656bd
        mov     al, byte ptr [esp + 0x50]
        test    al, al
        jnz     L_6656bd
        mov     al, byte ptr [esp + 0x54]
        test    al, al
        jz      L_665903
L_6656bd:
        mov     ebp, dword ptr [esp + 0x48]
        test    ebp, ebp
        jz      L_6656ff
        jle     L_66570e
        cmp     ebp, 0x2
        jg      L_66570e
        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax + 0x44]
        mov     edi, eax
        test    edi, edi
        jz      L_6656f1
        mov     eax, dword ptr [g_007f268c]
        mov     ecx, dword ptr [edi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_66570e
        mov     eax, edi
        jmp     L_665706
L_6656f1:
        cmp     ebp, 0x2
        jnz     L_66570e
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x3c]
        jmp     L_665706
L_6656ff:
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x3c]
L_665706:
        test    eax, eax
        jnz     L_6657f7
L_66570e:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x34]
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0x9c]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0x1c], ecx
        mov     dword ptr [esp + 0x20], edx
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        mov     dword ptr [esp + 0x24], eax
        call    dword ptr [edx + 0x3c]
        mov     eax, dword ptr [eax + 0xd8]
        fld     dword ptr [eax + 0x8c]
        mov     ecx, dword ptr [eax + 0x9c]
        fsubr   dword ptr [esp + 0x1c]
        mov     edx, dword ptr [eax + 0xac]
        fld     dword ptr [esp + 0x20]
        add     eax, 0x80
        cmp     bl, 0x1
        mov     dword ptr [esp + 0x38], ecx
        fsub    dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x3c], edx
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x24]
        fsub    dword ptr [esp + 0x3c]
        fstp    dword ptr [esp + 0x18]
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x14]
        fadd    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x18]
        fadd    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x18]
        jnz     L_6657b4
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
L_6657b4:
        cmp     byte ptr [esp + 0x50], 0x1
        jnz     L_6657c9
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
L_6657c9:
        cmp     byte ptr [esp + 0x54], 0x1
        jnz     L_665903
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x38]
        test    eax, eax
        jz      L_665903
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x28]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x30
        ret
L_6657f7:
        lea     edx, [esp + 0x34]
        push    edx
        mov     ecx, eax
        call    FUN_005fbb00
        cmp     bl, 0x1
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x28], ecx
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [esp + 0x2c], edx
        mov     eax, dword ptr [eax + 0x8]
        mov     dword ptr [esp + 0x30], eax
        jnz     L_665828
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
L_665828:
        cmp     byte ptr [esp + 0x50], 0x1
        jnz     L_6658e5
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0xe4]
        fst     dword ptr [esp + 0x50]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_6658d7
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        mov     eax, dword ptr [eax + 0xd8]
        fld     dword ptr [eax + 0x8c]
        mov     ecx, dword ptr [eax + 0xac]
        mov     edx, dword ptr [esp + 0x2c]
        fld     st(0)
        fsub    dword ptr [esp + 0x28]
        add     eax, 0x80
        mov     dword ptr [esp + 0x3c], ecx
        mov     dword ptr [esp + 0x20], edx
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x3c]
        fsub    dword ptr [esp + 0x30]
        fld     dword ptr [esp + 0x50]
        fcomp   dword ptr [g_0076c5b0]
        fxch    st(1)
        fnstsw  ax
        test    ah, 0x1
        jz      L_6658b3
        fadd    st(0), st(1)
        fstp    dword ptr [esp + 0x1c]
        fstp    st(0)
        fld     dword ptr [esp + 0x3c]
        fsub    dword ptr [esp + 0x10]
        jmp     L_6658c3
L_6658b3:
        fsub    st(0), st(1)
        fstp    dword ptr [esp + 0x1c]
        fstp    st(0)
        fld     dword ptr [esp + 0x3c]
        fadd    dword ptr [esp + 0x10]
L_6658c3:
        mov     eax, dword ptr [esi]
        fstp    dword ptr [esp + 0x24]
        push    0x0
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        jmp     L_6658e5
L_6658d7:
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [esp + 0x2c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
L_6658e5:
        cmp     byte ptr [esp + 0x54], 0x1
        jnz     L_665903
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x38]
        test    eax, eax
        jz      L_665903
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x28]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x28]
L_665903:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x30
        ret
    }
}
