/*
 * FUN_00717a10 (extent 0x717a10-0x717abd) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00753bc0(void);
extern void __cdecl FUN_00753cc0(void);

__declspec(naked) void FUN_00717a10(void)
{
    __asm {
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
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        push    ebx
        mov    ebx, dword ptr [ebp + 0xc]
        push    esi
        or    ecx, 0xffffffff
        push    edi
        xor    eax, eax
        mov    edi, ebx
        repne scasb
        not    ecx
        dec    ecx
        cmp    ecx, 5
        jae    L_7a8d
        push    ebx
        push    0x7a2564
        call    FUN_006fab90
        add    esp, 8
        test    eax, eax
        je    L_7a8d
        int 3    
L_7a8d:
        call    FUN_00753bc0
        mov    ecx, dword ptr [ebp + 0x14]
        mov    edx, dword ptr [ebp + 0x10]
        mov    esi, eax
        mov    eax, dword ptr [ebp + 0x18]
        push    eax
        mov    eax, dword ptr [ebp + 8]
        push    ecx
        push    edx
        push    0
        push    0
        push    0
        push    0
        push    ebx
        push    eax
        mov    ecx, esi
        call    FUN_00753cc0
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0x14
    }
}
