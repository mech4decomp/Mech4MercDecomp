/*
 * FUN_0041e84a (extent 0x41e84a-0x41e942) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412780(void);

__declspec(naked) void FUN_0041e84a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        mov    edx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [ecx]
        push    edx
        mov    edx, dword ptr [esp + 0x10]
        push    edx
        push    0x7b8f04
        mov    dword ptr [esp + 0xc], 0
        call    dword ptr [eax + 0x2c]
        test    al, al
        je    L_e87f
        push    0x7b8f04
        lea    ecx, [esp + 4]
        call    FUN_00412780
L_e87f:
        __emit 0x8B  // 139 eax, [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        test    eax, eax
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    dword ptr [esi], eax
        je    L_e8ac
        inc    byte ptr [eax - 1]
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        je    L_e8ac
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_e8ac
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_e8ac:
        mov    eax, esi
        pop    esi
        pop    ecx
        ret    0xc
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
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        push    esi
        mov    edi, ecx
        call    FUN_004084d0
        add    esp, 4
        mov    ebp, eax
        mov    eax, dword ptr [edi]
        push    esi
        push    ebp
        mov    ecx, edi
        call    dword ptr [eax + 0x20]
        xor    eax, eax
        test    esi, esi
        jbe    L_e8f8
        mov    edx, dword ptr [esp + 0x10]
        push    ebx
        lea    ecx, [esi + ebp - 1]
L_e8ec:
        mov    bl, byte ptr [ecx]
        mov    byte ptr [eax + edx], bl
        inc    eax
        dec    ecx
        cmp    eax, esi
        jb    L_e8ec
        pop    ebx
L_e8f8:
        push    ebp
        call    FUN_004084e0
        add    esp, 4
        mov    eax, edi
        pop    edi
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
        mov    edx, dword ptr [esp + 4]
        push    ebx
        push    esi
        mov    esi, ecx
        mov    ebx, dword ptr [esi]
        push    edi
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, edx
        repne scasb
        not    ecx
        dec    ecx
        push    ecx
        push    edx
        mov    ecx, esi
        call    dword ptr [ebx + 0x24]
        mov    eax, dword ptr [esi]
        push    2
        push    0x76d1b8
        mov    ecx, esi
        call    dword ptr [eax + 0x24]
        pop    edi
        pop    esi
        pop    ebx
        ret    4
    }
}
