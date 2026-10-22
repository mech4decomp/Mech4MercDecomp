/*
 * FUN_0073A8C0 (31 B) — __cdecl (RET 0). If g_856b8c is nonzero, calls
 * FUN_00740DC0([g_856b8c+0xc]) and returns [g_856b8c+0xc]; else returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_856b8c;
extern void __cdecl FUN_00740dc0(void);

__declspec(naked) void FUN_0073A8C0(void)
{
    __asm {
        mov     eax, dword ptr [g_856b8c]
        test    eax, eax
        je      L_73a8dc
        mov     eax, dword ptr [eax + 0xc]
        push    eax
        call    FUN_00740dc0
        mov     ecx, dword ptr [g_856b8c]
        mov     eax, dword ptr [ecx + 0xc]
        ret
L_73a8dc:
        xor     eax, eax
        ret
    }
}
