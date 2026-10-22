/*
 * FUN_006bcf4e (extent 0x6bcf4e-0x6bcf83) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006bce70(void);

__declspec(naked) void FUN_006bcf4e(void)
{
    __asm {
        nop    
        nop    
        mov    ecx, dword ptr [esp + 4]
        mov    eax, dword ptr [ecx]
        mov    edx, dword ptr [eax + 0xc]
        cmp    dword ptr [edx], 0
        je    L_cf62
        or    eax, 0xffffffff
        ret    
L_cf62:
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [eax]
        mov    edx, dword ptr [edx + 0xc]
        cmp    dword ptr [edx], 0
        je    L_cf76
        mov    eax, 1
        ret    
L_cf76:
        push    eax
        push    ecx
        call    FUN_006bce70
        add    esp, 8
        neg    eax
        ret    
    }
}
