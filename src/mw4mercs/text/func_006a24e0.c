/* func_006a24e0.c - inline-asm transcription of FUN_006a24e0 (30 B) */

extern void __cdecl FUN_006a22e0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void func_006a24e0(void)
{
    __asm {
        push esi
        mov esi, ecx
        call FUN_006a22e0
        test byte ptr [esp+0x8], 0x1
        jz L24f8
        push esi
        call FUN_004084e0
        add esp, 0x4
L24f8:
        mov eax, esi
        pop esi
        ret 0x4
    }
}
