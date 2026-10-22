/*
 * FUN_005b15b0 (373 B) — __thiscall (ECX = this), RET (no stack args).
 * Reads object fields, does FPU math, calls several helpers, sets flags.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_004e2f40(void);
extern void __cdecl FUN_0040ca40(void);
extern void __cdecl FUN_0040c9e0(void);

__declspec(naked) void __fastcall FUN_005b15b0(void)
{
    

extern int DAT_00770168;
extern int DAT_00785f28;
extern int DAT_0076d064;
extern int DAT_007b8d08;
extern int DAT_007b8d0c;
extern int DAT_007b8d10;
extern int DAT_007dc728;
__asm {
sub     esp, 0x58
        push    esi
        mov     esi, ecx
        mov     eax, [esi+0xd8]
        mov     edx, [eax+0x9c]
        mov     ecx, [eax+0x8c]
        add     eax, 0x80
        mov     eax, [eax+0x2c]
        mov     [esi+0x5a4], edx
        fld     dword ptr [esi+0x5a4]
        fsub dword ptr [DAT_00770168]
        mov     [esi+0x5a0], ecx
        mov     [esp+0x4], ecx
        mov     edx, eax
        fstp    dword ptr [esp+0x8]
        mov     ecx, 0x7b8d08
        fld     dword ptr [esi+0x540]
        mov     [esi+0x5a8], eax
        fadd dword ptr [DAT_00785f28]
        mov     [esp+0xc], edx
        fstp    dword ptr [esp+0x58]
        call    FUN_0040cb00
        fsqrt
        lea     eax, [esp+0x4]
        push    eax
        lea     ecx, [esp+0x44]
        fdivr dword ptr [DAT_0076d064]
        fld dword ptr [DAT_007b8d08]
        fmul    st, st(1)
        fstp    dword ptr [esp+0x50]
        fld dword ptr [DAT_007b8d0c]
        fmul    st, st(1)
        fstp    dword ptr [esp+0x54]
        fld dword ptr [DAT_007b8d10]
        fmul    st, st(1)
        fstp    dword ptr [esp+0x58]
        fstp    st(0)
        call    FUN_0040c410
        lea     ecx, [esp+0x40]
        lea     eax, [esp+0x28]
        mov     [esp+0x28], ecx
        mov ecx, dword ptr [DAT_007dc728]
        lea     edx, [esp+0x1c]
        push    eax
        mov     [esp+0x30], edx
        mov     dword ptr [esp+0x34], 0
        mov     dword ptr [esp+0x3c], 0
        mov     dword ptr [esp+0x40], 0x1000
        call    FUN_004e2f40
        fld     dword ptr [esp+0x58]
        push    ecx
        lea     ecx, [esp+0x50]
        fstp    dword ptr [esp]
        push    ecx
        lea     ecx, [esp+0x18]
        call    FUN_0040ca40
        lea     edx, [esp+0x10]
        push    edx
        lea     eax, [esp+0x44]
        push    eax
        lea     ecx, [esp+0xc]
        call    FUN_0040c9e0
        fld     dword ptr [esi+0x5a0]
        fld     dword ptr [esp+0x8]
        mov     ecx, [esp+0x4]
        mov     edx, [esp+0x8]
        mov     eax, [esp+0xc]
        fstp    dword ptr [esp+0x14]
        fld     dword ptr [esi+0x5a8]
        mov     [esi+0x5d0], ecx
        mov     ecx, [esp+0x14]
        fstp    dword ptr [esp+0x18]
        mov     byte ptr [esi+0x5cd], 1
        fstp    dword ptr [esi+0x5a0]
        mov     [esi+0x5d4], edx
        mov     [esi+0x5d8], eax
        mov     edx, [esp+0x18]
        mov     [esi+0x5a4], ecx
        mov     ecx, [esi+0xe0]
        mov     eax, [ecx]
        push    0
        push    0x11
        mov     [esi+0x5a8], edx
        call    dword ptr [eax+0x4]
        mov     byte ptr [esi+0x514], 1
        pop     esi
        add     esp, 0x58
        ret
    }


}
