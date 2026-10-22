/*
 * FUN_10012E10 (36 B, __stdcall, 3 params) - Stores param_2 into
 * param_3[3], then SetEvent(*param_3) if non-null. Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_1002109c;   /* IAT: SetEvent */

__declspec(naked) void __cdecl FUN_10012E10(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x8]
        test    eax, eax
        mov     dword ptr [eax + 0xc], ecx
        jz      L_12e2c
        mov     eax, dword ptr [eax]
        test    eax, eax
        jz      L_12e2c
        push    eax
        call    dword ptr [g_1002109c]      /* SetEvent */
    L_12e2c:
        mov     eax, 1
        ret     0xc
    }
}
