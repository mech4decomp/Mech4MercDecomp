/* func_006a28d0.c - inline-asm transcription of FUN_006a28d0 (25 B) */

extern void __cdecl FUN_006a22a0(void);

__declspec(naked) void func_006a28d0(void)
{
    __asm {
        push esi
        mov esi, ecx
        call FUN_006a22a0
        mov dword ptr [esi+0x8], 0x0
        mov dword ptr [esi], 0x799d84
        mov eax, esi
        pop esi
        ret
    }
}
