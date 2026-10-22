/*
 * FUN_005EB260 (282 B) — __thiscall (ECX = this).
 *
 * State-machine update on this+0x1e8/0x1e4, then a float accumulator
 * update driven by this+0x1e0 (2/4/other). Calls FUN_00707e70(0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00707e70(int param);

__declspec(naked) void __fastcall FUN_005eb260(void *param)
{
    

extern int DAT_00789868;
extern int DAT_007899ec;
extern int DAT_0076d070;
extern int DAT_0076c5b0;
extern int DAT_007899e8;
__asm {
push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 0x1e0]
        cmp     edi, 0x3
        jz      L_ret
        mov     eax, dword ptr [esi + 0x1e8]
        test    eax, eax
        jz      L1
        cmp     eax, 0x3
        jnz     L2
L1:
        fld     dword ptr [esi + 0x1f0]
        mov     dword ptr [esi + 0x1e8], 0x2
        fsub    dword ptr [esi + 0x1fc]
        fstp    dword ptr [esi + 0x1fc]
L2:
        mov     eax, dword ptr [esi + 0x1e4]
        cmp     eax, 0x2
        jz      L3
        cmp     eax, 0x1
        jnz     L4
L3:
        fld     dword ptr [esi + 0x1f0]
        mov     dword ptr [esi + 0x1e4], 0x3
        fsub    dword ptr [esi + 0x1f8]
        fstp    dword ptr [esi + 0x1f8]
L4:
        push    0x0
        call    FUN_00707e70
        cmp     edi, 0x2
        jz      L5
        cmp     edi, 0x4
        jnz     L6
        mov     dword ptr [esi + 0x1bc], 0x0
L6:
        fld dword ptr [DAT_00789868]
        fmul dword ptr [DAT_007899ec]
        fdivr   dword ptr [esi + 0x1bc]
        fmul dword ptr [DAT_0076d070]
        fcom dword ptr [DAT_0076c5b0]
        fnstsw ax
        test    ah, 0x41
        jz      L7
        fchs
L7:
        fadd    st(0), st(1)
        fadd dword ptr [DAT_0076d070]
        fstp    dword ptr [esi + 0x1c4]
        jmp     L8
L5:
        fcom    dword ptr [esi + 0x1c4]
        fnstsw ax
        test    ah, 0x41
        jnz     L9
        fstp    st(0)
        fld dword ptr [DAT_00789868]
        fmul dword ptr [DAT_007899e8]
        fstp    dword ptr [esi + 0x1bc]
        jmp     L10
L9:
        fld     dword ptr [esi + 0x1c4]
        fsub    st(0), st(1)
        fsubr dword ptr [DAT_0076d070]
        fadd    st(0), st(0)
        fmul dword ptr [DAT_00789868]
        fmul dword ptr [DAT_007899e8]
        fstp    dword ptr [esi + 0x1bc]
L8:
        fstp    st(0)
L10:
        mov     dword ptr [esi + 0x1c0], 0x0
        mov     dword ptr [esi + 0x1e0], 0x2
L_ret:
        pop     edi
        pop     esi
        ret
    }


}
