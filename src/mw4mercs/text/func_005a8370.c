/* func_005a8370.c - inline-asm transcription of FUN_005a8370 (30 bytes) */

extern void __cdecl FUN_005a8390(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void *func_005a8370(void)
{
    __asm {
        push esi
        mov esi, ecx
        call FUN_005a8390
        test byte ptr [esp + 0x8], 0x1
        jz  L1
        push esi
        call FUN_004084e0
        add esp, 0x4
L1:
        mov eax, esi
        pop esi
        ret 0x4
    }
}
