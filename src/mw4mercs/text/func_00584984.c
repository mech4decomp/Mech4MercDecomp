/*
 * FUN_00584984 (extent 0x584984-0x5849fc) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0077d0fc;

__declspec(naked) void FUN_00584984(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x78]
        add    ecx, 0x78
        call    dword ptr [eax + 4]
        fld    dword ptr [eax + 0x2b8]
        fmul    dword ptr [g_0077d0fc]
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 8]
        fstp    dword ptr [ecx]
        fld    dword ptr [eax + 0x2c0]
        fmul    dword ptr [g_0077d0fc]
        fstp    dword ptr [edx]
        ret    8
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        push    edi
        call    dword ptr [eax + 4]
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        mov    edi, eax
        call    dword ptr [edx + 0x114]
        fmul    dword ptr [g_0077d0fc]
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 0x10]
        fstp    dword ptr [eax]
        fld    dword ptr [edi + 0x2c4]
        pop    edi
        fmul    dword ptr [g_0077d0fc]
        pop    esi
        fstp    dword ptr [ecx]
        ret    8
    }
}
