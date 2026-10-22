/*
 * FUN_005b4143 (extent 0x5b4143-0x5b41ff) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dd234;
extern int    g_007f2104;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005b4200(void);
extern void __cdecl FUN_005f79d0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005b4143(void)
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
        mov    eax, dword ptr [g_007dd234]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x5a0
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_418b
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f2104]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_005b4200
        mov    esi, eax
        jmp    L_418d
L_418b:
        xor    esi, esi
L_418d:
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
        push    esi
        mov    esi, dword ptr [esp + 8]
        mov    eax, dword ptr [esi]
        push    edi
        mov    edi, ecx
        push    0x138
        mov    ecx, esi
        call    dword ptr [eax + 0x14]
        mov    ecx, dword ptr [esp + 0x10]
        push    ecx
        push    esi
        mov    ecx, edi
        call    FUN_005f79d0
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 4]
        mov    ecx, dword ptr [edi + 0x540]
        pop    edi
        mov    dword ptr [eax], 0x138
        mov    dword ptr [eax + 0x134], ecx
        pop    esi
        ret    8
    }
}
