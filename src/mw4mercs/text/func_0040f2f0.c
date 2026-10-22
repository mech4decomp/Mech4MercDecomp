/* FUN_0040f2f0 - loader/parser subsystem helper (free wrapper) */

extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void func_0040f2f0(void)
{
    __asm {
        mov eax, dword ptr [esp+4]
        test eax, eax
        jz L1
        push eax
        call FUN_004084e0
        pop ecx
    L1:
        ret
    }
}
