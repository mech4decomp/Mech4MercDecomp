/*
 * FUN_00734ec0 (extent 0x734ec0-0x734f52) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_008aad7c;
extern int    g_008aad80;
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);

__declspec(naked) void FUN_00734ec0(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        mov    eax, dword ptr [g_008aad7c]
        test    eax, eax
        push    esi
        je    L_4edb
        mov    ecx, dword ptr [ebp + 0x10]
        mov    edx, dword ptr [ebp + 0xc]
        push    7
        push    ecx
        push    edx
        call    eax
        jmp    L_4ee9
L_4edb:
        mov    eax, dword ptr [ebp + 0x10]
        mov    ecx, dword ptr [ebp + 8]
        push    eax
        push    ecx
        call    dword ptr [g_008aad80]
L_4ee9:
        mov    esi, eax
        test    esi, esi
        jge    L_4f09
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a6148
        call    FUN_006fabf0
        add    esp, 0xc
        test    eax, eax
        je    L_4f09
        int 3    
L_4f09:
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    0xc
        push    ebp
        mov    ebp, esp
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax]
        push    ebx
        mov    ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 0x10]
        push    edi
        push    ebx
        push    eax
        call    dword ptr [ecx + 0x20]
        mov    esi, eax
        test    esi, esi
        jge    L_4f49
        push    edi
        push    ebx
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a6174
        call    FUN_006fabf0
        add    esp, 0x14
        test    eax, eax
        je    L_4f49
        int 3    
L_4f49:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
    }
}
