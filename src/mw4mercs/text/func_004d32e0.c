/* func_004d32e0.c - inline-asm transcription of FUN_004d32e0 (98 B) */

extern void __cdecl FUN_0041eb40(void);
extern void __cdecl FUN_00704820(void);

__declspec(naked) void func_004d32e0(void)
{
    __asm {
        push ebx
        mov ebx, dword ptr [esp+0x8]
        push esi
        push edi
        mov esi, ecx
        lea edi, [esi+0x10]
        push 0x1
        push edi
        mov ecx, ebx
        mov dword ptr [edi], 0x0
        call FUN_0041eb40
        lea eax, [esi+0x18]
        push 0x8
        push eax
        mov ecx, ebx
        mov dword ptr [eax], 0x0
        call FUN_0041eb40
        lea eax, [esi+0x1c]
        push 0x3
        push eax
        mov ecx, ebx
        mov dword ptr [eax], 0x0
        call FUN_0041eb40
        cmp dword ptr [edi], 0x0
        pop edi
        pop esi
        pop ebx
        jz loc_3336
        push 0x3
        push 0x4
        call FUN_00704820
        ret 0x4
    loc_3336:
        push 0x0
        push 0x4
        call FUN_00704820
        ret 0x4
    }
}
