/*
 * FUN_0068d280 (441 B) — __thiscall (ECX = this), RET 8.
 *
 * Scans a linked array of 0x18-byte elements (this[0] begin, this[1] end)
 * for one whose segment intersects the [param_1, param_2] segment, using
 * FPU comparisons. Returns the matching element or 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76c5b0;
extern float g_76d064;

__declspec(naked) void __stdcall FUN_0068d280(void)
{
    __asm {
        mov     edx, dword ptr [ecx]
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 0x4]
        cmp     edx, edi
        jz      L_d429
        mov     esi, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0xc]
    L_d297:
        mov     al, byte ptr [edx + 0x14]
        test    al, al
        jz      L_d36a
        fld     dword ptr [esi + 0x8]
        fcomp   dword ptr [ecx + 0x8]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_d41e
        fld     dword ptr [esi + 0x8]
        fsub    dword ptr [ecx + 0x8]
        fld     dword ptr [edx + 0x8]
        fsub    dword ptr [ecx + 0x8]
        fdiv    st(0), st(1)
        fst     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_d308
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x41
        jz      L_d308
        fld     dword ptr [esi]
        fsub    dword ptr [ecx]
        fmul    dword ptr [esp + 0x10]
        fadd    dword ptr [ecx]
        fcom    dword ptr [edx]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_d306
        fcomp   dword ptr [edx + 0x4]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_d430
        jmp     L_d308
    L_d306:
        fstp    st(0)
    L_d308:
        fld     dword ptr [edx + 0xc]
        fsub    dword ptr [ecx + 0x8]
        fdiv    st(0), st(1)
        fstp    dword ptr [esp + 0x10]
        fstp    st(0)
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_d41e
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x41
        jz      L_d41e
        fld     dword ptr [esi]
        fsub    dword ptr [ecx]
        fmul    dword ptr [esp + 0x10]
        fadd    dword ptr [ecx]
        fcom    dword ptr [edx]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_d41c
        fcomp   dword ptr [edx + 0x4]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_d432
        jmp     L_d41e
    L_d36a:
        fld     dword ptr [esi]
        fcomp   dword ptr [ecx]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_d41e
        fld     dword ptr [esi]
        fsub    dword ptr [ecx]
        fld     dword ptr [edx]
        fsub    dword ptr [ecx]
        fdiv    st(0), st(1)
        fst     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_d3ca
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x41
        jz      L_d3ca
        fld     dword ptr [esi + 0x8]
        fsub    dword ptr [ecx + 0x8]
        fmul    dword ptr [esp + 0x10]
        fadd    dword ptr [ecx + 0x8]
        fcom    dword ptr [edx + 0x8]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_d3c8
        fcomp   dword ptr [edx + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_d430
        jmp     L_d3ca
    L_d3c8:
        fstp    st(0)
    L_d3ca:
        fld     dword ptr [edx + 0x4]
        fsub    dword ptr [ecx]
        fdiv    st(0), st(1)
        fstp    dword ptr [esp + 0x10]
        fstp    st(0)
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_d41e
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x41
        jz      L_d41e
        fld     dword ptr [esi + 0x8]
        fsub    dword ptr [ecx + 0x8]
        fmul    dword ptr [esp + 0x10]
        fadd    dword ptr [ecx + 0x8]
        fcom    dword ptr [edx + 0x8]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_d41c
        fcomp   dword ptr [edx + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_d432
        jmp     L_d41e
    L_d41c:
        fstp    st(0)
    L_d41e:
        add     edx, 0x18
        cmp     edx, edi
        jnz     L_d297
    L_d429:
        pop     edi
        xor     eax, eax
        pop     esi
        ret     8
    L_d430:
        fstp    st(0)
    L_d432:
        pop     edi
        mov     eax, edx
        pop     esi
        ret     8
    }
}
