/*
 * FUN_00549843 (extent 0x549843-0x54994d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dc728;
extern int    g_007dd234;
extern int    g_007ddd74;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004e2f40(void);
extern void __cdecl FUN_00501b40(void);
extern void __cdecl FUN_00549a70(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_00549843(void)
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
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x18]
        lea    eax, [ecx + 0x18]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x178]
        mov    edx, dword ptr [ecx + 0x564]
        sub    esp, 0x24
        test    edx, edx
        jne    L_988c
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x170]
        jmp    L_988e
L_988c:
        xor    eax, eax
L_988e:
        mov    ecx, dword ptr [esp + 0x28]
        mov    dword ptr [esp + 0x1c], eax
        lea    eax, [esp + 0xc]
        mov    dword ptr [esp + 0xc], ecx
        mov    ecx, dword ptr [g_007dc728]
        __emit 0x8D  // 141 edx, [esp] (explicit disp8=0)
__emit 0x54
__emit 0x24
__emit 0x00
        push    eax
        mov    dword ptr [esp + 0x14], edx
        mov    dword ptr [esp + 0x18], 0
        mov    dword ptr [esp + 0x24], 0x2000
        call    FUN_004e2f40
        test    eax, eax
        setne    al
        add    esp, 0x24
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [g_007ddd74]
        test    esi, esi
        je    L_98eb
        mov    ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_98eb:
        mov    dword ptr [g_007ddd74], 0
        pop    esi
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
        mov    eax, dword ptr [g_007dd234]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x970
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_9942
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007ddd74]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_00549a70
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_9942:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
    }
}
