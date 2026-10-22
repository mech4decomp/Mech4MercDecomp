/* FUN_00683120 - HUD element list update with 3D distance check (__thiscall) */
extern void __cdecl FUN_00507f90(void);
extern void __cdecl FUN_00682d20(void);
extern void __cdecl FUN_00415230(void);
extern float g_77431c;
extern int g_7f2094;

__declspec(naked) void FUN_00683120(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x44
        mov ecx, dword ptr [ebp + 0x8]
        mov edx, dword ptr [ecx + 0x4]
        push edi
        mov edi, dword ptr [ecx]
        xor al, al
        cmp edi, edx
        mov byte ptr [ebp - 0x1], al
        jz L322d
        push ebx
        mov ebx, dword ptr [ebp + 0xc]
        push esi
L3141:
        mov esi, dword ptr [edi]
        test esi, esi
        jz L3217
        mov eax, dword ptr [esi + 0x198]
        test eax, eax
        jz short L31ca
        mov ecx, dword ptr [esi + 0x198]
        lea eax, [ebp - 0x44]
        push eax
        call FUN_00507f90
        fld dword ptr [eax + 0xc]
        fsubr dword ptr [ebx]
        mov ecx, dword ptr [eax + 0x1c]
        fld dword ptr [ebx + 0x4]
        mov edx, dword ptr [eax + 0x2c]
        mov dword ptr [ebp - 0x10], ecx
        fsub dword ptr [ebp - 0x10]
        fld dword ptr [ebx + 0x8]
        mov dword ptr [ebp - 0xc], edx
        fsub dword ptr [ebp - 0xc]
        /* FPU register-stack block: MSVC6 cannot encode fld st(2)/fld st(3)/faddp
           and its FPU stack tracker desyncs if mixed with native ops, so emit raw */
        __emit 0xD9  /* fld st(0) */
        __emit 0xC0
        __emit 0xD8  /* fmul st(1) */
        __emit 0xC9
        __emit 0xD9  /* fld st(2) - MSVC6 rejects fld st(n) for n>1 */
        __emit 0xC2
        __emit 0xD8  /* fmul st(3) */
        __emit 0xCB
        __emit 0xDE  /* faddp st(1),st(0) - MSVC6 rejects in this context */
        __emit 0xC1
        __emit 0xD9  /* fld st(3) - MSVC6 rejects fld st(n) for n>1 */
        __emit 0xC3
        __emit 0xD8  /* fmul st(4) */
        __emit 0xCC
        __emit 0xDE  /* faddp st(1),st(0) - MSVC6 rejects in this context */
        __emit 0xC1
        fstp dword ptr [ebp + 0xc]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        mov eax, dword ptr [ebp + 0xc]
        sar eax, 0x1
        add eax, 0x1fc00000
        mov dword ptr [ebp - 0x8], eax
        fld dword ptr [ebp - 0x8]
        mov esi, dword ptr [edi]
        fstp dword ptr [ebp + 0xc]
        push esi
        call FUN_00682d20
        fcomp dword ptr [ebp + 0xc]
        add esp, 0x4
        fnstsw ax
        __emit 0xF6  /* test ah,imm8 - MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz short L31ca
        mov dword ptr [edi], 0x0
        jmp L3217
L31ca:
        mov eax, dword ptr [g_7f2094]
        mov ecx, dword ptr [esi + 0x4]
        push eax
        call FUN_00415230
        cmp al, 0x1
        jnz short L3213
        mov eax, dword ptr [esi]
        push 0x0
        mov ecx, esi
        call dword ptr [eax + 0xb8]
        cmp al, 0x1
        jz short L3213
        mov ecx, dword ptr [esi + 0xe0]
        cmp dword ptr [ecx + 0x14], 0x8
        jnz short L320b
        fld dword ptr [esi + 0x244]
        fcomp dword ptr [g_77431c]
        fnstsw ax
        __emit 0xF6  /* test ah,imm8 - MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz short L3213
L320b:
        mov dword ptr [edi], 0x0
        jmp L3217
L3213:
        mov byte ptr [ebp - 0x1], 0x1
L3217:
        mov edx, dword ptr [ebp + 0x8]
        mov eax, dword ptr [edx + 0x4]
        add edi, 0x4
        cmp edi, eax
        jnz L3141
        mov al, byte ptr [ebp - 0x1]
        pop esi
        pop ebx
L322d:
        pop edi
        mov esp, ebp
        pop ebp
        ret
    }
}
