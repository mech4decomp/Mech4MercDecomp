/*
 * FUN_00619707 (extent 0x619707-0x6198b7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b87d0;
extern int    g_007b87d4;
extern int    g_007b8810;
extern int    g_007b8c14;
extern int    g_007b8ef4;
extern int    g_007b8ef8;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_004168e0(void);
extern void __cdecl FUN_00599130(void);
extern void __cdecl FUN_00619d30(void);
extern void __cdecl FUN_0061a0e0(void);

__declspec(naked) void FUN_00619707(void)
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
        mov    eax, dword ptr [g_007b87d4]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007b87d4], eax
        jne    L_9766
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_975c
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76ceb8
        push    0x64
        push    0x64
        push    0x1c
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007b87d0], esi
        jmp    L_9766
L_975c:
        mov    dword ptr [g_007b87d0], 0
L_9766:
        mov    ecx, dword ptr [g_007b87d0]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_979a
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_004168e0
        mov    edx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [edx]
        mov    dword ptr [esi + 0x18], eax
        pop    edi
        mov    dword ptr [esi], 0x76ceb0
        mov    eax, esi
        pop    esi
        ret    8
L_979a:
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
        mov    eax, dword ptr [g_007b8ef8]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007b8ef8], eax
        jne    L_9806
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_97fc
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76ceb8
        push    0x64
        push    0x64
        push    0x1c
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007b8ef4], esi
        jmp    L_9806
L_97fc:
        mov    dword ptr [g_007b8ef4], 0
L_9806:
        mov    ecx, dword ptr [g_007b8ef4]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_9844
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_004168e0
        mov    edx, dword ptr [esp + 0x10]
        lea    ecx, [esi + 0x18]
        mov    dword ptr [ecx], 0
        push    edx
        mov    dword ptr [esi], 0x76d754
        call    FUN_00412740
        pop    edi
        mov    eax, esi
        pop    esi
        ret    8
L_9844:
        pop    edi
        xor    eax, eax
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        mov    ebx, ecx
        mov    eax, dword ptr [ebx + 4]
        test    eax, eax
        je    L_98a6
        mov    eax, dword ptr [ebx]
        push    esi
        mov    esi, dword ptr [eax + 4]
        test    esi, esi
        je    L_988f
        push    edi
L_9865:
        mov    ecx, dword ptr [esi + 0xc]
        push    ecx
        mov    ecx, ebx
        call    FUN_00599130
        mov    edi, dword ptr [esi + 8]
        push    0
        lea    ecx, [esi + 0x10]
        call    FUN_0061a0e0
        push    1
        push    esi
        call    FUN_00619d30
        add    esp, 8
        test    edi, edi
        mov    esi, edi
        jne    L_9865
        pop    edi
L_988f:
        mov    eax, dword ptr [ebx]
        mov    dword ptr [eax + 8], eax
        mov    dword ptr [eax + 4], 0
        mov    dword ptr [eax + 0xc], eax
        mov    dword ptr [ebx + 4], 0
        pop    esi
L_98a6:
        mov    ebx, dword ptr [ebx]
        test    ebx, ebx
        je    L_98b5
        push    ebx
        call    FUN_004084e0
        add    esp, 4
L_98b5:
        pop    ebx
        ret    
    }
}
