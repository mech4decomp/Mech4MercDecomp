/* FUN_00682ec0 - HUD element list scan with interpolation (__thiscall) */
extern void __cdecl FUN_005ef700(void);
extern void __cdecl FUN_005ef710(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_00682ec0(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0xfffffff8
        sub esp, 0x10
        mov eax, dword ptr [ebp + 0x8]
        push esi
        mov esi, dword ptr [eax + 0x3f8]
        push edi
Led4:
        test esi, esi
        jz short Lf20
        mov edi, dword ptr [esi]
        test edi, edi
        mov esi, dword ptr [esi + 0x4]
        jz short Lf20
        mov ecx, edi
        call FUN_005ef700
        fld qword ptr [ebp + 0x14]
        fsub qword ptr [ebp + 0xc]
        push 0x0
        fmulp st(1), st(0)
        fadd qword ptr [ebp + 0xc]
        fstp qword ptr [esp + 0xc]
        call FUN_00707e70
        mov ecx, edi
        fstp qword ptr [esp + 0x10]
        call FUN_005ef710
        fadd qword ptr [esp + 0x8]
        fcomp qword ptr [esp + 0x10]
        fnstsw ax
        __emit 0xF6  /* test ah,imm8 - MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz short Led4
        mov al, 0x1
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
Lf20:
        pop edi
        xor al, al
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
