/* func_00637ef0.c - ABL interpreter region: init/register "WeaponUpdates" object */

extern void * __cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_00415d70(void);
extern int g_00849304;
extern char g_78f158[];
extern int g_007f2d20;

__declspec(naked) void func_00637ef0(void)
{
    __asm {
        push esi
        push 0x2c
        call FUN_004084d0
        mov  esi, eax
        add  esp, 0x4
        test esi, esi
        jz   L_skip
        mov  eax, dword ptr [g_00849304]
        push eax
        push offset g_78f158
        push 0x2
        push 0xa
        push 0xc8
        mov  ecx, esi
        call FUN_00415d70
        mov  dword ptr [g_007f2d20], esi
        pop  esi
        ret
L_skip:
        mov  dword ptr [g_007f2d20], 0
        pop  esi
        ret
    }
}
