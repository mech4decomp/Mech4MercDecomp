// 0x00549040 (30B) - scalar_deleting_destructor
// Calls FUN_004DD1C0 (destructor) then operator delete
extern void __cdecl FUN_004dd1c0(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall func_00549040(void) {
    __asm {
        push esi
        mov esi, ecx
        call FUN_004dd1c0
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
