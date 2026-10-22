/*
 * FUN_004298a1 (extent 0x4298a1-0x4299a1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00487950(void);

__declspec(naked) void FUN_004298a1(void)
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
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        push    edi
        mov    edi, ecx
        push    esi
        call    FUN_00487950
        mov    eax, dword ptr [esi]
        push    4
        lea    ecx, [edi + 0x20]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [edi + 0x24]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x2c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [edi + 0x30]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x28]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    ebx, [edi + 0x38]
        push    ebx
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    eax, dword ptr [ebx]
        test    eax, eax
        jbe    L_9922
        mov    edx, dword ptr [esi]
        shl    eax, 4
        push    eax
        mov    eax, dword ptr [edi + 0x34]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
L_9922:
        pop    edi
        pop    esi
        pop    ebx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        push    ebp
        mov    ebp, dword ptr [esp + 0xc]
        push    esi
        mov    esi, ecx
        mov    ebx, dword ptr [esi + 4]
        cmp    ebp, ebx
        je    L_999b
        test    ebp, ebp
        jbe    L_9987
        push    edi
        push    ebp
        call    FUN_004084d0
        mov    ecx, dword ptr [esi]
        add    esp, 4
        test    ecx, ecx
        mov    edi, eax
        je    L_997b
        cmp    ebp, ebx
        mov    eax, ebp
        jb    L_995e
        mov    eax, ebx
L_995e:
        mov    edx, eax
        dec    eax
        test    edx, edx
        je    L_9972
L_9965:
        mov    dl, byte ptr [ecx + eax]
        mov    byte ptr [eax + edi], dl
        mov    edx, eax
        dec    eax
        test    edx, edx
        jne    L_9965
L_9972:
        push    ecx
        call    FUN_004084e0
        add    esp, 4
L_997b:
        mov    dword ptr [esi], edi
        pop    edi
        mov    dword ptr [esi + 4], ebp
        pop    esi
        pop    ebp
        pop    ebx
        ret    4
L_9987:
        mov    eax, dword ptr [esi]
        push    eax
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [esi], 0
        mov    dword ptr [esi + 4], ebp
L_999b:
        pop    esi
        pop    ebp
        pop    ebx
        ret    4
    }
}
