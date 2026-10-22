/* FUN_00683050 - HUD element list update loop (__thiscall) */
extern void __cdecl FUN_005ef700(void);
extern void __cdecl FUN_005ef710(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_0050e1b0(void);

__declspec(naked) void FUN_00683050(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0xfffffff8
        sub esp, 0x14
        mov eax, dword ptr [ebp + 0x8]
        push ebx
        mov ebx, dword ptr [eax + 0x4]
        push esi
        push edi
        mov edi, dword ptr [eax]
        xor cl, cl
        cmp edi, ebx
        mov byte ptr [esp + 0xf], cl
        jz L310d
L3072:
        mov esi, dword ptr [edi]
        test esi, esi
        jz short L30f7
        mov eax, dword ptr [esi]
        push 0x0
        mov ecx, esi
        call dword ptr [eax + 0xb8]
        test al, al
        jz short L30f1
        mov eax, dword ptr [esi + 0xe0]
        test eax, eax
        jz short L30f1
        cmp dword ptr [eax + 0x14], 0x5
        jz short L30f1
        mov ecx, esi
        call FUN_005ef700
        fld qword ptr [ebp + 0x18]
        fsub qword ptr [ebp + 0x10]
        push 0x0
        fmulp st(1), st(0)
        fadd qword ptr [ebp + 0x10]
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
        jz short L30f1
        mov al, byte ptr [ebp + 0xc]
        test al, al
        jnz short L30ea
        mov ecx, dword ptr [esi + 0x1ac]
        push ecx
        call FUN_0050e1b0
        add esp, 0x4
        cmp eax, -0x1
        jnz short L30f1
L30ea:
        mov byte ptr [esp + 0xf], 0x1
        jmp short L30f7
L30f1:
        mov dword ptr [edi], 0x0
L30f7:
        add edi, 0x4
        cmp edi, ebx
        jnz L3072
        mov al, byte ptr [esp + 0xf]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
L310d:
        pop edi
        pop esi
        mov al, cl
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
