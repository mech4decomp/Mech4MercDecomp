/*
 * FUN_004d9ec3 (extent 0x4d9ec3-0x4d9f55) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_00415510(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_004daa20(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004d9ec3(void)
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
        nop    
        push    esi
        push    0x76d414
        mov    esi, ecx
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_9ee5
        int 3    
L_9ee5:
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, ecx
        mov    ecx, dword ptr [eax]
        xor    ecx, 0x85739531
        add    ecx, 0x60
        push    ecx
        mov    ecx, esi
        call    FUN_00415510
        test    al, al
        jne    L_9f2a
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        push    esi
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax]
        xor    ecx, 0x85739531
        add    ecx, 0x60
        call    FUN_004179b0
L_9f2a:
        pop    esi
        ret    4
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    esi
        add    eax, 0x14
        mov    esi, ecx
        push    eax
        call    FUN_004daa20
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx + 0x48]
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        xor    al, al
        ret    4
    }
}
