/*
 * FUN_006a5770 (63 B) — __cdecl helper returning a float.
 *
 * Calls virtual method at vtable+0x98 twice, comparing results against
 * param_2 and param_3; returns _DAT_0076d064 or _DAT_0076c5b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;
extern float g_0076c5b0;

__declspec(naked) void FUN_006a5770(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x98]
        fcomp   dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_ret_76c5b0
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x98]
        fcomp   dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jz      L_ret_76c5b0
        fld     dword ptr [g_0076d064]
        pop     esi
        ret
    L_ret_76c5b0:
        fld     dword ptr [g_0076c5b0]
        pop     esi
        ret
    }
}
