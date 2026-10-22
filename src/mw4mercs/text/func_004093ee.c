/*
 * FUN_004093ee (extent 0x4093ee-0x4094ee) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b87c0;
extern int    g_007b87c4;
extern int    g_007b8810;
extern int    g_007b8c14;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415560(void);
extern void __cdecl FUN_004155f0(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_00416110(void);

__declspec(naked) void FUN_004093ee(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [g_007b87c4]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007b87c4], eax
        jne    L_9446
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_943c
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76cde8
        push    0x64
        push    0x64
        push    0x20
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007b87c0], esi
        jmp    L_9446
L_943c:
        mov    dword ptr [g_007b87c0], 0
L_9446:
        mov    ecx, dword ptr [g_007b87c0]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_947a
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_00415560
        mov    edx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [edx]
        mov    dword ptr [esi + 0x1c], eax
        pop    edi
        mov    dword ptr [esi], 0x76cde0
        mov    eax, esi
        pop    esi
        ret    8
L_947a:
        pop    edi
        xor    eax, eax
        pop    esi
        ret    8
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
        push    esi
        push    0x14
        mov    esi, ecx
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_94c1
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    ecx, dword ptr [esi + 0xc]
        mov    dword ptr [eax + 8], edx
        mov    edx, dword ptr [esi + 0x10]
        mov    dword ptr [eax + 0xc], ecx
        mov    dword ptr [eax + 0x10], edx
        mov    dword ptr [eax], 0x76cda0
        pop    esi
        ret    
L_94c1:
        xor    eax, eax
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
        push    esi
        mov    esi, ecx
        call    FUN_004155f0
        test    byte ptr [esp + 8], 1
        je    L_94e8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_94e8:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
