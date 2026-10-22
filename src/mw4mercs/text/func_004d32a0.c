/* func_004d32a0.c - inline-asm transcription of FUN_004d32a0 (52 B) */

extern void __cdecl FUN_0041ec50(void);

__declspec(naked) void func_004d32a0(void)
{
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp+0xc]
        mov esi, ecx
        push 0x1
        lea eax, [esi+0x10]
        push eax
        mov ecx, edi
        call FUN_0041ec50
        push 0x8
        lea ecx, [esi+0x18]
        push ecx
        mov ecx, edi
        call FUN_0041ec50
        push 0x3
        add esi, 0x1c
        push esi
        mov ecx, edi
        call FUN_0041ec50
        pop edi
        pop esi
        ret 0x4
    }
}
