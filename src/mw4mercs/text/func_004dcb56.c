/*
 * FUN_004dcb56 (extent 0x4dcb56-0x4dccef) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_004dcb56(void)
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
        push    ebx
        mov    bl, byte ptr [esp + 8]
        test    bl, 2
        push    esi
        mov    esi, ecx
        je    L_cbb8
        mov    eax, dword ptr [esi - 4]
        push    edi
        lea    edi, [esi - 4]
        lea    ecx, [esi + eax*8]
        dec    eax
        js    L_cba2
        push    ebp
        lea    esi, [ecx + 4]
        lea    ebp, [eax + 1]
L_cb81:
        mov    eax, dword ptr [esi - 8]
        sub    esi, 8
        test    eax, eax
        je    L_cb9e
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_cb9e
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_cb9e:
        dec    ebp
        jne    L_cb81
        pop    ebp
L_cba2:
        test    bl, 1
        je    L_cbb0
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_cbb0:
        mov    eax, edi
        pop    edi
        pop    esi
        pop    ebx
        ret    4
L_cbb8:
        mov    eax, dword ptr [esi + 4]
        test    eax, eax
        je    L_cbd2
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_cbd2
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_cbd2:
        test    bl, 1
        je    L_cbe0
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_cbe0:
        mov    eax, esi
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
        nop    
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov    ebx, ecx
        mov    eax, dword ptr [ebx + 4]
        push    edi
        mov    edi, dword ptr [esp + 0x18]
        cmp    edi, eax
        mov    dword ptr [esp + 0x10], ebx
        je    L_cce7
        test    edi, edi
        jbe    L_cca0
        mov    eax, dword ptr [ebx]
        test    eax, eax
        je    L_cc57
        mov    ecx, dword ptr [eax - 4]
        lea    ebp, [eax - 4]
        lea    eax, [eax + ecx*8]
        dec    ecx
        js    L_cc4e
        lea    esi, [eax + 4]
        lea    ebx, [ecx + 1]
L_cc2a:
        mov    eax, dword ptr [esi - 8]
        sub    esi, 8
        test    eax, eax
        je    L_cc47
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_cc47
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_cc47:
        dec    ebx
        jne    L_cc2a
        mov    ebx, dword ptr [esp + 0x10]
L_cc4e:
        push    ebp
        call    FUN_004084e0
        add    esp, 4
L_cc57:
        lea    eax, [edi*8 + 4]
        push    eax
        mov    dword ptr [ebx + 4], edi
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_cc94
        lea    ecx, [edi - 1]
        test    ecx, ecx
        mov    dword ptr [eax], edi
        lea    edx, [eax + 4]
        jl    L_cc96
        lea    eax, [edx + 4]
        inc    ecx
L_cc7e:
        mov    dword ptr [eax], 0
        add    eax, 8
        dec    ecx
        jne    L_cc7e
        pop    edi
        pop    esi
        pop    ebp
        mov    dword ptr [ebx], edx
        pop    ebx
        pop    ecx
        ret    4
L_cc94:
        xor    edx, edx
L_cc96:
        pop    edi
        pop    esi
        pop    ebp
        mov    dword ptr [ebx], edx
        pop    ebx
        pop    ecx
        ret    4
L_cca0:
        mov    ecx, dword ptr [ebx]
        test    ecx, ecx
        je    L_cce1
        mov    eax, dword ptr [ecx - 4]
        lea    ebp, [ecx - 4]
        lea    ecx, [ecx + eax*8]
        dec    eax
        js    L_ccd8
        lea    esi, [ecx + 4]
        lea    edi, [eax + 1]
L_ccb8:
        mov    eax, dword ptr [esi - 8]
        sub    esi, 8
        test    eax, eax
        je    L_ccd5
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_ccd5
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_ccd5:
        dec    edi
        jne    L_ccb8
L_ccd8:
        push    ebp
        call    FUN_004084e0
        add    esp, 4
L_cce1:
        mov    dword ptr [ebx], 0
L_cce7:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    4
    }
}
