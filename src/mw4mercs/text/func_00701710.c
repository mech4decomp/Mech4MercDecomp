/*
 * FUN_00701710 (29 B) — gosScript state accessor. If the global object
 * (g_00856870) is non-null and its byte at +0xc is non-zero, calls
 * FUN_00701210 and returns 0; otherwise returns -1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00856870;
extern void __cdecl FUN_00701210(void);

__declspec(naked) void FUN_00701710(void)
{
    __asm {
        mov     ecx, dword ptr [g_00856870]
        test    ecx, ecx
        jz      L_ret_neg
        mov     al, byte ptr [ecx + 0xc]
        test    al, al
        jz      L_ret_neg
        call    FUN_00701210
        xor     eax, eax
        ret
L_ret_neg:
        or      eax, 0xffffffff
        ret
    }
}
