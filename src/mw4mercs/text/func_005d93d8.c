/*
 * FUN_005d93d8 (extent 0x5d93d8-0x5d94f7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f2464;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0068f180(void);
extern void __cdecl FUN_0068f2d0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005d93d8(void)
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
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [g_007f2464]
        push    ebx
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x10]
        xor    ebx, ebx
        mov    dword ptr [esi + 4], eax
        push    edx
        mov    dword ptr [esi], 0x78829c
        mov    byte ptr [esi + 0x1d], bl
        mov    dword ptr [esi + 8], ecx
        mov    byte ptr [esi + 0xc], bl
        mov    byte ptr [esi + 0x1c], bl
        mov    dword ptr [esi + 0x18], ebx
        call    FUN_006f4950
        push    0x40
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebx
        je    L_944c
        mov    ecx, dword ptr [esp + 0x30]
        mov    edx, dword ptr [esp + 0x28]
        push    ecx
        mov    ecx, dword ptr [esp + 0x28]
        push    edx
        mov    edx, dword ptr [esp + 0x28]
        push    ecx
        mov    ecx, dword ptr [esp + 0x28]
        push    edx
        mov    edx, dword ptr [esp + 0x28]
        push    ecx
        mov    ecx, dword ptr [esp + 0x28]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_0068f2d0
        jmp    L_944e
L_944c:
        xor    eax, eax
L_944e:
        mov    dword ptr [esi + 0x14], eax
        call    FUN_006f49a0
        mov    edx, dword ptr [esp + 0x2c]
        mov    dword ptr [esi + 0x10], ebx
        mov    dword ptr [esi + 0x28], edx
        mov    eax, esi
        pop    esi
        pop    ebx
        ret    0x28
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
        mov    edx, dword ptr [g_007f2464]
        push    ebx
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x10]
        xor    ebx, ebx
        mov    dword ptr [esi + 4], eax
        push    edx
        mov    dword ptr [esi], 0x78829c
        mov    byte ptr [esi + 0x1d], bl
        mov    dword ptr [esi + 8], ecx
        mov    byte ptr [esi + 0xc], bl
        mov    byte ptr [esi + 0x1c], bl
        mov    dword ptr [esi + 0x18], ebx
        call    FUN_006f4950
        push    0x40
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebx
        je    L_94dc
        mov    ecx, dword ptr [esp + 0x30]
        mov    edx, dword ptr [esp + 0x28]
        push    ecx
        mov    ecx, dword ptr [esp + 0x28]
        push    edx
        mov    edx, dword ptr [esp + 0x28]
        push    ecx
        mov    ecx, dword ptr [esp + 0x28]
        push    edx
        mov    edx, dword ptr [esp + 0x28]
        push    ecx
        mov    ecx, dword ptr [esp + 0x28]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_0068f180
        jmp    L_94de
L_94dc:
        xor    eax, eax
L_94de:
        mov    dword ptr [esi + 0x14], eax
        call    FUN_006f49a0
        mov    edx, dword ptr [esp + 0x2c]
        mov    dword ptr [esi + 0x10], ebx
        mov    dword ptr [esi + 0x28], edx
        mov    eax, esi
        pop    esi
        pop    ebx
        ret    0x28
    }
}
