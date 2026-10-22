/* FUN_0042a1a0 - MLRSpriteCloud factory (alloc + ctor, store to global) */
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern int g_007da714;
extern int g_007b96c8;

__declspec(naked) void func_0042a1a0(void)
{
    __asm {
        push 0x14
        call FUN_004084d0
        add esp, 0x4
        test eax, eax
        jz L_42a1c9
        mov ecx, dword ptr [g_007da714]
        push ecx
        push 0x76e06c
        push 0x72
        mov ecx, eax
        call FUN_004151c0
        mov dword ptr [g_007b96c8], eax
        ret
L_42a1c9:
        mov dword ptr [g_007b96c8], 0x0
        ret
    }
}
