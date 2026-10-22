/*
 * FUN_005ab460 (1543 B) — __fastcall, RET 8.
 *
 * Large update routine: reads a virtual object, conditionally builds a
 * 4x4 matrix (FPU block), transforms vectors, and dispatches through a
 * series of helper calls. Uses the XOR-obfuscated global pointer pair
 * (0x007dab44 / 0x007dab40). Switch on field +0x238 (0..3) with two jump
 * tables at 0x005aba68 / 0x005aba78.
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

__declspec(naked) void FUN_005ab460(void)
{
    

extern int DAT_007db0ac;
extern int DAT_007db0ae;
extern int DAT_007704c0;
extern int DAT_0077d060;
extern int DAT_007822e8;
extern int DAT_0077de8c;
extern int DAT_007b4384;
extern int DAT_007db098;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x1b8
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x78]
        push    esi
        lea     ecx, [ebx + 0x78]
        push    edi
        call    dword ptr [eax + 0x4]
        mov     edi, eax
        mov     cx, word ptr [edi + 0x90]
        cmp cx, word ptr [DAT_007db0ac]
        lea     esi, [edi + 0x90]
        mov     dword ptr [ebp - 0x3c], esi
        jnz     L_b4a3
        mov     dx, word ptr [esi + 0x2]
        cmp dx, word ptr [DAT_007db0ae]
        jz      L_ba5e
L_b4a3:
        push    esi
        call    FUN_004da920
        add     esp, 4
        push    0x8bd5e8
        lea     ecx, [ebp - 0x38]
        mov     dword ptr [ebp - 0x48], eax
        call    FUN_00767400
        push    0x8bd5e8
        lea     ecx, [ebp - 0x84]
        call    FUN_00767400
        mov     ecx, ebx
        call    FUN_005f07c0
        mov     ecx, dword ptr [eax + 0x410]
        mov     edx, dword ptr [eax + 0x40c]
        sub     ecx, edx
        sar     ecx, 2
        jz      L_b89c
        cmp     dword ptr [edx], 0
        jz      L_b89c
        push    0x7b9460
        lea     ecx, [ebp - 0xb4]
        call    FUN_00419460
        mov     eax, dword ptr [ebx + 0x238]
        cmp     eax, 3
        ja      L_b6e1
        jmp     dword ptr [eax*4 + 0x5aba68]
        /* case 0 */
        mov     ecx, ebx
        call    FUN_005f07c0
        mov     ecx, dword ptr [eax + 0x410]
        mov     esi, dword ptr [eax + 0x40c]
        sub     ecx, esi
        sar     ecx, 2
        jz      L_b539
        mov     edx, esi
        mov     eax, dword ptr [edx]
        jmp     L_b53b
L_b539:
        xor     eax, eax
L_b53b:
        fld     dword ptr [eax + 0x19c]
        mov     ecx, ebx
        fstp    dword ptr [ebp - 0x4]
        call    FUN_005f07c0
        mov     ecx, dword ptr [eax + 0x410]
        mov     esi, dword ptr [eax + 0x40c]
        sub     ecx, esi
        sar     ecx, 2
        jz      L_b564
        mov     edx, esi
        mov     eax, dword ptr [edx]
        jmp     L_b566
L_b564:
        xor     eax, eax
L_b566:
        mov     ecx, dword ptr [ebp - 0x4]
        mov     dword ptr [ebp - 0x68], ecx
        fld     dword ptr [eax + 0x198]
        fsub dword ptr [DAT_007704c0]
        mov     dword ptr [ebp - 0x64], 0
        lea     edx, [ebp - 0x6c]
        fstp    dword ptr [ebp - 0x6c]
        jmp     L_b6d5
        /* case 1 */
        mov     ecx, ebx
        call    FUN_005f07c0
        mov     ecx, dword ptr [eax + 0x410]
        mov     esi, dword ptr [eax + 0x40c]
        sub     ecx, esi
        sar     ecx, 2
        jz      L_b5aa
        mov     edx, esi
        mov     eax, dword ptr [edx]
        jmp     L_b5ac
L_b5aa:
        xor     eax, eax
L_b5ac:
        fld     dword ptr [eax + 0x19c]
        mov     ecx, ebx
        fstp    dword ptr [ebp - 0x4]
        call    FUN_005f07c0
        mov     ecx, dword ptr [eax + 0x410]
        mov     esi, dword ptr [eax + 0x40c]
        sub     ecx, esi
        sar     ecx, 2
        jz      L_b5d5
        mov     edx, esi
        mov     eax, dword ptr [edx]
        jmp     L_b5d7
