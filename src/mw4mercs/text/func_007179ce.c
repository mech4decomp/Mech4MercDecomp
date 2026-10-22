/*
 * FUN_007179ce (extent 0x7179ce-0x717a58) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00753bc0(void);
extern void __cdecl FUN_00753cc0(void);

__declspec(naked) void FUN_007179ce(void)
{
    __asm {
        nop    
        nop    
        push    esi
        call    FUN_00753bc0
        mov    ecx, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [esp + 0x18]
        mov    esi, eax
        mov    eax, dword ptr [esp + 0x20]
        push    eax
        mov    eax, dword ptr [esp + 0x18]
        push    ecx
        mov    ecx, dword ptr [esp + 0x18]
        push    edx
        mov    edx, dword ptr [esp + 0x18]
        push    0
        push    0
        push    eax
        mov    eax, dword ptr [esp + 0x20]
        push    ecx
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_00753cc0
        mov    eax, esi
        pop    esi
        ret    0x1c
        nop    
        nop    
        nop    
        nop    
        push    ebx
        mov    ebx, dword ptr [esp + 0x10]
        push    esi
        mov    esi, ebx
        shr    esi, 0x10
        test    si, si
        push    edi
        jne    L_7a23
        mov    esi, ebx
L_7a23:
        call    FUN_00753bc0
        mov    ecx, dword ptr [esp + 0x20]
        mov    edx, dword ptr [esp + 0x1c]
        mov    edi, eax
        mov    eax, dword ptr [esp + 0x24]
        push    eax
        mov    eax, dword ptr [esp + 0x18]
        push    ecx
        mov    ecx, dword ptr [esp + 0x18]
        push    edx
        push    esi
        push    ebx
        push    0
        push    0
        push    eax
        push    ecx
        mov    ecx, edi
        call    FUN_00753cc0
        mov    eax, edi
        pop    edi
        pop    esi
        pop    ebx
        ret    0x18
    }
}
