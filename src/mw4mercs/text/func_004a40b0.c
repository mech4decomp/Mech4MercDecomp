/* FUN_004a40b0 - MLR (MidLevelRenderer) singleton init, cdecl */
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

extern int g_dword_7da998;   /* 0x007da998 */
extern int g_dword_7da984;   /* 0x007da984 */

__declspec(naked) void func_004a40b0(void)
{
    __asm {
        push esi
        push 0x1c
        call FUN_004084d0
        mov esi, eax
        add esp, 0x4
        test esi, esi
        jz L_a40ee
        mov eax, dword ptr [g_dword_7da998]
        push eax
        push 0x7b2edc
        push 0x528
        mov ecx, esi
        call FUN_004151c0
        mov dword ptr [esi + 0x14], 0x4a4200
        mov dword ptr [esi + 0x18], 0x4a4000
        mov dword ptr [g_dword_7da984], esi
        pop esi
        ret
L_a40ee:
        mov dword ptr [g_dword_7da984], 0x0
        pop esi
        ret
    }
}
