/* FUN_0040f2a0 - loader/parser subsystem helper (dtor) */

extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void func_0040f2a0(void)
{
    __asm {
        push esi
        mov esi, dword ptr [esp+8]
        mov eax, dword ptr [esi+0x10]
        test eax, eax
        jz L1
        mov cl, byte ptr [eax-1]
        dec eax
        dec cl
        mov byte ptr [eax], cl
        jnz L1
        push eax
        call FUN_004084e0
        add esp, 4
    L1:
        test esi, esi
        jz L2
        push esi
        call FUN_004084e0
        add esp, 4
    L2:
        pop esi
        ret 4
    }
}
