/*
 * FUN_004d379f (extent 0x4d379f-0x4d388e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004d3890(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004d379f(void)
{
    __asm {
        nop    
        push    0x7728c8
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_37b2
        int 3    
L_37b2:
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
        mov    byte ptr [ecx + 0x15], 1
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
        nop    
        nop    
        nop    
        nop    
        push    0x7728e8
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_37f2
        int 3    
L_37f2:
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
        push    0x7728e8
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_3812
        int 3    
L_3812:
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
        push    0x7728e8
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_3832
        int 3    
L_3832:
        ret    0xc
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
        push    0x7728e8
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_3852
        int 3    
L_3852:
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
        mov    al, 1
        ret    0xc
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
        push    esi
        mov    esi, ecx
        call    FUN_004d3890
        test    byte ptr [esp + 8], 1
        je    L_3888
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_3888:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
