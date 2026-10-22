/*
 * FUN_10002AF0 (45 B) - __stdcall, RET 0x8.
 * Object status getter: if the object is registered (+0x28 != 0) and
 * arg2 is non-null, stores the status code (+0x40) through arg2 and
 * returns 0; otherwise returns 0x80070057 (bad arg) or 0xc1120008
 * (not registered).
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10002AF0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 4]
        mov     al, byte ptr [edx + 0x28]
        test    al, al
        je      L_2b0d
        mov     ecx, dword ptr [esp + 8]
        xor     eax, eax
        test    ecx, ecx
        jne     L_2b15
        mov     eax, 0x80070057
        ret     0x8
    L_2b0d:
        mov     eax, 0xc1120008
        ret     0x8
    L_2b15:
        mov     edx, dword ptr [edx + 0x40]
        mov     dword ptr [ecx], edx
        ret     0x8
    }
}
