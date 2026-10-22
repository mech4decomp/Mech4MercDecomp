/*
 * FUN_10002B20 (35 B) - __stdcall, RET 0x4.
 * Object status getter: if the object is registered (+0x28 != 0),
 * returns the status code (+0x40), or the extended error (+0x44) when
 * the status is 4; otherwise returns 0xc1120008 (not registered).
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10002B20(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        mov     al, byte ptr [ecx + 0x28]
        test    al, al
        je      L_2b3b
        mov     edx, dword ptr [ecx + 0x40]
        xor     eax, eax
        cmp     edx, 4
        jne     L_2b38
        mov     eax, dword ptr [ecx + 0x44]
    L_2b38:
        ret     0x4
    L_2b3b:
        mov     eax, 0xc1120008
        ret     0x4
    }
}
