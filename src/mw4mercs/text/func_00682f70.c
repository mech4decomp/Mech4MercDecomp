/* FUN_00682f70 - HUD element update/visibility check (__thiscall) */
extern void __cdecl FUN_005ef700(void);
extern void __cdecl FUN_005ef710(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_00682d20(void);
extern void __cdecl FUN_00415230(void);
extern float g_76c5b0;
extern float g_77431c;
extern int g_7f2094;

__declspec(naked) void FUN_00682f70(void)
{
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi + 0xe0]
        test eax, eax
        jz L3047
        cmp dword ptr [eax + 0x14], 0x5
        jz L3047
        mov eax, dword ptr [esi]
        push 0x0
        mov ecx, esi
        call dword ptr [eax + 0xb8]
        test al, al
        jz L3047
        mov ecx, esi
        call FUN_005ef700
        fld qword ptr [esp + 0x18]
        fsub qword ptr [esp + 0x10]
        push 0x0
        fmulp st(1), st(0)
        fadd qword ptr [esp + 0x14]
        fstp qword ptr [esp + 0x14]
        call FUN_00707e70
        mov ecx, esi
        fstp qword ptr [esp + 0x18]
        call FUN_005ef710
        fadd qword ptr [esp + 0x10]
        fcomp qword ptr [esp + 0x18]
        fnstsw ax
        __emit 0xF6  /* test ah,imm8 - MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz L3047
        fld dword ptr [esp + 0xc]
        fcomp dword ptr [g_76c5b0]
        fnstsw ax
        __emit 0xF6  /* test ah,imm8 - MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jnz short L3000
        push esi
        call FUN_00682d20
        fcomp dword ptr [esp + 0x10]
        add esp, 0x4
        fnstsw ax
        __emit 0xF6  /* test ah,imm8 - MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz L3047
L3000:
        mov eax, dword ptr [g_7f2094]
        mov ecx, dword ptr [esi + 0x4]
        push eax
        call FUN_00415230
        cmp al, 0x1
        jnz short L3043
        mov edx, dword ptr [esi]
        push 0x0
        mov ecx, esi
        call dword ptr [edx + 0xb8]
        cmp al, 0x1
        jnz short L3024
        pop esi
        ret
L3024:
        mov eax, dword ptr [esi + 0xe0]
        cmp dword ptr [eax + 0x14], 0x8
        jnz L3047
        fld dword ptr [esi + 0x244]
        fcomp dword ptr [g_77431c]
        fnstsw ax
        __emit 0xF6  /* test ah,imm8 - MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz L3047
L3043:
        mov al, 0x1
        pop esi
        ret
L3047:
        xor al, al
        pop esi
        ret
    }
}
