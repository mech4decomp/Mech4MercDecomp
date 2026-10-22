// 0x00559B30 (30B) - sub-object destructor
// Calls FUN_0041FCB0 then FUN_0041FCD0 on this+0x6A8
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);

__declspec(naked) void __stdcall func_00559b30(void) {
    __asm {
        push esi
        lea esi, [ecx + 0x6A8]
        mov ecx, esi
        call FUN_0041fcb0
        mov eax, [esp + 8]
        push eax
        mov ecx, esi
        call FUN_0041fcd0
        pop esi
        ret 4
    }
}
