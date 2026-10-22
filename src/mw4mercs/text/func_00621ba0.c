/* func_00621ba0 - ABL interpreter region
 * __thiscall void (this, arg) RET 0x4
 * Looks up a global object, XORs a tag, and dispatches through a helper.
 */
extern int g_007dab44;
extern int g_007dab40;
extern void __cdecl FUN_00629290(void);
extern void __cdecl FUN_00629990(void);

__declspec(naked) void func_00621ba0(void) {
    __asm {
        mov eax, dword ptr [g_007dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_007dab40]
        push esi
        mov esi, dword ptr [ecx+0x40]
        xor esi, 0x85739531
        jz L_621bdb
        push 0x12
        mov ecx, esi
        call FUN_00629290
        test eax, eax
        jz L_621bdb
        push 0x12
        mov ecx, esi
        call FUN_00629290
        mov edx, dword ptr [esp+8]
        push edx
        mov ecx, eax
        call FUN_00629990
    L_621bdb:
        pop esi
        ret 4
    }
}
