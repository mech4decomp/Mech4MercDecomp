/*
 * FUN_005ee4c0 (777 B) — __thiscall method (ECX = this), RET.
 *
 * 3x3 matrix multiply (FPU) + object setup.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004d1f80(void);
extern void __stdcall FUN_004da920(void);
extern void __stdcall FUN_005347f0(void);
extern void __stdcall FUN_00767400(void);
extern void __stdcall FUN_0041e690(void);
extern void __stdcall FUN_004cec10(void);
extern void __stdcall FUN_004d9910(void);
extern void __stdcall FUN_0041fcb0(void);
extern void __stdcall FUN_0041fcd0(void);
extern void __stdcall FUN_0041fd80(void);
extern void __stdcall FUN_004f5030(void);
extern void __stdcall FUN_0041e710(void);
extern void __stdcall FUN_004d21c0(void);

__declspec(naked) void __stdcall FUN_005ee4c0(void)
{
    

extern int DAT_007da888;
extern int DAT_007db098;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x13c
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x78]
        push    esi
        lea     ecx, [ebx + 0x78]
        push    edi
        call    dword ptr [eax + 0x4]
        lea     esi, [eax + 0x68]
        push    0x1
        push    esi
        lea     ecx, [ebp - 0xac]
        mov     dword ptr [ebp - 0x8], esi
        call    FUN_004d1f80
        mov     eax, dword ptr [ebp - 0x70]
        test    eax, eax
        jz      LE7B7
        mov     eax, dword ptr [ebp - 0x90]
        test    eax, eax
        jbe     LE7B7
        push    esi
        call    FUN_004da920
        mov edx, dword ptr [DAT_007da888]
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        lea     edi, [ebp - 0x68]
        rep     movsd
        mov     ecx, dword ptr [ebx + 0xd8]
        mov     dword ptr [ebp - 0xc], eax
        add     ecx, 0x20
        lea     eax, [ebp - 0x68]
        add     esp, 0x4
        mov     dword ptr [ebp - 0x18], ecx
        mov     dword ptr [ebp - 0x14], edx
        mov     dword ptr [ebp - 0x10], eax
        mov     edx, dword ptr [ebp - 0x14]
        push    esi
        mov     esi, dword ptr [ebp - 0x18]
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
        mov     edx, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ebp - 0xc]
        push    0x0
        push    -0x1
        push    0x2
        push    0x0
        lea     ecx, [ebp - 0x68]
        push    ecx
        push    edx
        push    0x800002
        push    eax
        push    0x0
        push    0x2
        push    0x90
        lea     ecx, [ebp - 0x13c]
        call    FUN_005347f0
        push    0x8bd5e8
        lea     ecx, [ebp - 0xdc]
        call    FUN_00767400
        push    0x8bd5e8
        lea     ecx, [ebp - 0xc4]
        call    FUN_00767400
        mov     ecx, dword ptr [ebp - 0x13c]
        push    0x0
        push    ecx
        lea     edx, [ebp - 0x13c]
        push    edx
        lea     ecx, [ebp - 0x38]
        call    FUN_0041e690
        mov ecx, dword ptr [DAT_007db098]
        call    FUN_004cec10
        mov     cl, byte ptr [eax]
        mov     byte ptr [ebp - 0x4], cl
        mov     dx, word ptr [eax + 0x2]
        push    0x0
        lea     eax, [ebp - 0x4]
        push    eax
        lea     ecx, [ebp - 0x38]
        push    ecx
        mov     word ptr [ebp - 0x2], dx
        call    FUN_004d9910
        mov edx, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov     esi, eax
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x1c]
        add     esp, 0xc
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 0x28]
        lea     edi, [ebx + 0x210]
        mov     ecx, edi
        call    FUN_0041fcb0
        push    esi
        mov     ecx, edi
        call    FUN_0041fcd0
        push    ebx
        mov     ecx, edi
        call    FUN_0041fd80
        mov     ecx, eax
        call    FUN_004f5030
        mov     ecx, edi
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xe0]
        mov     edx, dword ptr [eax]
        push    0x0
        push    0x6
        mov     ecx, eax
        call    dword ptr [edx + 0x4]
        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax + 0x48]
        lea     ecx, [ebp - 0x38]
        call    FUN_0041e710
LE7B7:
        lea     ecx, [ebp - 0xac]
        call    FUN_004d21c0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }


}
