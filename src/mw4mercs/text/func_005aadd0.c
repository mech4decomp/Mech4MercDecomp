/*
 * FUN_005aadd0 (1029 B) — __fastcall, RET 8.
 *
 * Large update routine: reads a virtual object, conditionally builds a
 * 4x4 matrix (FPU block), transforms vectors, and dispatches through a
 * series of helper calls. Uses the XOR-obfuscated global pointer pair
 * (0x007dab44 / 0x007dab40).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004da920(void);
extern void __cdecl FUN_00767400(void);
extern void __cdecl FUN_005f07c0(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_0041a070(void);
extern void __cdecl FUN_00428730(void);
extern void __cdecl FUN_0059afb0(void);
extern void __cdecl FUN_004ea0f0(void);
extern void __cdecl FUN_00507f90(void);
extern void __cdecl FUN_005922e0(void);
extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_004cec10(void);
extern void __cdecl FUN_004d9910(void);
extern void __cdecl FUN_0041e710(void);

__declspec(naked) void FUN_005aadd0(void)
{
    

extern int DAT_007db0ac;
extern int DAT_007db0ae;
extern int DAT_007b4384;
extern int DAT_007db098;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x194
        push    ebx
        mov     ebx, ecx
        mov     eax, [ebx + 0x78]
        push    esi
        lea     ecx, [ebx + 0x78]
        push    edi
        call    dword ptr [eax + 0x4]
        mov     edi, eax
        mov     cx, word ptr [edi + 0x90]
        cmp cx, word ptr [DAT_007db0ac]
        lea     esi, [edi + 0x90]
        mov     [ebp - 0x24], esi
        jnz     L_ae13
        mov     dx, word ptr [esi + 0x2]
        cmp dx, word ptr [DAT_007db0ae]
        jz      L_b1cc
L_ae13:
        push    esi
        call    FUN_004da920
        add     esp, 4
        push    0x8bd5e8
        lea     ecx, [ebp - 0x60]
        mov     [ebp - 0x18], eax
        call    FUN_00767400
        push    0x8bd5e8
        lea     ecx, [ebp - 0x48]
        call    FUN_00767400
        mov     ecx, ebx
        call    FUN_005f07c0
        mov     ecx, [eax + 0x410]
        mov     edx, [eax + 0x40c]
        sub     ecx, edx
        sar     ecx, 2
        jz      L_b09d
        cmp     dword ptr [edx], 0
        jz      L_b09d
        push    0x7b9460
        lea     ecx, [ebp - 0xb0]
        call    FUN_00419460
        mov     ecx, ebx
        call    FUN_005f07c0
        mov     ecx, [eax + 0x410]
        mov     esi, [eax + 0x40c]
        sub     ecx, esi
        sar     ecx, 2
        jz      L_ae90
        mov     edx, esi
        mov     eax, [edx]
        jmp     L_ae92
L_ae90:
        xor     eax, eax
L_ae92:
        fld     dword ptr [eax + 0x19c]
        mov     ecx, ebx
        fstp    dword ptr [ebp - 0x8]
        call    FUN_005f07c0
        mov     ecx, [eax + 0x410]
        mov     esi, [eax + 0x40c]
        sub     ecx, esi
        sar     ecx, 2
        jz      L_aebb
        mov     edx, esi
        mov     eax, [edx]
        jmp     L_aebd
L_aebb:
        xor     eax, eax
L_aebd:
        mov     ecx, [ebp - 0x8]
        mov     [ebp - 0x2c], ecx
        fld     dword ptr [eax + 0x198]
        lea     edx, [ebp - 0x30]
        fstp    dword ptr [ebp - 0x30]
        push    edx
        lea     ecx, [ebp - 0xb0]
        mov     dword ptr [ebp - 0x28], 0
        call    FUN_0041a070
        mov     ecx, ebx
        call    FUN_005f07c0
        mov     eax, [eax + 0xd8]
        add     eax, 0x80
        lea     ecx, [ebp - 0xb0]
        lea     edx, [ebp - 0xe0]
        mov     [ebp - 0x20], eax
        mov     [ebp - 0x1c], ecx
        mov     [ebp - 0x8], edx
        mov     edx, [ebp - 0x1c]
        push    esi
        mov     esi, [ebp - 0x20]
        mov     eax, [ebp - 0x8]
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
        fxch
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
        fxch
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
        fxch
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
        fxch
        fadd    dword ptr [esi + 0xc]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch
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
        fxch
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
        fxch
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
        fxch
        fadd    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch
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
        fxch
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
        fxch
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st
        faddp   st(1), st
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop     esi
        lea     eax, [ebp - 0x14]
        push    eax
        lea     ecx, [ebp - 0xe0]
        call    FUN_00428730
        mov     esi, [ebp - 0x24]
        jmp     L_b0b9
L_b09d:
        mov     ecx, ebx
        call    FUN_005f07c0
        mov     ecx, [eax + 0xd8]
        lea     edx, [ebp - 0x14]
        add     ecx, 0x80
        push    edx
        call    FUN_00428730
L_b0b9:
        fld     dword ptr [ebp - 0x14]
        mov     eax, [edi + 0x30]
        fmul    dword ptr [edi + 0x78]
        mov     ecx, [edi + 0x68]
        mov     edx, [edi + 0x64]
        push    eax
        mov     eax, [edi + 0x60]
        fstp    dword ptr [ebp - 0x60]
        fld     dword ptr [ebp - 0x10]
        push    ecx
        fmul    dword ptr [edi + 0x7c]
        mov     ecx, [edi + 0x5c]
        push    edx
        push    eax
        fstp    dword ptr [ebp - 0x5c]
        push    ecx
        fld     dword ptr [ebp - 0xc]
        mov     ecx, ebx
        fmul    dword ptr [edi + 0x80]
        mov     dword ptr [ebp - 0x48], 0
        mov     dword ptr [ebp - 0x40], 0
        fstp    dword ptr [ebp - 0x58]
        fld dword ptr [DAT_007b4384]
        fchs
        fstp    dword ptr [ebp - 0x44]
        call    FUN_005f07c0
        mov     ecx, eax
        call    FUN_0059afb0
        push    ecx
        mov     ecx, esp
        push    eax
        call    FUN_004ea0f0
        mov     edx, [edi + 0x58]
        mov     eax, [edi + 0x50]
        mov     ecx, [edi + 0x54]
        push    edx
        push    eax
        push    ecx
        lea     edx, [ebp - 0x48]
        push    edx
        lea     eax, [ebp - 0x60]
        push    eax
        push    0x0
        push    -0x1
        push    0x5
        push    0x0
        lea     ecx, [ebp - 0xe0]
        push    ecx
        mov     ecx, [ebx + 0x198]
        call    FUN_00507f90
        mov     edx, [ebp - 0x18]
        push    eax
        push    esi
        push    0x2
        push    edx
        push    0x0
        push    0x2
        push    0xc8
        lea     ecx, [ebp - 0x194]
        call    FUN_005922e0
        mov     eax, [ebp - 0x194]
        push    0x0
        push    eax
        lea     ecx, [ebp - 0x194]
        push    ecx
        lea     ecx, [ebp - 0x80]
        call    FUN_0041e690
        mov ecx, dword ptr [DAT_007db098]
        call    FUN_004cec10
        mov     dl, byte ptr [eax]
        mov     [ebp - 0x4], dl
        mov     ax, word ptr [eax + 0x2]
        push    0x0
        lea     ecx, [ebp - 0x4]
        push    ecx
        lea     edx, [ebp - 0x80]
        push    edx
        mov     word ptr [ebp - 0x2], ax
        call    FUN_004d9910
        mov ecx, dword ptr [DAT_007dab44]
        add     esp, 0xc
        mov     edx, [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     ecx, [edx + 0x1c]
        xor     ecx, 0x85739531
        mov     edx, [ecx]
        push    eax
        call    dword ptr [edx + 0x28]
        lea     ecx, [ebp - 0x80]
        call    FUN_0041e710
L_b1cc:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }


}
