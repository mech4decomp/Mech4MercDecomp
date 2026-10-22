/*
 * FUN_0041e984 (extent 0x41e984-0x41ea06) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0041e984(void)
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
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        push    esi
        mov    ebx, ecx
        call    FUN_004084d0
        mov    edi, eax
        add    esp, 4
        xor    eax, eax
        test    esi, esi
        jbe    L_e9bf
        push    ebp
        mov    ebp, dword ptr [esp + 0x14]
        lea    ecx, [edi + esi - 1]
L_e9b3:
        mov    dl, byte ptr [eax + ebp]
        inc    eax
        mov    byte ptr [ecx], dl
        dec    ecx
        cmp    eax, esi
        jb    L_e9b3
        pop    ebp
L_e9bf:
        mov    eax, dword ptr [ebx]
        push    esi
        push    edi
        mov    ecx, ebx
        call    dword ptr [eax + 0x24]
        push    edi
        call    FUN_004084e0
        add    esp, 4
        pop    edi
        pop    esi
        mov    eax, ebx
        pop    ebx
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esi]
        push    edi
        mov    edi, dword ptr [esp + 0x10]
        mov    ebx, dword ptr [edi]
        mov    ecx, esi
        call    dword ptr [eax + 8]
        mov    edx, dword ptr [esi]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 4]
        push    eax
        mov    ecx, edi
        call    dword ptr [ebx + 0x24]
        pop    edi
        pop    esi
        pop    ebx
        ret    
    }
}
