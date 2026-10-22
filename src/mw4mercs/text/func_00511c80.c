/*
 * func_00511C80 - Free field at +0x2c if non-null, then set +0x1c to -1
 */
__declspec(naked) void func_00511C80()
{
    

extern void __cdecl FUN_006bbe7a(void);
__asm {
push esi
        mov  esi, ecx
        mov  eax, [esi+0x2c]
        test eax, eax
        jz   skip_free
        push eax
        /* call to FUN_006BBE80+6 (shared entry point, skips prologue) */
        call FUN_006bbe7a
        mov dword ptr [esi+0x2c], 0
skip_free:
        mov dword ptr [esi+0x1c], 0xFFFFFFFF
        pop  esi
        ret
    }


}
