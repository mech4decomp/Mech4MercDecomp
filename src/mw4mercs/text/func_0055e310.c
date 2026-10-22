// 0x0055E310 (30B) - scalar_deleting_destructor
// Calls ~COleControlSiteOrWnd (FUN_0041FC90) then operator delete
extern void __cdecl FUN_0041fc90(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall func_0055e310(void) {
    __asm {
        push esi
        mov esi, ecx
        call FUN_0041fc90
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
