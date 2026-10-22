/* FUN_0042a260 - MLR vtable-set + tail-call thunk */
extern void __cdecl FUN_00486250(void);

__declspec(naked) void func_0042a260(void)
{
    __asm {
        mov dword ptr [ecx], 0x76e090
        jmp FUN_00486250
    }
}
