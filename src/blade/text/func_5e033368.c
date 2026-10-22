/* auto-transcribed 0x5E033368 (45 B) */
extern void __cdecl FUN_5e033395(void);

__declspec(naked) void FUN_5e033368(void)
{
    __asm {
            push ebp
            mov ebp, esp
            cmp dword ptr [ebp+0x10], 0xa
            jnz L37d
            cmp dword ptr [ebp+0x8], 0x0
            jge L37d
            push 0x1
            push 0xa
            jmp L382
L37d:
            push 0x0
            push dword ptr [ebp+0x10]
L382:
            push dword ptr [ebp+0xc]
            push dword ptr [ebp+0x8]
            call FUN_5e033395
            mov eax, dword ptr [ebp+0xc]
            add esp, 0x10
            pop ebp
            ret
    }
}
