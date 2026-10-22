/*
 * FUN_0072f600 (extent 0x72f600-0x72f6bf) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_0087dd0a;
extern int    g_00896cc0;
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_00740db0(void);
extern void __cdecl FUN_007556c0(void);

__declspec(naked) void FUN_0072f600(void)
{
    __asm {
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
        nop    
        nop    
        nop    
        push    ebx
        mov    ebx, ecx
        push    esi
        mov    esi, dword ptr [ebx]
        test    esi, esi
        je    L_f68b
        push    edi
L_f66b:
        mov    eax, dword ptr [esi + 0x48]
        test    eax, eax
        mov    edi, dword ptr [esi + 0x100]
        je    L_f684
        push    eax
        call    FUN_00740db0
        push    esi
        call    FUN_006f4230
L_f684:
        test    edi, edi
        mov    esi, edi
        jne    L_f66b
        pop    edi
L_f68b:
        mov    eax, dword ptr [g_00896cc0]
        xor    ecx, ecx
        test    eax, eax
        je    L_f6bc
L_f696:
        cmp    eax, ebx
        je    L_f6a6
        mov    ecx, eax
        mov    eax, dword ptr [eax + 8]
        test    eax, eax
        jne    L_f696
        pop    esi
        pop    ebx
        ret    
L_f6a6:
        test    ecx, ecx
        je    L_f6b3
        mov    eax, dword ptr [eax + 8]
        pop    esi
        mov    dword ptr [ecx + 8], eax
        pop    ebx
        ret    
L_f6b3:
        mov    ecx, dword ptr [eax + 8]
        mov    dword ptr [g_00896cc0], ecx
L_f6bc:
        pop    esi
        pop    ebx
        ret    
    }
}
