/*
 * FUN_0050D660 (32 B) — Call function pointer at +0x10 if non-null
 * Checks if object has a function pointer at offset +0x10,
 * if so calls a helper then calls through the function pointer
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0050d660(void)
{
    

extern void __cdecl FUN_0050d683(void);
__asm {
push esi
        mov esi, [esp+0x08]
        mov eax, [esi+0x10]
        test eax, eax
        jz skip
        mov eax, [esp+0x0C]
        push eax
        push esi
        call FUN_0050d683
        push eax
        call dword ptr [esi+0x10]
        add esp, 0x0C
skip:
        pop esi
        ret
    }


}
