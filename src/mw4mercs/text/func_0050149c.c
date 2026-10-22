/*
 * FUN_0050149c (extent 0x50149c-0x50152a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_005013f0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_0050149c(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        push    0x77636c
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_14b2
        int 3    
L_14b2:
        ret    8
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
        push    0x77636c
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_14d2
        int 3    
L_14d2:
        ret    8
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
        push    0x77636c
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_14f2
        int 3    
L_14f2:
        xor    al, al
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 8]
        push    esi
        push    eax
        mov    eax, dword ptr [esp + 0xc]
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x776390
        mov    eax, esi
        pop    esi
        ret    0x10
    }
}
