/*
 * FUN_005edf00 (918 B) — __thiscall method (ECX = this), RET 0x20.
 *
 * 3x3 matrix multiply (FPU) + object setup.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00502ef0(void);
extern void __stdcall FUN_004d1f80(void);
extern void __stdcall FUN_004da920(void);
extern void __stdcall FUN_00419460(void);
extern void __stdcall FUN_0041fde0(void);
extern void __stdcall FUN_0040d030(void);
extern void __stdcall FUN_004e7640(void);
extern void __stdcall FUN_0041e690(void);
extern void __stdcall FUN_004cec10(void);
extern void __stdcall FUN_004d9910(void);
extern void __stdcall FUN_004206b0(void);
extern void __stdcall FUN_00419f50(void);
extern void __stdcall FUN_004f5030(void);
extern void __stdcall FUN_004f5090(void);
extern void __stdcall FUN_0041e710(void);
extern void __stdcall FUN_004d21c0(void);

__declspec(naked) void __stdcall FUN_005edf00(void *p1, void *p2, void *p3,
                                              void *p4, void *p5, void *p6,
                                              void *p7, void *p8)
{
    

extern int DAT_007db0ac;
extern int DAT_007db0ae;
extern int DAT_007db098;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x1f4
        mov     eax, dword ptr [ecx + 0x78]
        push    ebx
        push    esi
        add     ecx, 0x78
        push    edi
        call    dword ptr [eax + 0x4]
        mov esi, dword ptr [DAT_007db0ac]
        mov di, word ptr [DAT_007db0ae]
        lea     ecx, [eax + 0x54]
        mov     word ptr [ebp - 0x4], si
        mov     word ptr [ebp - 0x2], di
        cmp     word ptr [ecx], si
        jnz     LDF38
        cmp     word ptr [ecx + 0x2], di
        jz      LDF5D
LDF38:
        mov     edx, dword ptr [ebp + 0x20]
        cmp     dl, 0x18
        jnc     LDF5D
        push    edx
        push    ecx
        lea     ecx, [ebp - 0x4]
        push    ecx
        call    FUN_00502ef0
        mov esi, dword ptr [DAT_007db0ac]
        mov di, word ptr [DAT_007db0ae]
        add     esp, 0xc
        jmp     LDF6D
LDF5D:
        mov     dx, word ptr [eax + 0x58]
        mov     word ptr [ebp - 0x4], dx
        mov     ax, word ptr [eax + 0x5a]
        mov     word ptr [ebp - 0x2], ax
LDF6D:
        cmp     word ptr [ebp - 0x4], si
        jnz     LDF7D
        cmp     word ptr [ebp - 0x2], di
        jz      LE28D
LDF7D:
        push    0x1
        lea     ecx, [ebp - 0x4]
        push    ecx
        lea     ecx, [ebp - 0x134]
        call    FUN_004d1f80
        lea     edx, [ebp - 0x4]
        push    edx
        call    FUN_004da920
        add     esp, 0x4
        push    0x7b9460
        lea     ecx, [ebp - 0x60]
        mov     esi, eax
        call    FUN_00419460
        push    0x2
        push    0x0
        push    0x1
        lea     eax, [ebp + 0x8]
        push    eax
        lea     ecx, [ebp - 0x60]
        call    FUN_0041fde0
        lea     ecx, [ebp + 0x14]
        push    ecx
        lea     ecx, [ebp - 0x60]
        call    FUN_0040d030
        push    0x8bd5e8
        push    0x8bd5e8
        push    0x0
        push    -0x1
        push    0x2
        push    0x0
        lea     edx, [ebp - 0x60]
        push    edx
        lea     eax, [ebp - 0x4]
        push    eax
        push    0x2
        push    esi
        push    0x0
        push    0x2
        push    0x90
        lea     ecx, [ebp - 0x1f4]
        call    FUN_004e7640
        mov     ecx, dword ptr [ebp - 0x1f4]
        push    0x0
        push    ecx
        lea     edx, [ebp - 0x1f4]
        push    edx
        lea     ecx, [ebp - 0x30]
        call    FUN_0041e690
        mov ecx, dword ptr [DAT_007db098]
        call    FUN_004cec10
        mov     cl, byte ptr [eax]
        mov     byte ptr [ebp + 0x20], cl
        mov     dx, word ptr [eax + 0x2]
        push    0x0
        lea     eax, [ebp + 0x20]
        push    eax
        lea     ecx, [ebp - 0x30]
        push    ecx
        mov     word ptr [ebp + 0x22], dx
        call    FUN_004d9910
        mov edx, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov     ebx, eax
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x1c]
        add     esp, 0xc
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    ebx
        call    dword ptr [edx + 0x28]
        mov     eax, dword ptr [ebx]
        push    0x1
        mov     ecx, ebx
        call    dword ptr [eax + 0x48]
        mov     eax, dword ptr [ebp + 0x24]
        test    eax, eax
        jz      LE27A
        mov     esi, dword ptr [eax + 0xd8]
        add     esi, 0x80
        mov     ecx, 0xc
        lea     edi, [ebp - 0x90]
        rep     movsd
        lea     ecx, [ebp - 0x90]
        push    ecx
        lea     ecx, [ebp - 0x164]
        call    FUN_00419460
        lea     edx, [ebp - 0x164]
        push    edx
        lea     ecx, [ebp - 0x90]
        call    FUN_004206b0
        lea     eax, [ebp + 0x14]
        push    eax
        lea     ecx, [ebp - 0xf0]
        call    FUN_00419f50
        lea     ecx, [ebp - 0x90]
        lea     edx, [ebp - 0xf0]
        lea     eax, [ebp - 0xc0]
        mov     dword ptr [ebp - 0x8], ecx
        mov     dword ptr [ebp - 0xc], edx
        mov     dword ptr [ebp - 0x10], eax
        mov     edx, dword ptr [ebp - 0xc]
        push    esi
        mov     esi, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ebp - 0x10]
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x4]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax + 0x8]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fadd    dword ptr [esi + 0xc]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x10]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x14]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x18]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fadd    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x20]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x24]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st
        faddp   st(1), st
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop     esi
        mov     ecx, dword ptr [ebp + 0x24]
        push    ecx
        mov     ecx, ebx
        call    FUN_004f5030
        sub     esp, 0x30
        mov     edi, esp
        mov     ecx, 0xc
        lea     esi, [ebp - 0xc0]
        rep     movsd
        mov     ecx, ebx
        call    FUN_004f5090
LE27A:
        lea     ecx, [ebp - 0x30]
        call    FUN_0041e710
        lea     ecx, [ebp - 0x134]
        call    FUN_004d21c0
LE28D:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x20
    }


}
