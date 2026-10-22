/*
 * FUN_004dfdcb (extent 0x4dfdcb-0x4dfe60) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c10;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_004174d0(void);
extern void __cdecl FUN_00417640(void);

__declspec(naked) void FUN_004dfdcb(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        xor    al, al
        ret    
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
        ret    
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
        nop    
        mov    eax, dword ptr [g_007b8c10]
        push    ebx
        push    esi
        push    edi
        mov    esi, ecx
        push    eax
        call    FUN_00415180
        lea    ebx, [esi + 0x10]
        push    0
        mov    ecx, ebx
        mov    dword ptr [esi + 8], 0
        mov    dword ptr [esi + 0xc], 0
        mov    dword ptr [esi], 0x76cd9c
        call    FUN_004174d0
        mov    dword ptr [ebx], 0x7739c8
        push    0x18
        mov    dword ptr [esi], 0x7739c0
        call    FUN_004084d0
        mov    edi, eax
        add    esp, 4
        test    edi, edi
        je    L_fe55
        push    1
        push    ebx
        mov    ecx, edi
        call    FUN_00417640
        mov    dword ptr [esi + 0x20], edi
        mov    dword ptr [edi], 0x773988
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        ret    
L_fe55:
        xor    eax, eax
        mov    dword ptr [esi + 0x20], eax
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        ret    
    }
}