L_b5d5:
        xor     eax, eax
L_b5d7:
        mov     ecx, dword ptr [ebp - 0x4]
        mov     dword ptr [ebp - 0x50], ecx
        fld     dword ptr [eax + 0x198]
        fadd dword ptr [DAT_007704c0]
        mov     dword ptr [ebp - 0x4c], 0
        lea     edx, [ebp - 0x54]
        fstp    dword ptr [ebp - 0x54]
        jmp     L_b6d5
        /* case 2 */
        mov     ecx, ebx
        call    FUN_005f07c0
        mov     ecx, dword ptr [eax + 0x410]
        mov     esi, dword ptr [eax + 0x40c]
        sub     ecx, esi
        sar     ecx, 2
        jz      L_b61b
        mov     edx, esi
        mov     eax, dword ptr [edx]
        jmp     L_b61d
L_b61b:
        xor     eax, eax
L_b61d:
        fld     dword ptr [eax + 0x19c]
        mov     ecx, ebx
        fsub dword ptr [DAT_0077d060]
        fstp    dword ptr [ebp - 0x4]
        call    FUN_005f07c0
        mov     ecx, dword ptr [eax + 0x410]
        mov     esi, dword ptr [eax + 0x40c]
        sub     ecx, esi
        sar     ecx, 2
        jz      L_b64c
        mov     edx, esi
        mov     eax, dword ptr [edx]
        jmp     L_b64e
L_b64c:
        xor     eax, eax
L_b64e:
        mov     ecx, dword ptr [ebp - 0x4]
        mov     dword ptr [ebp - 0x5c], ecx
        fld     dword ptr [eax + 0x198]
        fstp    dword ptr [ebp - 0x60]
        mov     dword ptr [ebp - 0x58], 0
        lea     edx, [ebp - 0x60]
        jmp     L_b6d5
        /* case 3 */
        mov     ecx, ebx
        call    FUN_005f07c0
        mov     ecx, dword ptr [eax + 0x410]
        mov     esi, dword ptr [eax + 0x40c]
        sub     ecx, esi
        sar     ecx, 2
        jz      L_b689
        mov     edx, esi
        mov     eax, dword ptr [edx]
        jmp     L_b68b
L_b689:
        xor     eax, eax
L_b68b:
        fld     dword ptr [eax + 0x19c]
        mov     ecx, ebx
        fadd dword ptr [DAT_0077d060]
        fstp    dword ptr [ebp - 0x4]
        call    FUN_005f07c0
        mov     ecx, dword ptr [eax + 0x410]
        mov     esi, dword ptr [eax + 0x40c]
        sub     ecx, esi
        sar     ecx, 2
        jz      L_b6ba
        mov     edx, esi
        mov     eax, dword ptr [edx]
        jmp     L_b6bc
L_b6ba:
        xor     eax, eax
L_b6bc:
        mov     ecx, dword ptr [ebp - 0x4]
        mov     dword ptr [ebp - 0x1c], ecx
        fld     dword ptr [eax + 0x198]
        fstp    dword ptr [ebp - 0x20]
        mov     dword ptr [ebp - 0x18], 0
        lea     edx, [ebp - 0x20]
L_b6d5:
        push    edx
        lea     ecx, [ebp - 0xb4]
        call    FUN_0041a070
L_b6e1:
        mov     ecx, ebx
        call    FUN_005f07c0
        mov     eax, dword ptr [eax + 0xd8]
        add     eax, 0x80
        lea     ecx, [ebp - 0xb4]
        lea     edx, [ebp - 0x104]
        mov     dword ptr [ebp - 0x40], eax
        mov     dword ptr [ebp - 0x44], ecx
        mov     dword ptr [ebp - 0x4], edx
        mov     edx, dword ptr [ebp - 0x44]
        push    esi
        mov     esi, dword ptr [ebp - 0x40]
        mov     eax, dword ptr [ebp - 0x4]
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
        lea     ecx, [ebp - 0x104]
        call    FUN_00428730
        mov     esi, dword ptr [ebp - 0x3c]
        jmp     L_b8b8
L_b89c:
        mov     ecx, ebx
        call    FUN_005f07c0
        mov     ecx, dword ptr [eax + 0xd8]
        lea     edx, [ebp - 0x14]
        add     ecx, 0x80
        push    edx
        call    FUN_00428730
