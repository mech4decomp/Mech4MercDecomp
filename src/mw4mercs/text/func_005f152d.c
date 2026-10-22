/*
 * FUN_005f152d (extent 0x5f152d-0x5f1569) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004f4280(void);

__declspec(naked) void FUN_005f152d(void)
{
    __asm {
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_004f4280
        mov    edx, dword ptr [esi]
        push    0
        mov    ecx, esi
        call    dword ptr [edx + 0xa8]
        mov    eax, dword ptr [esi]
        push    0
        mov    ecx, esi
        call    dword ptr [eax + 0xac]
        pop    esi
        ret    8
        mov    eax, ecx
        mov    dword ptr [eax], 0xa
        ret    
    }
}
