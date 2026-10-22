/*
 * FUN_004c4da0 (658 B) — MLR camera __fastcall. Copies 0xc dwords from
 * [EBX+0x20] to [EBX+0x50], computes a 3x3 matrix multiply with FPU
 * into object fields (or copies when a flag bit is set), then a second
 * matrix multiply block, clears a flag, invokes virtual method +0x10,
 * and walks a linked list calling virtual method +0x1c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004c4da0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc
        push    ebx
        mov     ebx, ecx
        push    esi
        push    edi
        lea     eax, [ebx+0x50]
        lea     esi, [ebx+0x20]
        mov     ecx, 0xc
        mov     edi, eax
        rep movsd
        test    byte ptr [ebx+0x18], 0x1
        jnz     L_004c4f5e
        mov     ecx, dword ptr [ebx+0x10]
        mov     dword ptr [ebp-0xc], eax
        add     ecx, 0x80
        lea     eax, [ebx+0x80]
        mov     dword ptr [ebp-0x8], ecx
        mov     dword ptr [ebp-0x4], eax
        mov     edx, dword ptr [ebp-0xc]
        push    esi
        mov     esi, dword ptr [ebp-0x8]
        mov     eax, dword ptr [ebp-0x4]
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [esi+0x4]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [esi+0x4]
        fxch    st(1)
        fstp    dword ptr [eax+0x4]
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x1c]
        fmul    dword ptr [esi+0x4]
        fxch    st(1)
        fstp    dword ptr [eax+0x8]
        fld     dword ptr [edx+0x2c]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [esi+0x14]
        fxch    st(1)
        fadd    dword ptr [esi+0xc]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x18]
        fxch    st(1)
        fstp    dword ptr [eax+0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x14]
        fxch    st(1)
        fstp    dword ptr [eax+0x10]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [esi+0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x8]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [esi+0x14]
        fxch    st(1)
        fstp    dword ptr [eax+0x14]
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [esi+0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x1c]
        fmul    dword ptr [esi+0x14]
        fxch    st(1)
        fstp    dword ptr [eax+0x18]
        fld     dword ptr [edx+0x2c]
        fmul    dword ptr [esi+0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [esi+0x24]
        fxch    st(1)
        fadd    dword ptr [esi+0x1c]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x28]
        fxch    st(1)
        fstp    dword ptr [eax+0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x24]
        fxch    st(1)
        fstp    dword ptr [eax+0x20]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [esi+0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x8]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [esi+0x24]
        fxch    st(1)
        fstp    dword ptr [eax+0x24]
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [esi+0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x1c]
        fmul    dword ptr [esi+0x24]
        fxch    st(1)
        fstp    dword ptr [eax+0x28]
        fld     dword ptr [edx+0x2c]
        fmul    dword ptr [esi+0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi+0x2c]
        fstp    dword ptr [eax+0x2c]
        pop     esi
        jmp     L_004c4f74
    L_004c4f5e:
        mov     esi, dword ptr [ebx+0x10]
        lea     edi, [ebx+0x80]
        add     esi, 0x80
        mov     ecx, 0xc
        rep movsd
    L_004c4f74:
        lea     eax, [ebx+0x80]
        lea     edi, [ebx+0xb0]
        lea     ecx, [ebx+0xf0]
        mov     dword ptr [ebp-0x4], eax
        mov     dword ptr [ebp-0x8], edi
        mov     dword ptr [ebp-0xc], ecx
        mov     edx, dword ptr [ebp-0x4]
        push    esi
        mov     esi, dword ptr [ebp-0x8]
        mov     eax, dword ptr [ebp-0xc]
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [esi+0x1c]
        fld     dword ptr [edx+0x8]
        fmul    dword ptr [esi+0x2c]
        fxch    st(1)
        fadd    dword ptr [edx+0xc]
        fld     dword ptr [edx]
        fmul    dword ptr [esi+0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [esi+0x2c]
        fxch    st(1)
        fstp    dword ptr [eax+0xc]
        fadd    dword ptr [edx+0x1c]
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [esi+0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [esi+0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [esi+0x2c]
        fxch    st(1)
        fstp    dword ptr [eax+0x1c]
        fadd    dword ptr [edx+0x2c]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        pop     esi
        faddp   st(1), st(0)
        fstp    dword ptr [eax+0x2c]
        mov     eax, dword ptr [ebx+0x18]
        mov     edx, dword ptr [edi+0x3c]
        and     eax, 0xfffffffb
        mov     dword ptr [ecx+0x3c], edx
        mov     dword ptr [ebx+0x18], eax
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax+0x10]
        mov     ebx, dword ptr [ebx+0x144]
        test    ebx, ebx
        jz      L_004c502b
    L_004c5019:
        mov     ecx, dword ptr [ebx]
        test    ecx, ecx
        mov     ebx, dword ptr [ebx+0x4]
        jz      L_004c502b
        call    dword ptr [ecx+0x1c]
        __emit 0xEB /* jmp L_004c5019: MSVC6 miscomputes backward rel (EB F2 vs ref EB EE, off-by-4) */
        __emit 0xEE
    L_004c502b:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
