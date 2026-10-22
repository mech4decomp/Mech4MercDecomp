/* FUN_0067a4e0 - HUD debug menu teardown */
extern void __cdecl FUN_004084e0(void *p);
extern int g_80dab0;

__declspec(naked) void func_0067a4e0(void)
{
    __asm {
        mov eax, dword ptr [ecx]
        test eax, eax
        mov dword ptr [g_80dab0], 0
        jz done
        push eax
        call FUN_004084e0
        pop ecx
done:
        ret
    }
}
