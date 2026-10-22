/*
 * FUN_0067DDF0 (1164 B) — __thiscall (ECX = this), RET 4 (one float param).
 * Weapon/ammo state update with heavy call chain and FPU timing math.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00680ac0(void);
extern void __cdecl FUN_0067f7f0(void);
extern void __cdecl FUN_00680190(void);
extern void __cdecl FUN_0041ef30(void);
extern void __cdecl FUN_0041ec50(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_0062d920(void);
extern void __cdecl FUN_0069e250(void);
extern void __cdecl FUN_0062dcd0(void);
extern void __cdecl FUN_006ad2e0(void);
extern void __cdecl FUN_00417ad0(void);
extern void __cdecl FUN_0041ea10(void);
extern void __cdecl FUN_004ce190(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_0041acb0(void);
extern void __cdecl FUN_004e27f0(void);
extern void __cdecl FUN_0041ee20(void);

extern int _DAT_007dab40;    /* 0x007dab40 */
extern int _DAT_007dab44;    /* 0x007dab44 */
extern int _DAT_007db090;    /* 0x007db090 */
extern int _DAT_007db094;    /* 0x007db094 */
extern int _DAT_007f2290;    /* 0x007f2290 */
extern float _DAT_0076d064;  /* 0x0076d064 */
extern double _DAT_0077b648; /* 0x0077b648 */
extern float _DAT_007987f0;  /* 0x007987f0 */

__declspec(naked) void __fastcall FUN_0067ddf0(void)
{
    __asm {
        sub     esp, 0x88
        fld     dword ptr [esp + 0x8c]
        mov     edx, dword ptr [_DAT_007dab40]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        fadd    dword ptr [edi + 4]
        mov     ecx, dword ptr [_DAT_007dab44]
        fstp    dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [edi + 4], eax
        mov     eax, dword ptr [ecx]
        xor     eax, edx
        mov     esi, dword ptr [eax + 0x18]
        xor     esi, 0x85739531
        mov     eax, dword ptr [esi + 0x178]
        mov     bl, byte ptr [eax + 0x5ac]
        test    bl, bl
        jnz     l_67e04b
        mov     ecx, dword ptr [ecx]
        xor     ecx, edx
        mov     edx, dword ptr [ecx]
        xor     edx, 0x85739531
        jz      l_67e26f
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [_DAT_007db090]
        xor     ecx, ecx
        mov     cl, byte ptr [edx + 0x28]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax + ecx*4 + 0xb4]
        test    eax, eax
        jz      l_67e26f
        mov     ecx, eax
        call    FUN_00680ac0
        mov     ebx, eax
        test    ebx, ebx
        jz      l_67e26f
        mov     eax, dword ptr [ebx + 0x30]
        push    eax
        lea     ecx, [esp + 0x58]
        push    0x0
        push    ecx
        call    FUN_0067f7f0
        mov     eax, dword ptr [eax]
        push    eax
        call    FUN_00680190
        fcomp   dword ptr [esp + 0x20]
        add     esp, 0x10
        fnstsw  ax
        test    ah, 0x41
        jz      l_67e26f
        mov     edx, dword ptr [_DAT_007f2290]
        push    0x0
        push    0x400
        push    edx
        lea     ecx, [esp + 0x30]
        mov     dword ptr [edi + 4], 0x0
        call    FUN_0041ef30
        push    0x8
        lea     eax, [ebx + 0x24]
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_0041ec50
        mov     dl, byte ptr [edi + 0x10]
        lea     eax, [edi + 0x10]
        inc     dl
        mov     cl, dl
        cmp     cl, 0xff
        mov     byte ptr [eax], dl
        jnz     l_67deed
        mov     byte ptr [eax], 0x0
l_67deed:
        push    0x8
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_0041ec50
        push    0x20
        lea     ecx, [edi + 0x14]
        push    ecx
        lea     ecx, [esp + 0x2c]
        call    FUN_0041ec50
        push    0x1
        call    FUN_00707e70
        fmul    qword ptr [_DAT_0077b648]
        push    0x20
        fstp    dword ptr [esp + 0x18]
        lea     edx, [esp + 0x18]
        push    edx
        lea     ecx, [esp + 0x2c]
        call    FUN_0041ec50
        mov     esi, dword ptr [esi + 0x170]
        mov     ebp, dword ptr [ebx + 0x30]
        mov     ebx, dword ptr [ebx + 0x2c]
        xor     eax, eax
        mov     al, byte ptr [esi + 0x14]
        push    ebp
        push    ebx
        lea     ecx, [esp + 0x2c]
        push    eax
        push    ecx
        push    esi
        call    FUN_0062d920
        xor     edx, edx
        mov     dl, byte ptr [esi + 0x14]
        push    ebp
        push    ebx
        lea     eax, [esp + 0x40]
        push    edx
        push    eax
        push    esi
        call    FUN_0069e250
        xor     ecx, ecx
        mov     cl, byte ptr [esi + 0x14]
        push    ebp
        push    ebx
        lea     edx, [esp + 0x54]
        push    ecx
        push    edx
        push    esi
        call    FUN_0062dcd0
        xor     eax, eax
        mov     al, byte ptr [esi + 0x14]
        push    ebp
        push    ebx
        lea     ecx, [esp + 0x68]
        push    eax
        push    ecx
        push    esi
        call    FUN_006ad2e0
        mov     edi, dword ptr [edi]
        add     esp, 0x50
        push    0x8
        lea     esi, [edi + 0xa4]
        push    esi
        lea     ecx, [esp + 0x2c]
        call    FUN_0041ec50
        lea     eax, [edi + 0x9c]
        mov     dword ptr [esp + 0x1c], eax
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x18], 0x77d010
        test    eax, eax
        jz      l_67dfe5
