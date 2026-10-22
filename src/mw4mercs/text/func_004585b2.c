/*
 * FUN_004585b2 (extent 0x4585b2-0x458651) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007d98f8;
extern int    g_007d9900;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00458360(void);
extern void __cdecl FUN_0047fe80(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004585b2(void)
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
        nop    
        mov    eax, dword ptr [g_007d9900]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x64
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_85fd
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        mov    ecx, dword ptr [g_007d98f8]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_00458360
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_85fd:
        xor    esi, esi
        call    FUN_006f49a0
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
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    edi
        mov    edi, ecx
        push    esi
        call    FUN_0047fe80
        mov    eax, dword ptr [edi + 0x60]
        mov    edx, dword ptr [esi]
        mov    dword ptr [esp + 0xc], eax
        push    4
        lea    eax, [esp + 0x10]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        jbe    L_864a
        mov    edx, dword ptr [esi]
        shl    eax, 4
        push    eax
        mov    eax, dword ptr [edi + 0x5c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
L_864a:
        pop    edi
        pop    esi
        ret    4
        nop    
        ret    
    }
}
