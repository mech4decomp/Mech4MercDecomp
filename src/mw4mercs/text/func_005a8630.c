/* func_005a8630.c - inline-asm transcription of FUN_005a8630 (39 bytes) */

extern int g_7f2090;
extern void __cdecl FUN_004dd340(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void func_005a8630(void)
{
    __asm {
        push esi
        mov esi, dword ptr [g_7f2090]
        test esi, esi
        jz  L1
        mov ecx, esi
        call FUN_004dd340
        push esi
        call FUN_004084e0
        add esp, 0x4
L1:
        mov dword ptr [g_7f2090], 0x0
        pop esi
        ret
    }
}
