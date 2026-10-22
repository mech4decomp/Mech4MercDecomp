/* FUN_006e1e40 - 13 bytes, __cdecl, RET */
extern void *g_0076b2d0;
__declspec(naked) void FUN_006e1e40(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    eax
        call    dword ptr [g_0076b2d0]
        pop     ecx
        ret
    }
}
