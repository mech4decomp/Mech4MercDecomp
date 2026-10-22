// 0x0055E420 (31B) - FPU math helper
// Calls FUN_00415020, subtracts 0.5, multiplies by 0.0, adds int param, converts to int
extern void __cdecl FUN_00415020(void);
extern long __cdecl _ftol(void);

__declspec(naked) void __stdcall func_0055e420(void) {
    

extern int DAT_0076d070;
extern int DAT_007dddb8;
__asm {
call FUN_00415020
        fsub dword ptr [DAT_0076d070]
        fld dword ptr [DAT_007dddb8]
        fmul st, st(1)
        fiadd dword ptr [esp + 4]
        call _ftol
        fstp st(0)
        ret
    }


}
