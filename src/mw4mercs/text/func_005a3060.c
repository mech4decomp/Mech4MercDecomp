/*
 * func_005a3060 - Set vtable pointer and tail-call to cleanup
 * __fastcall: ECX = this
 */
__declspec(naked) void func_005a3060()
{
    

extern void __cdecl FUN_10041537f(void);
__asm {
mov     dword ptr [ecx], 0x783f84
        jmp FUN_10041537f
    }


}
