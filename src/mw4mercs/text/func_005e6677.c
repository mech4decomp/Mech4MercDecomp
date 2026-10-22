/*
 * FUN_005e6677 (extent 0x5e6677-0x5e6726) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dd234;
extern int    g_007f2558;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005e66f0(void);
extern void __cdecl FUN_005e7a30(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005e6677(void)
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
        mov    eax, dword ptr [g_007dd234]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x420
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_66bb
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f2558]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_005e66f0
        mov    esi, eax
        jmp    L_66bd
L_66bb:
        xor    esi, esi
L_66bd:
        call    FUN_006f49a0
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 4]
        mov    eax, esi
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
        call    FUN_005e7a30
        mov    dword ptr [esi], 0x7890c8
        mov    eax, esi
        pop    esi
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, 0xd
        ret    
    }
}
