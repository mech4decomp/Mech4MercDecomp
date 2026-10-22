/*
 * FUN_004aae40 (909 B) — MLR subsystem method (__thiscall, RET 0x4).
 * Evaluates a set of 4 curve/table lookups (FUN_00495e30) writing 4 floats
 * into this+0xb8, then performs a 4x4 matrix multiply (this+0x58 x param)
 * into a stack matrix and passes it to FUN_0048e890, then FUN_00494990.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;
extern int __cdecl FUN_00495e30(float);
extern void __cdecl FUN_0048bcf0(void);
extern void __cdecl FUN_00491670(int, int);
extern void __cdecl FUN_0048e890(int);
extern void __cdecl FUN_00494990(int);

__declspec(naked) void FUN_004aae40(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x70
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     ebx, dword ptr [edi + 0xa0]
        xor     edx, edx
        cmp     ebx, edx
        mov     dword ptr [ebp - 0x10], edi
        mov     dword ptr [ebp - 0x1c], ebx
        jz      alt_path
        mov     esi, dword ptr [edi + 0x10]
        mov     dword ptr [ebp - 0x14], edx
        jbe     after_loop
        mov     eax, dword ptr [edi + 0xa8]
        mov     dword ptr [ebp - 0x18], eax
        mov     dword ptr [ebp - 0xc], edx
loop_start:
        mov     eax, dword ptr [ebp - 0x18]
        mov     ecx, edx
        imul    ecx, dword ptr [esi + 0x270]
        fld     dword ptr [ecx + eax + 0x1c]
        fst     dword ptr [ebp - 0x4]
        fcomp   dword ptr [g_0076d064]
        add     ecx, eax
        __emit 0xDF          /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6          /* test ah,1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      loop_tail
        mov     ecx, dword ptr [ecx + 0x18]
        mov     ebx, dword ptr [ebp - 0x4]
        mov     dword ptr [ebp - 0x8], ecx
        lea     edi, [esi + 0x1ec]
        push    ebx
        mov     ecx, edi
        call    FUN_00495e30
        fld     dword ptr [ebp - 0x4]
        lea     edx, [eax + eax*2]
        mov     eax, dword ptr [edi + 4]
        fsub    dword ptr [eax + edx*4]
        lea     eax, [eax + edx*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov     al, byte ptr [esi + 0x204]
        test    al, al
        jz      skip1
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [esi + 0x200]
        fadd    dword ptr [esi + 0x1fc]
        fmulp   st(1), st(0)
skip1:
        mov     ecx, dword ptr [ebp - 0x10]
        mov     edx, dword ptr [ecx + 0xb8]
        mov     eax, dword ptr [ebp - 0xc]
        lea     edi, [edx + eax]
        lea     ecx, [esi + 0x20c]
        fstp    dword ptr [edi]
        push    ebx
        call    FUN_00495e30
        fld     dword ptr [ebp - 0x4]
        mov     edx, dword ptr [esi + 0x210]
        lea     ecx, [eax + eax*2]
        fsub    dword ptr [edx + ecx*4]
        lea     eax, [edx + ecx*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov     al, byte ptr [esi + 0x224]
        test    al, al
        jz      skip2
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [esi + 0x220]
        fadd    dword ptr [esi + 0x21c]
        fmulp   st(1), st(0)
skip2:
        lea     ecx, [esi + 0x22c]
        fstp    dword ptr [edi + 4]
        push    ebx
        call    FUN_00495e30
        fld     dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [esi + 0x230]
        lea     eax, [eax + eax*2]
        fsub    dword ptr [ecx + eax*4]
        lea     eax, [ecx + eax*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov     al, byte ptr [esi + 0x244]
        test    al, al
        jz      skip3
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [esi + 0x240]
        fadd    dword ptr [esi + 0x23c]
        fmulp   st(1), st(0)
skip3:
        lea     ecx, [esi + 0x24c]
        fstp    dword ptr [edi + 8]
        push    ebx
        call    FUN_00495e30
        fld     dword ptr [ebp - 0x4]
        lea     edx, [eax + eax*2]
        mov     eax, dword ptr [esi + 0x250]
        fsub    dword ptr [eax + edx*4]
        lea     eax, [eax + edx*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov     al, byte ptr [esi + 0x264]
        test    al, al
        jz      skip4
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [esi + 0x260]
        fadd    dword ptr [esi + 0x25c]
        fmulp   st(1), st(0)
skip4:
        mov     ebx, dword ptr [ebp - 0x1c]
        fstp    dword ptr [edi + 0xc]
        mov     edx, dword ptr [ebp - 0x14]
        mov     edi, dword ptr [ebp - 0x10]
loop_tail:
        mov     ecx, dword ptr [ebp - 0xc]
        inc     edx
        add     ecx, 0x10
        cmp     edx, ebx
        mov     dword ptr [ebp - 0x14], edx
        mov     dword ptr [ebp - 0xc], ecx
        jc      loop_start
after_loop:
        lea     ecx, [ebp - 0x40]
        call    FUN_0048bcf0
        mov     ecx, dword ptr [edi + 0xb0]
        mov     ebx, dword ptr [ebp + 8]
        add     esi, 0x48
        push    esi
        lea     edx, [ebx + 8]
        mov     dword ptr [ebp - 0x40], ecx
        push    edx
        lea     ecx, [ebp - 0x3c]
        call    FUN_00491670
        mov     eax, dword ptr [ebx + 4]
        mov     ecx, dword ptr [ebx]
        mov     dword ptr [ebp - 0x24], eax
        lea     edx, [edi + 0x58]
        lea     eax, [ebp - 0x70]
        mov     dword ptr [ebp - 0x1c], ecx
        mov     dword ptr [ebp - 0x18], edx
        mov     dword ptr [ebp + 8], eax
        mov     edx, dword ptr [ebp - 0x18]
        push    esi
        mov     esi, dword ptr [ebp - 0x1c]
        mov     eax, dword ptr [ebp + 8]
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 4]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 4]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 8]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fadd    dword ptr [esi + 0xc]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x10]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x14]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x18]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fadd    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x20]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x24]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop     esi
        lea     ecx, [ebp - 0x70]
        lea     edx, [ebp - 0x40]
        mov     dword ptr [ebp - 0x20], ecx
        mov     ecx, dword ptr [ebx + 0x20]
        push    edx
        call    FUN_0048e890
        push    ebx
        mov     ecx, edi
        call    FUN_00494990
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
alt_path:
        mov     ebx, dword ptr [ebp + 8]
        push    ebx
        mov     ecx, edi
        call    FUN_00494990
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
