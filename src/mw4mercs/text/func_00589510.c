/*
 * FUN_00589510 (250 B)
 *
 * CFLAGS: /O1
 */

extern float DAT_007B4384;
extern float DAT_00781558;

__declspec(naked) void __stdcall FUN_00589510(void)
{
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi+78h]
        lea ecx, [esi+78h]
        push edi
        call dword ptr [eax+4]
        mov edx, dword ptr [esi]
        mov ecx, esi
        mov edi, eax
        mov dword ptr [esi+834h], 0
        call dword ptr [edx+110h]
        fld dword ptr [esi+440h]
        fmul dword ptr [esi+430h]
        fmulp st(1), st
        fld dword ptr [DAT_007B4384]
        fpatan
        fmul dword ptr [edi+2FCh]
        fdiv dword ptr [DAT_00781558]
        fcom dword ptr [esi+830h]
        fst dword ptr [esi+834h]
        fnstsw ax
        test ah, 41h
        jnz L_0x7F
        fld dword ptr [edi+2F8h]
        fmul dword ptr [esp+0Ch]
        fadd dword ptr [esi+830h]
        fst dword ptr [esi+830h]
        fcomp st(1)
        fnstsw ax
        test ah, 41h
        jnz L_0xB3
        fstp dword ptr [esi+830h]
        jmp L_0xB5
L_0x7F:
        fcom dword ptr [esi+830h]
        fnstsw ax
        test ah, 1
        jz L_0xB3
        fld dword ptr [edi+2F8h]
        fmul dword ptr [esp+0Ch]
        fsubr dword ptr [esi+830h]
        fst dword ptr [esi+830h]
        fcomp st(1)
        fnstsw ax
        test ah, 1
        jz L_0xB3
        fstp dword ptr [esi+830h]
        jmp L_0xB5
L_0xB3:
        fstp st(0)
L_0xB5:
        mov al, byte ptr [esi+4A0h]
        test al, al
        jz L_0xD1
        fld dword ptr [edi+344h]
        fmul dword ptr [esi+830h]
        fstp dword ptr [esi+830h]
L_0xD1:
        fld dword ptr [esi+478h]
        pop edi
        fadd dword ptr [esi+830h]
        fstp dword ptr [esi+478h]
        fld dword ptr [esi+6F0h]
        fadd dword ptr [esi+474h]
        fstp dword ptr [esi+474h]
        pop esi
        ret 4
    }
}
