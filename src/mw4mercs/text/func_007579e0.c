/*
 * FUN_007579e0 (extent 0x7579e0-0x757a8e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_008aad6c;
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);

__declspec(naked) void FUN_007579e0(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        mov    eax, dword ptr [ebp + 0xc]
        mov    ecx, dword ptr [ebp + 8]
        push    esi
        push    eax
        push    ecx
        call    dword ptr [g_008aad6c]
        mov    esi, eax
        test    esi, esi
        jge    L_7a12
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7ae518
        call    FUN_006fabf0
        add    esp, 0xc
        test    eax, eax
        je    L_7a12
        int 3    
L_7a12:
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        mov    ecx, dword ptr [ebp + 0x20]
        mov    edx, dword ptr [ebp + 0x1c]
        push    ebx
        mov    ebx, dword ptr [ebp + 0x24]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi]
        push    ebx
        push    ecx
        mov    ecx, dword ptr [ebp + 0x18]
        push    edx
        mov    edx, dword ptr [ebp + 0x14]
        push    ecx
        mov    ecx, dword ptr [ebp + 0x10]
        push    edx
        mov    edx, dword ptr [ebp + 0xc]
        push    ecx
        push    edx
        push    edi
        call    dword ptr [eax + 0x2c]
        mov    esi, eax
        test    esi, esi
        jge    L_7a85
        mov    eax, dword ptr [ebp + 0x20]
        mov    ecx, dword ptr [ebp + 0x1c]
        mov    edx, dword ptr [ebp + 0x18]
        push    ebx
        push    eax
        mov    eax, dword ptr [ebp + 0x14]
        push    ecx
        mov    ecx, dword ptr [ebp + 0x10]
        push    edx
        mov    edx, dword ptr [ebp + 0xc]
        push    eax
        push    ecx
        push    edx
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7ae544
        call    FUN_006fabf0
        add    esp, 0x2c
        test    eax, eax
        je    L_7a85
        int 3    
L_7a85:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0x20
    }
}
