/*
 * FUN_004164da (extent 0x4164da-0x4165a1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_00415c10(void);
extern void __cdecl FUN_004165e0(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_004164da(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 8
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        mov    dword ptr [esp + 8], edi
        mov    dword ptr [esp + 0xc], 0
        fild    qword ptr [esp + 8]
        fsqrt    
        call    FUN_0075db4a
        mov    esi, eax
        mov    ecx, 2
        cmp    esi, ecx
        jbe    L_651a
L_650b:
        xor    edx, edx
        mov    eax, edi
        div    ecx
        test    edx, edx
        je    L_6524
        inc    ecx
        cmp    ecx, esi
        jb    L_650b
L_651a:
        pop    edi
        mov    al, 1
        pop    esi
        add    esp, 8
        ret    4
L_6524:
        pop    edi
        xor    al, al
        pop    esi
        add    esp, 8
        ret    4
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_00415c10
        mov    ecx, esi
        mov    dword ptr [esi], 0x76d4b8
        mov    dword ptr [esi + 0x10], 0xffffffff
        mov    dword ptr [esi + 0x14], 0
        call    FUN_004165e0
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        nop    
        mov    eax, dword ptr [g_007b8810]
        push    esi
        push    eax
        push    0x18
        mov    esi, ecx
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_659d
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    ecx, dword ptr [esi + 0xc]
        mov    dword ptr [eax + 8], edx
        mov    edx, dword ptr [esi + 0x10]
        mov    dword ptr [eax + 0xc], ecx
        mov    ecx, dword ptr [esi + 0x14]
        mov    dword ptr [eax + 0x10], edx
        mov    dword ptr [eax + 0x14], ecx
        mov    dword ptr [eax], 0x76d4b8
        pop    esi
        ret    
L_659d:
        xor    eax, eax
        pop    esi
        ret    
    }
}
