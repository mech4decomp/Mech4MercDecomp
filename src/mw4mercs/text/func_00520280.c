// FUN_00520280 (18 bytes)
// __stdcall: dereferences ptr->field_4->[0], calls helper, RET 8 (2 params).
__declspec(naked) void __stdcall func_00520280(void)
{
    

extern void __cdecl FUN_10051fe6b(void);
__asm {
mov  eax, [esp+4]
        mov  edx, [eax+4]
        mov  eax, [edx]
        push eax
        call FUN_10051fe6b
        ret  8
    }


}
