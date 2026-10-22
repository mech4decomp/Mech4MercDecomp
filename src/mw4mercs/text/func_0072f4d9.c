/*
 * FUN_0072f4d9 (extent 0x72f4d9-0x72f65d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b0e4;
extern int    g_0076b0e8;
extern int    g_0076b0ec;
extern int    g_0076b254;
extern int    g_0076b25c;
extern int    g_00849308;
extern char   g_0087dd0a;
extern int    g_00896cc0;
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_006faca0(void);
extern void __cdecl FUN_006fb7c0(void);
extern void __cdecl FUN_00740db0(void);
extern void __cdecl FUN_007556c0(void);

__declspec(naked) void FUN_0072f4d9(void)
{
    __asm {
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi + 0x10], ebx
        push    edi
        mov    byte ptr [esi + 0x21], 1
        mov    byte ptr [esi + 0x20], bl
        mov    dword ptr [esi + 0x14], ebx
        mov    dword ptr [esi], ebx
        je    L_f5bd
        lea    eax, [esp + 0x124]
        push    eax
        push    0x104
        call    dword ptr [g_0076b25c]
        lea    ecx, [esp + 0x20]
        push    ecx
        push    ebx
        push    0x7a5c04
        lea    edx, [esp + 0x130]
        push    edx
        call    dword ptr [g_0076b254]
        mov    eax, dword ptr [g_00849308]
        push    eax
        call    FUN_006f4950
        mov    eax, dword ptr [esp + 0x22c]
        lea    ecx, [esp + 0x18]
        push    ecx
        lea    edx, [esp + 0x14]
        push    edx
        push    eax
        call    FUN_006faca0
        call    FUN_006f49a0
        push    ebx
        push    0x100
        push    2
        push    ebx
        push    ebx
        push    0x40000000
        lea    ecx, [esp + 0x38]
        push    ecx
        mov    dword ptr [esi + 0xc], ebp
        call    dword ptr [g_0076b0e8]
        mov    edi, eax
        cmp    edi, -1
        je    L_f5bd
        mov    eax, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esp + 0x10]
        push    ebx
        lea    edx, [esp + 0x20]
        push    edx
        push    eax
        push    ecx
        push    edi
        call    dword ptr [g_0076b0e4]
        push    edi
        call    dword ptr [g_0076b0ec]
        mov    edx, dword ptr [esp + 0x10]
        push    edx
        call    FUN_006f4230
        mov    eax, dword ptr [ebp*4 + 0x857f48]
        push    0x11
        lea    edx, [esp + 0x18]
        push    edx
        push    0x72f910
        lea    edx, [esp + 0x2c]
        push    edx
        mov    dword ptr [esp + 0x24], esi
        mov    ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x6c]
        lea    eax, [esp + 0x20]
        push    eax
        call    FUN_006fb7c0
L_f5bd:
        mov    eax, dword ptr [g_00896cc0]
        cmp    eax, ebx
        jne    L_f5de
        pop    edi
        mov    dword ptr [esi + 8], ebx
        mov    dword ptr [g_00896cc0], esi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x218
        ret    8
L_f5de:
        pop    edi
        mov    dword ptr [esi + 8], eax
        mov    dword ptr [g_00896cc0], esi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x218
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
        push    ebp
        push    esi
        mov    ebp, ecx
        mov    esi, dword ptr [ebp]
        push    edi
        mov    edi, dword ptr [esi + 0x48]
        test    edi, edi
        je    L_f622
        mov    eax, dword ptr [edi]
        push    edi
        call    dword ptr [eax + 0x2c]
        push    edi
        call    FUN_00740db0
        mov    dword ptr [esi + 0x48], 0
L_f622:
        test    esi, esi
        je    L_f659
        mov    edi, dword ptr [ebp + 0xc]
L_f629:
        mov    eax, dword ptr [edi*4 + 0x857f48]
        push    0
        lea    ecx, [esi + 0x48]
        push    ecx
        lea    edx, [esi + 0x10]
        push    edx
        push    esi
        push    eax
        mov    byte ptr [g_0087dd0a], 1
        call    FUN_007556c0
        mov    esi, dword ptr [esi + 0x100]
        test    esi, esi
        mov    byte ptr [g_0087dd0a], 0
        jne    L_f629
L_f659:
        pop    edi
        pop    esi
        pop    ebp
        ret    
    }
}
