// Auto-generated: call _stricmp with two dereferenced args
// FUN_00500850, 24 bytes

/* IAT import: _stricmp */
extern int *DAT_0076b2ac;

__declspec(naked) void func_00500850(void)
{
    __asm {
        mov eax, [esp+8]
        mov ecx, [eax]      // ecx = *arg2
        mov edx, [esp+4]
        mov eax, [edx]      // eax = *arg1
        push ecx
        push eax
        call dword ptr [DAT_0076b2ac]   // _stricmp
        add esp, 8
        ret
    }
}
