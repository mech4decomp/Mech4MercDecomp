/* FUN_0067a640 - HUD debug menu getter */
extern int g_80dab0;

__declspec(naked) void func_0067a640(void)
{
    __asm {
        mov eax, dword ptr [g_80dab0]
        ret
    }
}
