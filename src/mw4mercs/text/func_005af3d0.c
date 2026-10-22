/*
 * FUN_005af3d0 (113 B) — __thiscall, RET 8 (two stack params).
 *
 * If flag at this+0x177 set: clear it, call FUN_005af490, and if flag at
 * this+0x175 set, compute an interpolated float into this+0x170.
 * Then tail-call FUN_004dae60(param1, param2) on this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005af490(void);
extern float __stdcall FUN_00415020(void);
extern void __stdcall FUN_004dae60(void *param1, void *param2);

__declspec(naked) void __stdcall FUN_005af3d0(void *param1, void *param2)
{
    

extern int DAT_0076d968;
extern int DAT_0076d064;
__asm {
push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x177]
        test    al, al
        jz      L42c
        mov     byte ptr [esi + 0x177], 0
        call    FUN_005af490
        mov     al, byte ptr [esi + 0x175]
        test    al, al
        jz      L42c
        fld     dword ptr [esi + 0x16c]
        fcomp qword ptr [DAT_0076d968]
        fnstsw  ax
        test    ah, 0x41
        jnz     L421
        call    FUN_00415020
        fld     dword ptr [esi + 0x16c]
        fsub dword ptr [DAT_0076d064]
        fmulp   st(1), st
        fadd dword ptr [DAT_0076d064]
        jmp     L426
L421:
        call    FUN_00415020
L426:
        fstp    dword ptr [esi + 0x170]
L42c:
        mov     eax, dword ptr [esp + 0xC]
        mov     ecx, dword ptr [esp + 0x8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_004dae60
        pop     esi
        ret     8
    }


}
