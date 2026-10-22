/* FUN_006276d0 - __thiscall, 30 bytes
   ABL interpreter region. Dispatcher on a state field, tail-jumping to
   handlers. */
extern void __cdecl FUN_006276f0(void);
extern void __cdecl FUN_006278b0(void);
extern void __cdecl FUN_006275a0(void);

__declspec(naked) void func_006276d0(void)
{
    __asm {
        mov eax, dword ptr [ecx+0x40]
        sub eax, 0
        jz L_e8
        dec eax
        jz L_e3
        dec eax
        jnz L_ed
        jmp FUN_006276f0
    L_e3:
        jmp FUN_006278b0
    L_e8:
        jmp FUN_006275a0
    L_ed:
        ret
    }
}
