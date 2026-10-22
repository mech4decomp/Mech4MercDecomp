/*
 * FUN_0072f660 (extent 0x72f660-0x72f733) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0085b4a0;
extern char   g_0087dd0a;
extern int    g_00896cc0;
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_00704a80(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_00740db0(void);
extern void __cdecl FUN_00755710(void);

__declspec(naked) void FUN_0072f660(void)
{
    __asm {
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
        nop    
        cmp    dword ptr [g_0085b4a0], 1
        push    ebp
        mov    ebp, ecx
        je    L_f72f
        push    0
        push    0
        push    0
        push    0x27
        call    FUN_00704a80
        test    al, 2
        je    L_f72f
        mov    eax, dword ptr [ebp + 0xc]
        mov    cl, byte ptr [eax + 0x858128]
        test    cl, cl
        je    L_f72f
        push    esi
        mov    esi, dword ptr [ebp]
        test    esi, esi
        je    L_f720
        push    edi
        mov    edi, dword ptr [esp + 0x10]
L_f6f7:
        mov    eax, dword ptr [esi + 0x48]
        test    eax, eax
        je    L_f715
        push    0
        push    edi
        push    eax
        mov    byte ptr [g_0087dd0a], 1
        call    FUN_00755710
        mov    byte ptr [g_0087dd0a], 0
L_f715:
        mov    esi, dword ptr [esi + 0x100]
        test    esi, esi
        jne    L_f6f7
        pop    edi
L_f720:
        push    0
        mov    byte ptr [ebp + 0x20], 1
        call    FUN_00707e70
        fstp    qword ptr [ebp + 0x18]
        pop    esi
L_f72f:
        pop    ebp
        ret    4
    }
}
