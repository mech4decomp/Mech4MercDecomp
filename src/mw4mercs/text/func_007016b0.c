/*
 * FUN_007016B0 (44 B) — returns 0 on success, -1 on failure.
 *
 * If global g_856870 != NULL and its byte at +0xC is nonzero, calls
 * virtual method (vtable[0x10/4])(obj, 0) on obj->m8, clears global
 * g_856868, and returns 0. Otherwise returns -1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_856870;
extern int g_856868;

__declspec(naked) int FUN_007016b0(void)
{
    __asm {
        mov     eax, dword ptr [g_856870]
        test    eax, eax
        jz      Lneg
        mov     cl, byte ptr [eax + 0xC]
        test    cl, cl
        jz      Lneg
        mov     eax, dword ptr [eax + 8]
        mov     ecx, dword ptr [eax]
        push    0
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     dword ptr [g_856868], 0
        xor     eax, eax
        ret
Lneg:
        or      eax, 0xFFFFFFFF
        ret
    }
}
