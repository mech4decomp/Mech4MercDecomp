/* func_005a85e0.c - inline-asm transcription of FUN_005a85e0 (77 bytes) */

extern int g_7f2598;
extern int g_7f2090;
extern void *__cdecl FUN_004084d0(int);
extern void __cdecl FUN_004dd270(int, const char *, int, int, void *, void *, void *);

__declspec(naked) void func_005a85e0(void)
{
    __asm {
        push esi
        push 0x24
        call FUN_004084d0
        mov esi, eax
        add esp, 0x4
        test esi, esi
        jz  L1
        mov eax, dword ptr [g_7f2598]
        push 0x5052a0
        push 0x5a8660
        push 0x784fa0
        push 0x1
        push eax
        push 0x784fb8
        push 0x4a5
        mov ecx, esi
        call FUN_004dd270
        mov dword ptr [g_7f2090], esi
        pop esi
        ret
L1:
        mov dword ptr [g_7f2090], 0x0
        pop esi
        ret
    }
}
