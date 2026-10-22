/*
 * FUN_00501310 (36 B) — Constructor-like function
 * Calls init function, then sets vtable pointer to 0x0077634C
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_00501310(void)
{
    

extern void __cdecl FUN_005013e2(void);
__asm {
mov eax, [esp+0x08]
        push esi
        push 0x00
        push 0x0A
        mov esi, ecx
        mov ecx, [esp+0x10]
        push eax
        push ecx
        mov ecx, esi
        call FUN_005013e2
        mov dword ptr [esi], 0x0077634C
        mov eax, esi
        pop esi
        ret 0x08
    }


}
