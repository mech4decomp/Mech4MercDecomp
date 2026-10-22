/* FUN_006e1e30 - 15 bytes, __cdecl, RET */
extern void *g_0076b294;
__declspec(naked) void FUN_006e1e30(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    eax
        call    dword ptr [g_0076b294]
        add     esp, 0x4
        ret
    }
}
