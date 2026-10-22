/* FUN_004177e0 - __thiscall, RET 0x4 (likely a destructor)
 * Calls FUN_00417470(this); if (param_1 & 1) calls FUN_00416130(g_7b8c1c, this).
 */
extern void __cdecl FUN_00417470(void);
extern void __cdecl FUN_00416130(void);
extern int g_7b8c1c;

__declspec(naked) void FUN_004177e0(void)
{
    __asm {
        push esi
        mov esi, ecx
        call FUN_00417470
        test byte ptr [esp+8], 1
        jz L_fb
        mov ecx, dword ptr [g_7b8c1c]
        push esi
        call FUN_00416130
    L_fb:
        mov eax, esi
        pop esi
        ret 4
    }
}
