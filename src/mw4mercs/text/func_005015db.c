/*
 * FUN_005015db (extent 0x5015db-0x50161c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00416e20(void);

__declspec(naked) void FUN_005015db(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x1c]
        add    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    dword ptr [ecx], eax
        ret    8
        push    esi
        push    edi
        push    1
        mov    esi, ecx
        push    0
        call    FUN_00416e20
        push    1
        lea    edi, [esi + 0x18]
        push    0
        mov    ecx, edi
        mov    dword ptr [esi], 0x7763dc
        call    FUN_00416e20
        mov    dword ptr [edi], 0x7763b0
        pop    edi
        mov    eax, esi
        pop    esi
        ret    
    }
}
