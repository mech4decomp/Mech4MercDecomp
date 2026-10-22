/*
 * FUN_005cf880 (1086 B) — __thiscall
 * Complex collision/visibility check with FPU math and vtable dispatch.
 */

__declspec(naked) void func_005cf880(void)
{
    

extern void __cdecl FUN_005dce9f(void);
extern int DAT_007f23dc;
extern void __cdecl FUN_1004193fc(void);
extern int DAT_00773464;
extern int DAT_007f22b8;
extern void __cdecl FUN_00415230(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007b220c;
extern void __cdecl FUN_10041c3b0(void);
extern void __cdecl FUN_10041fbc2(void);
extern void __cdecl FUN_10041c603(void);
extern int DAT_0076c5b0;
extern int DAT_0076d598;
extern int DAT_00787ec4;
extern void __cdecl FUN_1005ce853(void);
__asm {
sub     esp, 0x64
        push    ebx
        push    ebp
        push    esi
        mov     esi, [esp + 0x74]
        push    edi
        mov     edi, [esp + 0x7c]
        push    edi
        mov     ebp, ecx
        push    esi
        mov     byte ptr [edi], 0x1
        call FUN_005dce9f
        mov     eax, [ebp + 0x170]
        test    eax, eax
        jz      L_e5
        mov     cl, byte ptr [eax + 0xdc]
        test    cl, cl
        jnz     L_e5
        cmp byte ptr [DAT_007f23dc], 0x1
        jnz     L_e5
        mov     ecx, [esi + 0x4]
        xor     dl, dl
        test    ecx, ecx
        jbe     L_caf
        mov     eax, [esi]
        add     eax, 0x8
    L_ca:
        mov     ebx, [eax]
        cmp     byte ptr [ebx + 0xdc], 0x1
        jnz     L_d7
        mov     dl, 0x1
    L_d7:
        add     eax, 0x38
        dec     ecx
        jnz     L_ca
        test    dl, dl
        jz      L_caf
    L_e5:
        mov     eax, [ebp + 0x450]
        test    eax, eax
        jnz     L_caf
        mov     eax, [ebp + 0x35c]
        mov     eax, [eax + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x3c]
        call FUN_1004193fc
        fld     dword ptr [esp + 0x3c]
        fcomp dword ptr [DAT_00773464]
        fnstsw ax
        test    ah, 0x41
        jnz     L_caf
        mov     eax, [ebp + 0x41c]
        test    eax, eax
        jz      L_936
        cmp     eax, 0x1
        jnz     L_caf
    L_936:
        mov eax, dword ptr [DAT_007f22b8]
        mov     ecx, [ebp + 0x4]
        push    eax
        call FUN_00415230
        test    al, al
        jz      L_98d
        mov     eax, [esi + 0x4]
        test    eax, eax
        jbe     L_98d
        mov     esi, [esi]
        add     esi, 0x8
        mov     ebx, eax
    L_956:
        mov     ecx, [ebp + 0x35c]
        mov     edx, [ecx]
        mov     edi, [esi]
        call    dword ptr [edx + 0x60]
        mov     edx, eax
        mov     eax, [edi]
        mov     ecx, edi
        mov     [esp + 0x10], edx
        call    dword ptr [eax + 0x60]
        mov     ecx, [esp + 0x10]
        cmp     ecx, eax
        jnz     L_97f
        mov     edx, [esp + 0x7c]
        mov     byte ptr [edx], 0x0
    L_97f:
        add     esi, 0x38
        dec     ebx
        jnz     L_956
        mov     esi, [esp + 0x78]
        mov     edi, [esp + 0x7c]
    L_98d:
        mov     eax, [ebp + 0xe0]
        cmp     dword ptr [eax + 0x14], 0x1
        jnz     L_9a5
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x64
        ret     0x8
    L_9a5:
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     ecx, [edx + 0x18]
        xor     ecx, 0x85739531
        lea     eax, [edx + 0x18]
        jz      L_9ea
        mov     eax, [eax]
        mov     edx, [esi + 0x4]
        xor     eax, 0x85739531
        xor     ecx, ecx
        test    edx, edx
        jbe     L_9ea
        mov     edi, [eax + 0x170]
        mov     esi, [esi]
    L_9d9:
        cmp     edi, [esi + 0x8]
        jz      L_a2d
        inc     ecx
        add     esi, 0x38
        cmp     ecx, edx
        jc      L_9d9
        mov     edi, [esp + 0x7c]
    L_9ea:
        mov ecx, dword ptr [DAT_007b220c]
        push    ecx
        lea     edx, [esp + 0x24]
        push    edx
        lea     ebx, [ebp + 0x36c]
        push    ebx
        mov     dword ptr [esp + 0x2c], 0xbf800000
        mov     dword ptr [esp + 0x30], 0xbf800000
        mov     dword ptr [esp + 0x34], 0xbf800000
        call FUN_10041c3b0
        add     esp, 0xc
        test    al, al
        jz      L_a69
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x64
        ret     0x8
    L_a2d:
        mov     ecx, [ebp + 0x35c]
        mov     edx, [ecx]
        call    dword ptr [edx + 0x60]
        mov     ebx, eax
        mov     eax, [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x60]
        cmp     ebx, eax
        jnz     L_a4c
        mov     ecx, [esp + 0x7c]
        mov     byte ptr [ecx], 0x0
    L_a4c:
        mov     eax, [esi + 0x8]
        mov     edx, [ebp]
        push    eax
        push    0x0
        mov     ecx, ebp
        call    dword ptr [edx + 0x180]
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x64
        ret     0x8
    L_a69:
        mov     eax, [ebp + 0x3d4]
        test    eax, eax
        jnz     L_caf
        mov     eax, [ebp + 0x35c]
        mov     esi, [eax + 0xd8]
        push    0x2
        push    0x0
        add     esi, 0x80
        mov     ecx, 0xc
        lea     edi, [esp + 0x4c]
        push    0x1
        rep     movsd
        push    0x7b8d18
        lea     ecx, [esp + 0x54]
        call FUN_10041fbc2
        lea     ecx, [esp + 0x44]
        push    ecx
        push    ebx
        lea     ecx, [esp + 0x1c]
        call FUN_10041c603
        fld     dword ptr [ebp + 0x3b8]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw ax
        test    ah, 0x1
        jz      L_ade
        fld     dword ptr [esp + 0x14]
        fchs
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x1c]
        fchs
        fstp    dword ptr [esp + 0x1c]
    L_ade:
        fld     dword ptr [esp + 0x1c]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw ax
        test    ah, 0x1
        jnz     L_b10
        fld     dword ptr [esp + 0x14]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw ax
        test    ah, 0x1
        jnz     L_b10
        mov     dword ptr [esp + 0x1c], 0x3f800000
    L_b10:
        fld     dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x1c]
        fpatan
        fcom dword ptr [DAT_0076c5b0]
        fnstsw ax
        test    ah, 0x1
        jz      L_b2d
        fmul dword ptr [DAT_0076d598]
    L_b2d:
        fcomp dword ptr [DAT_00787ec4]
        fnstsw ax
        test    ah, 0x41
        jnz     L_b48
        mov     al, byte ptr [ebp + 0x3ce]
        test    al, al
        jz      L_cb2
    L_b48:
        mov     eax, [esp + 0x78]
        mov     ecx, [eax + 0x4]
        xor     edi, edi
        test    ecx, ecx
        mov     [esp + 0x78], ecx
        jbe     L_cb2
        mov     ecx, [ebp + 0x35c]
        mov     ecx, [ecx + 0xd8]
        mov     esi, [eax]
    L_b6b:
        mov     edx, [ecx + 0x9c]
        fld     dword ptr [ecx + 0x8c]
        mov     eax, [ecx + 0xac]
        mov     [esp + 0x30], edx
        mov     edx, [esi + 0x8]
        mov     [esp + 0x34], eax
        mov     eax, [edx + 0xd8]
        mov     edx, [edx + 0x10]
        fld     dword ptr [eax + 0x8c]
        mov     ebx, [eax + 0x9c]
        add     eax, 0x80
        mov     eax, [eax + 0x2c]
        and     edx, 0x60000
        cmp     edx, 0x60000
        mov     [esp + 0x24], ebx
        mov     [esp + 0x28], eax
        jnz     L_bd0
        mov     eax, [ebp + 0x35c]
        mov     eax, [eax + 0x4]
        cmp     dword ptr [eax], 0x429
        jz      L_c5c
    L_bd0:
        fsubrp  st(1), st
        fld     dword ptr [esp + 0x24]
        fsub    dword ptr [esp + 0x30]
        fld     dword ptr [esp + 0x28]
        fsub    dword ptr [esp + 0x34]
        fld     dword ptr [ebp + 0x3b8]
        fcomp dword ptr [DAT_0076c5b0]
        fld     dword ptr [ecx + 0x88]
        fnstsw ax
        test    ah, 0x1
        jz      L_c0f
        fchs
        fld     dword ptr [ecx + 0x98]
        fchs
        fld     dword ptr [ecx + 0xa8]
        fchs
        jmp     L_c1b
    L_c0f:
        fld     dword ptr [ecx + 0x98]
        fld     dword ptr [ecx + 0xa8]
    L_c1b:
        fxch    st(3)
        fmul    st, st(3)
        fxch    st(4)
        fmul    st, st(1)
        faddp   st(4), st
        fxch    st(1)
        fmul    st, st(4)
        faddp   st(3), st
        fxch    st(2)
        fcomp dword ptr [DAT_0076c5b0]
        fstp    st(0)
        fnstsw ax
        fstp    st(0)
        test    ah, 0x41
        fstp    st(0)
        jz      L_c6c
        mov     eax, [esp + 0x78]
        inc     edi
        add     esi, 0x38
        cmp     edi, eax
        jc      L_b6b
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x64
        ret     0x8
    L_c5c:
        pop     edi
        fstp    st(0)
        pop     esi
        fstp    st(0)
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x64
        ret     0x8
    L_c6c:
        mov     esi, [esi + 0x8]
        push    esi
        mov     ecx, ebp
        call FUN_1005ce853
        test    al, al
        jz      L_c8e
        mov     ecx, [esp + 0x7c]
        pop     edi
        pop     esi
        pop     ebp
        mov     byte ptr [ecx], 0x1
        mov     al, 0x1
        pop     ebx
        add     esp, 0x64
        ret     0x8
    L_c8e:
        mov     edx, [ebp]
        push    esi
        push    0x0
        mov     ecx, ebp
        call    dword ptr [edx + 0x180]
        mov     eax, [esp + 0x7c]
        pop     edi
        pop     esi
        pop     ebp
        mov     byte ptr [eax], 0x0
        mov     al, 0x1
        pop     ebx
        add     esp, 0x64
        ret     0x8
    L_caf:
        mov     byte ptr [edi], 0x0
    L_cb2:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x64
        ret     0x8
    }


}

