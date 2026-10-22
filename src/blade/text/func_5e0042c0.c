/*
 * FUN_5e0042c0 (462 B) — DirectDraw wrapper: color/vertex interpolation
 * helper. 6 stack params (RET 0x18). If param_4 == 0.0f, copies a block;
 * otherwise lerps floats and packs a color via __ftol.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_5e035aa0;
extern int __cdecl FUN_5e02b4cc(void);

__declspec(naked) void FUN_5e0042c0(void)
{
    __asm {
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_5e035aa0]
        push    edi
        fnstsw ax
        test ah, 0x40
        jz      L_329
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [eax + 0x20]
        mov     edi, dword ptr [ecx + 0x20]
        mov     ecx, dword ptr [esp + 0x18]
        and     edx, edi
        and     edx, 0x3f00
        pop     edi
        or      edx, ecx
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [ecx + 0x20], edx
        mov     edx, dword ptr [eax + 0x24]
        mov     dword ptr [ecx + 0x24], edx
        mov     edx, dword ptr [eax + 0x28]
        mov     dword ptr [ecx + 0x28], edx
        mov     edx, dword ptr [eax + 0x2c]
        mov     dword ptr [ecx + 0x2c], edx
        mov     edx, dword ptr [eax + 0x30]
        mov     dword ptr [ecx + 0x30], edx
        mov     edx, dword ptr [eax + 0x18]
        mov     dword ptr [ecx + 0x18], edx
        mov     edx, dword ptr [eax + 0x1c]
        mov     dword ptr [ecx + 0x1c], edx
        mov     edx, dword ptr [eax + 0x10]
        mov     eax, dword ptr [eax + 0x14]
        mov     dword ptr [ecx + 0x10], edx
        mov     dword ptr [ecx + 0x14], eax
        ret     0x18
L_329:
        fld     dword ptr [esp + 0x10]
        fdiv    dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0xc]
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        mov     edi, dword ptr [eax + 0x20]
        mov     ebp, dword ptr [esp + 0x24]
        mov     ebx, dword ptr [eax + 0x10]
        mov     ecx, dword ptr [esi + 0x20]
        xor     edx, edx
        and     ecx, edi
        mov     edi, dword ptr [esp + 0x28]
        and     ecx, 0x3f00
        mov     dword ptr [esp + 0x24], ebx
        or      ecx, ebp
        mov     dword ptr [edi + 0x20], ecx
        mov     ecx, dword ptr [esi + 0x10]
        mov     dword ptr [esp + 0x20], ecx
        mov     dl, byte ptr [esp + 0x22]
        mov     ebp, edx
        xor     edx, edx
        mov     dword ptr [esp + 0x28], ebp
        mov     dl, ch
        mov     dword ptr [esp + 0x14], edx
        mov     edx, ecx
        and     edx, 0xff
        shr     ecx, 0x18
        mov     dword ptr [esp + 0x18], edx
        mov     dword ptr [esp + 0x20], ecx
        fld     dword ptr [eax + 0x24]
        fsub    dword ptr [esi + 0x24]
        fmul    st(0), st(1)
        fadd    dword ptr [esi + 0x24]
        fstp    dword ptr [edi + 0x24]
        fld     dword ptr [eax + 0x28]
        fsub    dword ptr [esi + 0x28]
        fmul    st(0), st(1)
        fadd    dword ptr [esi + 0x28]
        fstp    dword ptr [edi + 0x28]
        fld     dword ptr [eax + 0x2c]
        fsub    dword ptr [esi + 0x2c]
        fmul    st(0), st(1)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [edi + 0x2c]
        fld     dword ptr [eax + 0x30]
        fsub    dword ptr [esi + 0x30]
        fmul    st(0), st(1)
        fadd    dword ptr [esi + 0x30]
        fstp    dword ptr [edi + 0x30]
        fld     dword ptr [eax + 0x18]
        fsub    dword ptr [esi + 0x18]
        fmul    st(0), st(1)
        fadd    dword ptr [esi + 0x18]
        fstp    dword ptr [edi + 0x18]
        fld     dword ptr [eax + 0x1c]
        fsub    dword ptr [esi + 0x1c]
        xor     eax, eax
        mov     al, byte ptr [esp + 0x26]
        fmul    st(0), st(1)
        sub     eax, ebp
        mov     dword ptr [esp + 0x24], eax
        fadd    dword ptr [esi + 0x1c]
        fstp    dword ptr [edi + 0x1c]
        fild    dword ptr [esp + 0x24]
        fmul    st(0), st(1)
        fiadd   dword ptr [esp + 0x28]
        call    FUN_5e02b4cc
        mov     ecx, ebx
        mov     bp, ax
        mov     eax, dword ptr [esp + 0x20]
        and     ebp, 0xffff
        shr     ecx, 0x18
        sub     ecx, eax
        mov     dword ptr [esp + 0x24], ecx
        fild    dword ptr [esp + 0x24]
        fmul    st(0), st(1)
        fiadd   dword ptr [esp + 0x20]
        call    FUN_5e02b4cc
        and     eax, 0xffff
        xor     edx, edx
        shl     eax, 0x8
        or      ebp, eax
        mov     eax, dword ptr [esp + 0x14]
        mov     dl, bh
        sub     edx, eax
        mov     dword ptr [esp + 0x20], edx
        fild    dword ptr [esp + 0x20]
        shl     ebp, 0x8
        fmul    st(0), st(1)
        fiadd   dword ptr [esp + 0x14]
        call    FUN_5e02b4cc
        and     eax, 0xffff
        and     ebx, 0xff
        or      ebp, eax
        mov     eax, dword ptr [esp + 0x18]
        sub     ebx, eax
        mov     dword ptr [esp + 0x20], ebx
        fild    dword ptr [esp + 0x20]
        shl     ebp, 0x8
        fmul    st(0), st(1)
        fiadd   dword ptr [esp + 0x18]
        call    FUN_5e02b4cc
        and     eax, 0xffff
        or      ebp, eax
        mov     eax, dword ptr [esi + 0x14]
        mov     dword ptr [edi + 0x10], ebp
        pop     esi
        pop     ebp
        mov     dword ptr [edi + 0x14], eax
        pop     ebx
        pop     edi
        fstp    st(0)
        ret     0x18
    }
}