L_b8b8:
        mov     eax, dword ptr [ebx + 0x238]
        cmp     eax, 3
        ja      L_b947
        jmp     dword ptr [eax*4 + 0x5aba78]
        /* case 0 */
        fld     dword ptr [ebp - 0x14]
        fmul    dword ptr [edi + 0x78]
        fstp    dword ptr [ebp - 0x38]
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [edi + 0x7c]
        fstp    dword ptr [ebp - 0x34]
        fld     dword ptr [ebp - 0xc]
        fmul    dword ptr [edi + 0x80]
        jmp     L_b944
        /* case 1 */
        fld     dword ptr [edi + 0x78]
        fld     dword ptr [edi + 0x7c]
        fsub dword ptr [DAT_007822e8]
        fstp    dword ptr [ebp - 0x1c]
        fld     dword ptr [edi + 0x80]
        fstp    dword ptr [ebp - 0x18]
        fmul    dword ptr [ebp - 0x14]
        fstp    dword ptr [ebp - 0x38]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0x34]
        fld     dword ptr [ebp - 0x18]
        jmp     L_b941
        /* case 2 */
        fld     dword ptr [edi + 0x78]
        fld     dword ptr [edi + 0x7c]
        fadd dword ptr [DAT_0077de8c]
        fstp    dword ptr [ebp - 0x1c]
        fld     dword ptr [edi + 0x80]
        fstp    dword ptr [ebp - 0x18]
        fmul    dword ptr [ebp - 0x14]
        fstp    dword ptr [ebp - 0x38]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0x34]
        fld     dword ptr [ebp - 0x18]
L_b941:
        fmul    dword ptr [ebp - 0xc]
L_b944:
        fstp    dword ptr [ebp - 0x30]
L_b947:
        fld dword ptr [DAT_007b4384]
        inc     eax
        and     eax, 0x80000003
        fchs
        fstp    dword ptr [ebp - 0x80]
        mov     dword ptr [ebp - 0x84], 0
        mov     dword ptr [ebp - 0x7c], 0
        jns     L_b970
        dec     eax
        or      eax, 0xfffffffc
        inc     eax
L_b970:
        mov     ecx, dword ptr [edi + 0x68]
        mov     edx, dword ptr [edi + 0x64]
        mov     dword ptr [ebx + 0x238], eax
        mov     eax, dword ptr [edi + 0x30]
        push    eax
        mov     eax, dword ptr [edi + 0x60]
        push    ecx
        mov     ecx, dword ptr [edi + 0x5c]
        push    edx
        push    eax
        push    ecx
        mov     ecx, ebx
        call    FUN_005f07c0
        mov     ecx, eax
        call    FUN_0059afb0
        push    ecx
        mov     ecx, esp
        push    eax
        call    FUN_004ea0f0
        mov     edx, dword ptr [edi + 0x58]
        mov     eax, dword ptr [edi + 0x50]
        mov     ecx, dword ptr [edi + 0x54]
        push    edx
        push    eax
        push    ecx
        lea     edx, [ebp - 0x84]
        push    edx
        lea     eax, [ebp - 0x38]
        push    eax
        push    0
        push    -1
        push    5
        push    0
        lea     ecx, [ebp - 0x104]
        push    ecx
        mov     ecx, dword ptr [ebx + 0x198]
        call    FUN_00507f90
        mov     edx, dword ptr [ebp - 0x48]
        push    eax
        push    esi
        push    2
        push    edx
        push    0
        push    2
        push    0xc8
        lea     ecx, [ebp - 0x1b8]
        call    FUN_005922e0
        mov     eax, dword ptr [ebp - 0x1b8]
        push    0
        push    eax
        lea     ecx, [ebp - 0x1b8]
        push    ecx
        lea     ecx, [ebp - 0xd4]
        call    FUN_0041e690
        mov ecx, dword ptr [DAT_007db098]
        call    FUN_004cec10
        mov     dl, byte ptr [eax]
        mov     byte ptr [ebp - 0x8], dl
        mov     ax, word ptr [eax + 0x2]
        push    0
        lea     ecx, [ebp - 0x8]
        push    ecx
        lea     edx, [ebp - 0xd4]
        push    edx
        mov     word ptr [ebp - 0x6], ax
        call    FUN_004d9910
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx + 0x1c]
        add     esp, 0xc
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x28]
        lea     ecx, [ebp - 0xd4]
        call    FUN_0041e710
L_ba5e:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }


}
