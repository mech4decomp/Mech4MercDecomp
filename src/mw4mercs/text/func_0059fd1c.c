/*
 * FUN_0059fd1c (extent 0x59fd1c-0x59fdd0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00415ca0(void);
extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004d21c0(void);

__declspec(naked) void FUN_0059fd1c(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        sub    esp, 0x44
        push    ebx
        push    esi
        push    edi
        push    1
        mov    ebx, ecx
        push    eax
        lea    ecx, [esp + 0x14]
        call    FUN_004d1f80
        mov    ecx, dword ptr [esp + 0x20]
        add    ecx, 0x30
        lea    edi, [ebx + 0x34]
        push    ecx
        mov    ecx, edi
        call    FUN_00416b60
        mov    esi, eax
        test    esi, esi
        je    L_fd70
        mov    ecx, dword ptr [esi + 0x1c]
        dec    ecx
        mov    eax, ecx
        test    eax, eax
        mov    dword ptr [esi + 0x1c], ecx
        jg    L_fd6d
        push    esi
        mov    ecx, edi
        call    FUN_00415ca0
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx]
L_fd6d:
        dec    dword ptr [ebx + 0x50]
L_fd70:
        lea    ecx, [esp + 0xc]
        call    FUN_004d21c0
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x44
        ret    4
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
        nop    
        nop    
        push    ebx
        push    esi
        mov    ebx, ecx
        push    edi
        lea    eax, [esp + 0x10]
        lea    edi, [ebx + 0x34]
        push    eax
        mov    ecx, edi
        call    FUN_00416b60
        mov    esi, eax
        test    esi, esi
        je    L_fdca
        mov    ecx, dword ptr [esi + 0x1c]
        dec    ecx
        mov    eax, ecx
        test    eax, eax
        mov    dword ptr [esi + 0x1c], ecx
        jg    L_fdc7
        push    esi
        mov    ecx, edi
        call    FUN_00415ca0
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx]
L_fdc7:
        dec    dword ptr [ebx + 0x50]
L_fdca:
        pop    edi
        pop    esi
        pop    ebx
        ret    4
    }
}
