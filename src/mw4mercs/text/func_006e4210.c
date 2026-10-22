/* FUN_006e4210 - 24 bytes, __cdecl, RET */
extern void *g_0076b598;
__declspec(naked) void FUN_006e4210(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0x8]
        push    eax
        push    ecx
        push    edx
        push    0x0
        call    dword ptr [g_0076b598]
        ret
    }
}
