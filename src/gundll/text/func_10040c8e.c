// FUN_10040c8e (0x10040C8E) __cdecl, 47 bytes
extern void __cdecl FUN_10039b19(void);
extern void *g_iat_10049068;

__declspec(naked) void func_10040c8e(void)
{
    __asm {
        mov eax, dword ptr [esp+4]
        mov ecx, 0x10054720
        cmp eax, ecx
        jc other
        cmp eax, 0x10054980
        ja other
        sub eax, ecx
        sar eax, 5
        add eax, 0x1c
        push eax
        call FUN_10039b19
        pop ecx
        ret
other:
        add eax, 0x20
        push eax
        call dword ptr [g_iat_10049068]
        ret
    }
}
