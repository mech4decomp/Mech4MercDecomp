/*
 * FUN_0061fc80 (22 B) - __thiscall (RET 0x4). If [ECX+0x18] (a function
 * pointer) is non-null, calls it with the stack param, then returns 0.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_0061fc80(void)
{
    __asm {
        mov     eax, dword ptr [ecx+0x18]
        test    eax, eax
        jz      L_91
        mov     ecx, dword ptr [esp+4]
        push    ecx
        call    eax
        add     esp, 4
L_91:
        xor     eax, eax
        ret     4
    }
}
