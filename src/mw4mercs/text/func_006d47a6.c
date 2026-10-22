/*
 * FUN_006d47a6 (extent 0x6d47a6-0x6d490d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006d4370(void);
extern void __cdecl FUN_006d4bc0(void);
extern void __cdecl FUN_006dffd0(void);

__declspec(naked) void FUN_006d47a6(void)
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
        nop    
        xor    eax, eax
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 8]
        mov    dword ptr [esi + 0x11c], eax
        mov    dword ptr [esi + 0x120], eax
        mov    dword ptr [esi + 0x128], eax
        mov    dword ptr [esi + 0x12c], eax
        mov    eax, dword ptr [esp + 0xc]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esi + 0x10], eax
        call    FUN_006d4bc0
        mov    eax, esi
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
        push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        mov    ebp, dword ptr [edi + 0x118]
        xor    ebx, ebx
        cmp    ebp, ebx
        jle    L_481c
        mov    esi, dword ptr [edi + 0x11c]
L_4809:
        mov    eax, dword ptr [esi]
        push    eax
        call    FUN_004084e0
        mov    dword ptr [esi], ebx
        add    esp, 4
        add    esi, 4
        dec    ebp
        jne    L_4809
L_481c:
        cmp    dword ptr [edi + 0x120], ebx
        je    L_483f
        mov    ecx, dword ptr [edi + 0x11c]
        push    ecx
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [edi + 0x11c], ebx
        mov    dword ptr [edi + 0x120], ebx
L_483f:
        mov    eax, dword ptr [edi + 0xc]
        imul    eax, dword ptr [edi + 8]
        cmp    eax, ebx
        jle    L_48a8
        mov    ebp, dword ptr [edi + 0x128]
        mov    esi, dword ptr [edi + 0x124]
        mov    dword ptr [esp + 0x10], eax
L_485a:
        mov    eax, dword ptr [esi + 4]
        test    eax, eax
        je    L_4879
        mov    edx, dword ptr [esi]
        push    edx
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [esi], 0
        mov    dword ptr [esi + 4], 0
L_4879:
        mov    ebx, dword ptr [ebp]
        test    ebx, ebx
        je    L_4897
        mov    ecx, ebx
        call    FUN_006d4370
        push    ebx
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [ebp], 0
L_4897:
        mov    eax, dword ptr [esp + 0x10]
        add    esi, 8
        add    ebp, 4
        dec    eax
        mov    dword ptr [esp + 0x10], eax
        jne    L_485a
L_48a8:
        mov    ecx, dword ptr [edi + 0x124]
        test    ecx, ecx
        je    L_48d7
        mov    eax, dword ptr [ecx - 4]
        lea    ebx, [ecx - 4]
        lea    esi, [ecx + eax*8]
        dec    eax
        js    L_48ce
        lea    ebp, [eax + 1]
L_48c1:
        sub    esi, 8
        mov    ecx, esi
        call    FUN_006dffd0
        dec    ebp
        jne    L_48c1
L_48ce:
        push    ebx
        call    FUN_004084e0
        add    esp, 4
L_48d7:
        mov    eax, dword ptr [edi + 0x128]
        test    eax, eax
        mov    dword ptr [edi + 0x124], 0
        je    L_48f4
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_48f4:
        mov    edi, dword ptr [edi + 0x11c]
        test    edi, edi
        je    L_4907
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_4907:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    
    }
}
