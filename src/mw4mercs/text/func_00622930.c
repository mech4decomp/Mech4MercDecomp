/* func_00622930 - ABL interpreter region
 * __stdcall void (arg1, arg2) RET 0x8
 * Calls FUN_006229c0; if non-null, calls FUN_00624420 on the result.
 */
extern void __cdecl FUN_006229c0(void);
extern void __cdecl FUN_00624420(void);

__declspec(naked) void func_00622930(void) {
    __asm {
        mov eax, dword ptr [esp+8]
        mov edx, dword ptr [esp+4]
        push eax
        push edx
        call FUN_006229c0
        test eax, eax
        jnz L_622946
        ret 8
    L_622946:
        mov ecx, eax
        call FUN_00624420
        ret 8
    }
}
