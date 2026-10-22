/*
 * FUN_00741330 (extent 0x741330-0x7413e2) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_0074d330(void);
extern void __cdecl FUN_0074d4d0(void);

__declspec(naked) void FUN_00741330(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        mov    edx, dword ptr [ebp + 0x18]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax]
        push    ebx
        mov    ebx, dword ptr [ebp + 0x10]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 0x1c]
        push    edi
        push    edx
        mov    edx, dword ptr [ebp + 0x14]
        push    edx
        mov    edx, dword ptr [ebp + 0xc]
        push    ebx
        push    edx
        push    eax
        call    dword ptr [ecx + 0x34]
        mov    esi, eax
        test    esi, esi
        jge    L_1395
        cmp    esi, 0x8877015e
        je    L_1395
        cmp    esi, 0x80004005
        je    L_1395
        push    edi
        push    ebx
        call    FUN_0074d330
        push    eax
        mov    eax, dword ptr [ebp + 0xc]
        push    eax
        call    FUN_0074d4d0
        push    eax
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a9188
        call    FUN_006fabf0
        add    esp, 0x14
        test    eax, eax
        je    L_1395
        int 3    
L_1395:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0x18
        nop    
        nop    
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
        call    dword ptr [ecx + 0x38]
        mov    esi, eax
        test    esi, esi
        jge    L_13d9
        push    edi
        push    ebx
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a91b4
        call    FUN_006fabf0
        add    esp, 0x14
        test    eax, eax
        je    L_13d9
        int 3    
L_13d9:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
    }
}
