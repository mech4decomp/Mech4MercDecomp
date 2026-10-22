/*
 * FUN_00757e20 (extent 0x757e20-0x757ea4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_008aad70;
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_0074de50(void);

__declspec(naked) void FUN_00757e20(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        mov    eax, dword ptr [ebp + 0x10]
        mov    ecx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        push    eax
        push    ecx
        push    edi
        call    dword ptr [g_008aad70]
        mov    esi, eax
        test    esi, esi
        jge    L_7e58
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7ae798
        call    FUN_006fabf0
        add    esp, 0x10
        test    eax, eax
        je    L_7e58
        int 3    
L_7e58:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    0xc
        push    ebp
        mov    ebp, esp
        mov    ecx, dword ptr [ebp + 0xc]
        push    ebx
        mov    ebx, dword ptr [ebp + 0x10]
        push    esi
        mov    esi, dword ptr [ebp + 8]
        mov    eax, dword ptr [esi]
        push    edi
        push    ebx
        push    ecx
        push    esi
        call    dword ptr [eax + 0x18]
        mov    edi, eax
        test    edi, edi
        jge    L_7e9b
        push    ebx
        call    FUN_0074de50
        mov    edx, dword ptr [ebp + 0xc]
        push    eax
        push    edx
        push    esi
        push    0x7ae7c8
        call    FUN_006fabf0
        add    esp, 0x10
        test    eax, eax
        je    L_7e9b
        int 3    
L_7e9b:
        mov    eax, edi
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
    }
}
