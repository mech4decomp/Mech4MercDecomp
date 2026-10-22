/* func_00609d20 - animation-blend subsystem */
extern void __cdecl FUN_00416990(void);
extern void __cdecl FUN_0041fc80(void);

__declspec(naked) void func_00609d20(void)
{
    __asm {
        push esi
        push edi
        mov esi, ecx
        push 0x1
        lea edi, [esi+0x18]
        push 0x0
        mov ecx, edi
        mov dword ptr [esi+0x8], 0x0
        call FUN_00416990
        mov dword ptr [edi], 0x78bfe8
        lea edi, [esi+0x30]
        push 0x0
        mov ecx, edi
        call FUN_0041fc80
        mov dword ptr [edi], 0x78bfd0
        pop edi
        mov dword ptr [esi], 0x78bf78
        mov dword ptr [esi+0x40], 0x0
        mov eax, esi
        pop esi
        ret
    }
}
