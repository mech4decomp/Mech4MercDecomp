/*
 * FUN_004f44e7 (extent 0x4f44e7-0x4f4579) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc130;
extern int    g_007dc894;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d9400(void);
extern void __cdecl FUN_004f4580(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004f44e7(void)
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
        mov    eax, dword ptr [g_007dc130]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x178
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_4532
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007dc894]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_004f4580
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_4532:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [esp + 8]
        mov    eax, dword ptr [esi]
        push    edi
        mov    edi, ecx
        push    0x64
        mov    ecx, esi
        call    dword ptr [eax + 0x14]
        mov    ecx, dword ptr [esp + 0x10]
        push    ecx
        push    esi
        mov    ecx, edi
        call    FUN_004d9400
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 4]
        mov    ecx, dword ptr [edi + 0x16c]
        pop    edi
        mov    dword ptr [eax], 0x64
        mov    dword ptr [eax + 0x60], ecx
        pop    esi
        ret    8
    }
}
