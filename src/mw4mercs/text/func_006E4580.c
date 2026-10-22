/*
 * FUN_006E4580 (extent 0x6E4580-0x6E459E, 30 bytes) - UTIL in-.text block.
 * ret 0x10. Transcribed from capstone disasm.
 */
#pragma warning(disable : 4035 4793)

extern int *g_0076b570;

extern void __cdecl FUN_006e5910(void);

__declspec(naked) void func_006E4580(void)
{
    __asm {
        cmp     dword ptr [esp + 8], 0x10
        jne     L_4599
        call    FUN_006e5910
        mov     eax, dword ptr [esp + 4]
        push    1
        push    eax
        call    dword ptr [g_0076b570]
L_4599:
        xor     eax, eax
        ret     0x10
    }
}
