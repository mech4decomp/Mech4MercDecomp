/* func_005a8c30.c - inline-asm transcription of FUN_005a8c30 (39 bytes) */

extern int g_7f2094;
extern void __cdecl FUN_00501b40(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void func_005a8c30(void)
{
    __asm {
        push esi
        mov esi, dword ptr [g_7f2094]
        test esi, esi
        jz  L1
        mov ecx, esi
        call FUN_00501b40
        push esi
        call FUN_004084e0
        add esp, 0x4
L1:
        mov dword ptr [g_7f2094], 0x0
        pop esi
        ret
    }
}
