/*
 * FUN_005cc49b (extent 0x5cc49b-0x5cc50a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004dae60(void);
extern void __cdecl FUN_005dcc10(void);

__declspec(naked) void FUN_005cc49b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        jmp    FUN_005dcc10
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
        cmp    dword ptr [esi + 0x1e4], 0x40000000
        push    edi
        jne    L_c4f4
        lea    edi, [esi + 0x1c8]
        mov    ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        je    L_c4f4
        mov    ecx, edi
        call    FUN_0041fd80
        mov    eax, dword ptr [eax + 0x10]
        shr    eax, 0x13
        test    al, 1
        je    L_c4f4
        mov    ecx, dword ptr [esi + 0x314]
        mov    edx, dword ptr [ecx]
        push    0
        push    3
        call    dword ptr [edx + 0x88]
L_c4f4:
        mov    eax, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_004dae60
        pop    edi
        pop    esi
        ret    8
    }
}
