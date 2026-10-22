/*
 * FUN_0047abb2 (extent 0x47abb2-0x47aca4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da5e4;
extern int    g_007da5ec;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0047a4c0(void);
extern void __cdecl FUN_0047aef0(void);
extern void __cdecl FUN_0047fe80(void);
extern void __cdecl FUN_0047ff10(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_0047abb2(void)
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
        mov    eax, dword ptr [g_007da5ec]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x68
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_abfd
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        mov    ecx, dword ptr [g_007da5e4]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_0047a4c0
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_abfd:
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
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        push    edi
        mov    edi, ecx
        push    esi
        call    FUN_0047fe80
        mov    eax, dword ptr [esi]
        push    4
        lea    ebx, [edi + 0x64]
        push    ebx
        mov    ecx, esi
        call    dword ptr [eax + 0x24]
        mov    ebx, dword ptr [ebx]
        test    ebx, ebx
        jbe    L_ac3e
        mov    eax, dword ptr [edi + 0x60]
        mov    edx, dword ptr [esi]
        push    ebx
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
L_ac3e:
        mov    ecx, dword ptr [edi + 0x5c]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [esp + 0x14]
        mov    dword ptr [esp + 0x14], ecx
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        jbe    L_ac6a
        mov    edx, dword ptr [esi]
        shl    eax, 4
        push    eax
        mov    eax, dword ptr [edi + 0x58]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
L_ac6a:
        pop    edi
        pop    esi
        pop    ebx
        ret    4
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
        mov    eax, dword ptr [esp + 4]
        push    ebx
        mov    ebx, dword ptr [esp + 0xc]
        push    esi
        push    ebx
        mov    esi, ecx
        push    eax
        call    FUN_0047ff10
        test    bl, 1
        je    L_ac9f
        mov    ecx, esi
        call    FUN_0047aef0
L_ac9f:
        pop    esi
        pop    ebx
        ret    8
    }
}
