/*
 * FUN_005911cc (extent 0x5911cc-0x591325) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b87d0;
extern int    g_007b87d4;
extern int    g_007b8810;
extern int    g_007b8c14;
extern int    g_007f1f94;
extern int    g_007f1f98;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_004168e0(void);
extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_00416bf0(void);

__declspec(naked) void FUN_005911cc(void)
{
    __asm {
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
        jne    L_1226
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_121c
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76ceb8
        push    0x64
        push    0x64
        push    0x1c
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007b87d0], esi
        jmp    L_1226
L_121c:
        mov    dword ptr [g_007b87d0], 0
L_1226:
        mov    ecx, dword ptr [g_007b87d0]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_125a
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
L_125a:
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
        mov    eax, dword ptr [g_007b8810]
        push    esi
        push    eax
        push    0xc
        mov    esi, ecx
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_129b
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x782234
        pop    esi
        ret    
L_129b:
        xor    eax, eax
        pop    esi
        ret    
        nop    
        push    esi
        push    edi
        push    0x14
        mov    edi, ecx
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_12c7
        push    edi
        mov    ecx, esi
        call    FUN_00416bf0
        pop    edi
        mov    dword ptr [esi], 0x7822f0
        mov    eax, esi
        pop    esi
        ret    
L_12c7:
        pop    edi
        xor    eax, eax
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp + 8], 1
        je    L_131f
        mov    ecx, dword ptr [g_007f1f98]
        push    esi
        call    FUN_00416130
        dec    dword ptr [g_007f1f94]
        jne    L_131f
        push    edi
        mov    edi, dword ptr [g_007f1f98]
        test    edi, edi
        je    L_130e
        mov    ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_130e:
        pop    edi
        mov    eax, esi
        mov    dword ptr [g_007f1f98], 0
        pop    esi
        ret    4
L_131f:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
