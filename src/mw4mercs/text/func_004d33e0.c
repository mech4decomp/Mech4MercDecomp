/* func_004d33e0.c - inline-asm transcription of FUN_004d33e0 (113 B) */

extern void __cdecl FUN_0040ecc0(void);
extern void __cdecl FUN_00411cb0(void);
extern void __cdecl FUN_00704820(void);

__declspec(naked) void func_004d33e0(void)
{
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esp+0xc]
        push 0x7727b4
        call FUN_0040ecc0
        mov esi, eax
        test esi, esi
        jz loc_344c
        push ebx
        push 0x0
        lea ebx, [edi+0x10]
        push ebx
        push 0x7727a8
        mov ecx, esi
        call FUN_00411cb0
        push 0x0
        lea eax, [edi+0x18]
        push eax
        push 0x77279c
        mov ecx, esi
        call FUN_00411cb0
        push 0x0
        add edi, 0x1c
        push edi
        push 0x772790
        mov ecx, esi
        call FUN_00411cb0
        cmp dword ptr [ebx], 0x0
        pop ebx
        jz loc_3443
        push 0x3
        push 0x4
        call FUN_00704820
        pop edi
        pop esi
        ret 0x4
    loc_3443:
        push 0x0
        push 0x4
        call FUN_00704820
    loc_344c:
        pop edi
        pop esi
        ret 0x4
    }
}
