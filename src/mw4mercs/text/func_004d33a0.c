/* func_004d33a0.c - inline-asm transcription of FUN_004d33a0 (57 B) */

extern void __cdecl FUN_0040eda0(void);
extern void __cdecl FUN_00411d10(void);

__declspec(naked) void func_004d33a0(void)
{
    __asm {
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esp+0xc]
        push 0x7727b4
        call FUN_0040eda0
        mov edi, eax
        mov eax, dword ptr [esi+0x10]
        push eax
        push 0x7727a8
        mov ecx, edi
        call FUN_00411d10
        mov ecx, dword ptr [esi+0x18]
        push ecx
        push 0x77279c
        mov ecx, edi
        call FUN_00411d10
        pop edi
        pop esi
        ret 0x4
    }
}
