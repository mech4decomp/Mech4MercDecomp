// 0x0054C5A0 (30B) - scalar_deleting_destructor
// Calls FUN_00415380 (destructor) then operator delete
extern void __cdecl FUN_00415380(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall func_0054c5a0(void) {
    __asm {
        push esi
        mov esi, ecx
        call FUN_00415380
        test byte ptr [esp + 8], 1
        jz skip
        push esi
        call FUN_004084e0
        add esp, 4
skip:
        mov eax, esi
        pop esi
        ret 4
    }
}
