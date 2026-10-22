/* auto-transcribed 0x5E0334ED (27 B) */
extern void __cdecl FUN_5e033467(void);

__declspec(naked) void FUN_5e0334ed(void)
{
    __asm {
            push ebp
            mov ebp, esp
            push 0x0
            push dword ptr [ebp+0x14]
            push dword ptr [ebp+0x10]
            push dword ptr [ebp+0xc]
            push dword ptr [ebp+0x8]
            call FUN_5e033467
            mov eax, dword ptr [ebp+0x10]
            pop ebp
            ret
    }
}
