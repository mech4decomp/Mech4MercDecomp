/*
 * FUN_005ae4a0 (349 B) — Vector setup with FPU math.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00551870(void *param);
extern void __stdcall FUN_005aeeb0(void);

__declspec(naked) void __stdcall FUN_005ae4a0(void)
{
    

extern int DAT_007b220c;
__asm {
sub     esp, 0x28
        mov     eax, dword ptr [esp + 0x30]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x30]
        mov     dword ptr [esi + 0x188], ecx
        mov     ecx, dword ptr [eax + 0x168]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [esp + 0x20], edx
        mov     edx, dword ptr [ecx + 0x4]
        mov     dword ptr [esp + 0x24], edx
        mov     edx, dword ptr [ecx + 0x8]
        mov     dword ptr [esp + 0x28], edx
        mov     edx, dword ptr [eax + 0x16c]
        mov     dword ptr [esi + 0x178], eax
        push    edi
        mov     edi, ecx
        sub     edx, edi
        mov     eax, 0x2aaaaaab
        imul    edx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     edx, 0x2
        mov     dword ptr [esi + 0x168], 0x2
        mov     dword ptr [esi + 0x180], 0x0
        jge     L_5ae51a
        mov     edx, dword ptr [ecx]
        mov     dword ptr [esp + 0xc], edx
        mov     eax, dword ptr [ecx + 0x4]
        mov     dword ptr [esp + 0x10], eax
        mov     ecx, dword ptr [ecx + 0x8]
        jmp     L_5ae52b
L_5ae51a:
        mov     edx, dword ptr [ecx + 0xc]
        mov     dword ptr [esp + 0xc], edx
        mov     eax, dword ptr [ecx + 0x10]
        mov     dword ptr [esp + 0x10], eax
        mov     ecx, dword ptr [ecx + 0x14]
L_5ae52b:
        fld     dword ptr [esp + 0xc]
        mov     dword ptr [esp + 0x14], ecx
        fsub    dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x8], 0x0
        fld     dword ptr [esp + 0x10]
        fsub    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x14]
        fsub    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0x20]
        fld     st(0)
        fmul    st, st(1)
        fstp    dword ptr [esp + 0x38]
        fstp    st(0)
        fld     dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x1c]
        fmul    dword ptr [esp + 0x1c]
        faddp   st(1), st
        fadd    dword ptr [esp + 0x38]
        fcomp dword ptr [DAT_007b220c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_5ae5bd
        fld     dword ptr [esp + 0x34]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      L_5ae5bd
        fld     dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x1c]
        fld     st(0)
        fmul    st, st(1)
        fld     st(2)
        fmul    st, st(3)
        faddp   st(1), st
        fadd    dword ptr [esp + 0x38]
        fsqrt
        fstp    st(2)
        fstp    st(0)
        fdiv    dword ptr [esp + 0x34]
        fstp    dword ptr [esp + 0x8]
L_5ae5bd:
        mov     edx, dword ptr [esp + 0x8]
        push    edx
        sub     esp, 0xc
        lea     eax, [esp + 0x1c]
        mov     ecx, esp
        push    eax
        mov     dword ptr [esi + 0x180], 0x1
        call    FUN_00551870
        sub     esp, 0xc
        lea     edx, [esp + 0x40]
        mov     ecx, esp
        push    edx
        call    FUN_00551870
        lea     ecx, [esi + 0x190]
        call    FUN_005aeeb0
        pop     edi
        pop     esi
        add     esp, 0x28
        ret     0x8
    }


}
