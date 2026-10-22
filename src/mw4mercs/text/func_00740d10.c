/*
 * FUN_00740d10 (extent 0x740d10-0x740da7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b634;
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_00750780(void);

__declspec(naked) void FUN_00740d10(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        mov    eax, dword ptr [ebp + 0x18]
        mov    ecx, dword ptr [ebp + 0x10]
        mov    edx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 0x14]
        push    eax
        mov    eax, dword ptr [ebp + 8]
        push    edi
        push    ecx
        push    edx
        push    eax
        call    dword ptr [g_0076b634]
        mov    esi, eax
        test    esi, esi
        jge    L_0d56
        push    edi
        call    FUN_00750780
        push    eax
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a8dd4
        call    FUN_006fabf0
        add    esp, 0x10
        test    eax, eax
        je    L_0d56
        int 3    
L_0d56:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    0x14
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        mov    ecx, dword ptr [ebp + 0x10]
        push    ebx
        mov    ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi]
        push    ecx
        push    ebx
        push    edi
        call    dword ptr [eax]
        mov    esi, eax
        test    esi, esi
        jge    L_0d9e
        push    edi
        push    ebx
        call    FUN_00750780
        push    eax
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a8e04
        call    FUN_006fabf0
        add    esp, 0x14
        test    eax, eax
        je    L_0d9e
        int 3    
L_0d9e:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
    }
}
