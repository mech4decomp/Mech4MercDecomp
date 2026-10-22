/*
 * FUN_005d4de0 (453 B) — __thiscall, RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041c540(void);

__declspec(naked) void __stdcall FUN_005d4de0(void)
{
    

extern int DAT_007b220c;
extern int DAT_00770168;
extern int DAT_0076d064;
extern int DAT_0076d070;
__asm {
sub     esp, 0x18
        push    ebx
        mov     ebx, dword ptr [esp + 0x24]
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esp + 0x2c]
        mov     eax, dword ptr [edi]
        mov     ecx, dword ptr [edi + 0x4]
        mov     edx, dword ptr [edi + 0x8]
        mov     dword ptr [esi + 0x344], eax
        mov     eax, dword ptr [ebx]
        mov     dword ptr [esi + 0x350], eax
        mov eax, dword ptr [DAT_007b220c]
        push    eax
        mov     dword ptr [esi + 0x348], ecx
        mov     ecx, dword ptr [ebx + 0x4]
        mov     dword ptr [esi + 0x34c], edx
        mov     edx, dword ptr [ebx + 0x8]
        xor     ebp, ebp
        push    ebx
        push    edi
        mov     dword ptr [esi + 0x354], ecx
        mov     dword ptr [esi + 0x358], edx
        mov     dword ptr [esi + 0x354], ebp
        mov     dword ptr [esi + 0x348], ebp
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jz      L_4eb3
        fld     dword ptr [edi]
        fadd dword ptr [DAT_00770168]
        fst     dword ptr [esi + 0x314]
        fld     dword ptr [edi + 0x8]
        pop     edi
        fadd dword ptr [DAT_00770168]
        fst     dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x28]
        fstp    dword ptr [esi + 0x31c]
        mov     dword ptr [esi + 0x328], ecx
        fstp    dword ptr [esi + 0x320]
        fld     dword ptr [ebx]
        fadd dword ptr [DAT_00770168]
        fst     dword ptr [esi + 0x32c]
        fld     dword ptr [ebx + 0x8]
        fadd dword ptr [DAT_00770168]
        fst     dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x28]
        fstp    dword ptr [esi + 0x334]
        mov     dword ptr [esi + 0x340], edx
        fstp    dword ptr [esi + 0x338]
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x18
        ret     0xc
L_4eb3:
        fld     dword ptr [ebx]
        mov     dword ptr [esi + 0x33c], ebp
        fsub    dword ptr [edi]
        mov     dword ptr [esi + 0x330], ebp
        fld     dword ptr [ebx + 0x4]
        mov     dword ptr [esi + 0x324], ebp
        fsub    dword ptr [edi + 0x4]
        mov     dword ptr [esi + 0x318], ebp
        fld     dword ptr [ebx + 0x8]
        fsub    dword ptr [edi + 0x8]
        fstp    dword ptr [esp + 0x18]
        fld     st(0)
        fmulp   st(1), st
        fld     st(1)
        fmul    st, st(2)
        faddp   st(1), st
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [esp + 0x18]
        faddp   st(1), st
        fsqrt
        fdivr dword ptr [DAT_0076d064]
        fst     dword ptr [esp + 0x2c]
        fmulp   st(1), st
        fld     dword ptr [esp + 0x2c]
        fmul    dword ptr [esp + 0x18]
        fld     st(0)
        fchs
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x34]
        fmul dword ptr [DAT_0076d070]
        fld     st(0)
        fld     st(0)
        fmul    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x10]
        fmul    st, st(3)
        fstp    dword ptr [esp + 0x18]
        fst     dword ptr [esp + 0x2c]
        fmul    st, st(1)
        fstp    dword ptr [esp + 0x1c]
        fstp    st(0)
        fmul    dword ptr [esp + 0x2c]
        fld     dword ptr [esp + 0x10]
        fadd    dword ptr [edi]
        fstp    dword ptr [esi + 0x314]
        fld     dword ptr [esp + 0x18]
        fadd    dword ptr [edi + 0x8]
        fstp    dword ptr [esi + 0x31c]
        fld     dword ptr [esp + 0x1c]
        fadd    dword ptr [edi]
        fstp    dword ptr [esi + 0x320]
        fld     st(0)
        fadd    dword ptr [edi + 0x8]
        pop     edi
        fstp    dword ptr [esi + 0x328]
        fld     dword ptr [esp + 0xc]
        fadd    dword ptr [ebx]
        fstp    dword ptr [esi + 0x32c]
        fld     dword ptr [esp + 0x14]
        fadd    dword ptr [ebx + 0x8]
        fstp    dword ptr [esi + 0x334]
        fld     dword ptr [esp + 0x18]
        fadd    dword ptr [ebx]
        fstp    dword ptr [esi + 0x338]
        fadd    dword ptr [ebx + 0x8]
        fstp    dword ptr [esi + 0x340]
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x18
        ret     0xc
    }


}