l_67dfb0:
        mov     edi, dword ptr [eax]
        test    edi, edi
        jz      l_67dfe5
        push    0x5
        lea     edx, [edi + 0x10]
        push    edx
        lea     ecx, [esp + 0x2c]
        call    FUN_0041ec50
        mov     edx, dword ptr [esi]
        dec     edx
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esi], edx
        call    FUN_00417ad0
        mov     eax, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [eax]
        mov     eax, dword ptr [esp + 0x20]
        __asm _emit 0xEB __asm _emit 0xCB /* __emit: jmp l_67dfb0 - MSVC6 miscomputes backward rel (off-by-4, call-reloc between branch and target) */
l_67dfe5:
        lea     ecx, [esp + 0x24]
        call    FUN_0041ea10
        mov     edx, dword ptr [esp + 0x24]
        push    0x0
        lea     ecx, [esp + 0x28]
        call    dword ptr [edx + 0xc]
        mov     edx, dword ptr [_DAT_007db094]
        xor     ecx, ecx
        mov     dword ptr [esp + 0x2c], 0xffffffec
        mov     cl, byte ptr [edx + 0x28]
        mov     edx, dword ptr [_DAT_007dab40]
        push    0x0
        lea     eax, [esp + 0x28]
        push    eax
        mov     eax, dword ptr [_DAT_007dab44]
        push    0x48
        push    ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     ecx, dword ptr [ecx + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004ce190
        lea     ecx, [esp + 0x24]
        call    FUN_0041ef60
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x88
        ret     0x4
l_67e04b:
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [_DAT_0076d064]
        fnstsw  ax
        test    ah, 0x1
        jnz     l_67e26f
        mov     eax, dword ptr [ecx]
        xor     eax, edx
        mov     ecx, dword ptr [eax + 0x18]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        lea     eax, [esp + 0x68]
        push    eax
        mov     dword ptr [edi + 4], 0x0
        call    dword ptr [edx + 0xa0]
        mov     ecx, dword ptr [eax + 0xc]
        mov     dword ptr [esp + 0x18], ecx
        mov     edx, dword ptr [eax + 0x1c]
        mov     ecx, dword ptr [_DAT_007dab44]
        mov     dword ptr [esp + 0x1c], edx
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0x20], eax
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [_DAT_007dab40]
        mov     ecx, dword ptr [edx + 0x18]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        lea     edx, [esp + 0x68]
        push    edx
        call    dword ptr [eax + 0xa0]
        push    eax
        lea     ecx, [esp + 0x60]
        call    FUN_0041acb0
        mov     eax, dword ptr [_DAT_007f2290]
        push    0x0
        push    0x400
        push    eax
        lea     ecx, [esp + 0x30]
        call    FUN_0041ef30
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        mov     edx, dword ptr [_DAT_007dab44]
        lea     eax, [esp + 0x54]
        push    eax
        mov     eax, dword ptr [edx]
        lea     ecx, [esp + 0x5c]
        push    ecx
        xor     eax, dword ptr [_DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x1c]
        xor     ecx, 0x85739531
        call    FUN_004e27f0
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
        push    0x18
        push    ecx
        push    edx
        lea     eax, [esp + 0x24]
        push    eax
        lea     ecx, [esp + 0x34]
        call    FUN_0041ee20
        push    0x18
        push    0x447b4000
        push    0xc4faa000
        lea     ecx, [esp + 0x28]
        push    ecx
        lea     ecx, [esp + 0x34]
        call    FUN_0041ee20
        mov     edx, dword ptr [esp + 0x4c]
        mov     eax, dword ptr [esp + 0x50]
        push    0x18
        push    edx
        push    eax
        lea     ecx, [esp + 0x2c]
        push    ecx
        lea     ecx, [esp + 0x34]
        call    FUN_0041ee20
        fld     dword ptr [_DAT_007987f0]
        mov     edx, dword ptr [_DAT_007987f0]
        fchs
        push    0x18
        push    edx
        push    ecx
        fstp    dword ptr [esp]
        lea     eax, [esp + 0x68]
        push    eax
        lea     ecx, [esp + 0x34]
        call    FUN_0041ee20
        push    0x20
        add     edi, 0x14
        push    edi
        lea     ecx, [esp + 0x2c]
        call    FUN_0041ec50
        push    0x1
        call    FUN_00707e70
        fmul    qword ptr [_DAT_0077b648]
        push    0x20
        fstp    dword ptr [esp + 0x58]
        lea     ecx, [esp + 0x58]
        push    ecx
        lea     ecx, [esp + 0x2c]
        call    FUN_0041ec50
        mov     esi, dword ptr [esi + 0x170]
        xor     edx, edx
        mov     dl, byte ptr [esi + 0x14]
        push    0x0
        push    0x0
        lea     eax, [esp + 0x2c]
        push    edx
        push    eax
        push    esi
        call    FUN_0062d920
        xor     ecx, ecx
        mov     cl, byte ptr [esi + 0x14]
        push    0x0
        push    0x0
        lea     edx, [esp + 0x40]
        push    ecx
        push    edx
        push    esi
        call    FUN_0062dcd0
        mov     eax, dword ptr [esp + 0x4c]
        add     esp, 0x28
        push    0x0
        lea     ecx, [esp + 0x28]
        call    dword ptr [eax + 0xc]
        mov     eax, dword ptr [_DAT_007db094]
        xor     edx, edx
        mov     dword ptr [esp + 0x2c], 0xffffffec
        mov     dl, byte ptr [eax + 0x28]
        push    0x0
        lea     ecx, [esp + 0x28]
        push    ecx
        mov     ecx, dword ptr [_DAT_007dab44]
        push    0x49
        push    edx
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [_DAT_007dab40]
        mov     ecx, dword ptr [edx + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004ce190
        mov     eax, dword ptr [_DAT_007db094]
        mov     edx, dword ptr [_DAT_007dab44]
        mov     ebp, dword ptr [_DAT_007dab40]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x28]
        mov     eax, dword ptr [edx]
        xor     eax, ebp
        mov     edx, dword ptr [eax + 0x14]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x1814]
        add     eax, 0x6060
        mov     esi, dword ptr [eax + ecx*4 + 0x8]
        mov     edx, 0x48
        add     esi, edx
        mov     dword ptr [eax + ecx*4 + 0x8], esi
        add     dword ptr [eax + 0xc00], edx
        lea     ecx, [esp + 0x24]
        call    FUN_0041ef60
l_67e26f:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x88
        ret     0x4
    }
}
