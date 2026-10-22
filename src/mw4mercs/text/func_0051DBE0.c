/*
 * FUN_0051DBE0 (56 B) — __stdcall; XORs two globals to form an object pointer,
 * calls FUN_00617920 with a pushed arg, returns [ret+0x18]+0x68 or 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;
extern int g_7dab40;
extern void __cdecl FUN_00617920(void);

__declspec(naked) void __stdcall FUN_0051DBE0(void)
{
    __asm {
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [g_7dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [edx]
        push    ecx
        mov     ecx, dword ptr [eax + 0x44]
        xor     ecx, 0x85739531
        call    FUN_00617920
        mov     eax, dword ptr [eax + 0x18]
        test    eax, eax
        je      l_zero
        mov     eax, dword ptr [eax + 0x68]
        ret     0xc
    l_zero:
        xor     eax, eax
        ret     0xc
    }
}
