/*
 * FUN_005da7f1 (extent 0x5da7f1-0x5da8f1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);

__declspec(naked) void FUN_005da7f1(void)
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
        mov    cl, byte ptr [ecx + 8]
        mov    eax, dword ptr [esp + 4]
        mov    byte ptr [eax], cl
        ret    4
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0xc]
        push    esi
        mov    esi, ecx
        mov    cl, byte ptr [eax]
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        test    edi, edi
        mov    dword ptr [esi], 0
        mov    byte ptr [esi + 8], cl
        mov    dword ptr [esi + 4], 0
        mov    dword ptr [esi + 8], 0
        je    L_a84b
        lea    edx, [edi*4]
        push    edx
        call    FUN_004084d0
        add    esp, 4
        jmp    L_a84d
L_a84b:
        xor    eax, eax
L_a84d:
        test    edi, edi
        lea    ecx, [eax + edi*4]
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 4], eax
        mov    dword ptr [esi + 8], ecx
        jbe    L_a86e
        mov    ecx, dword ptr [esp + 0x10]
L_a860:
        test    eax, eax
        je    L_a868
        mov    edx, dword ptr [ecx]
        mov    dword ptr [eax], edx
L_a868:
        add    eax, 4
        dec    edi
        jne    L_a860
L_a86e:
        mov    dword ptr [esi + 4], eax
        pop    edi
        mov    eax, esi
        pop    esi
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [ecx]
        push    esi
        mov    esi, dword ptr [eax]
        mov    dword ptr [ecx], esi
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [ecx + 4]
        mov    esi, dword ptr [eax + 4]
        mov    dword ptr [ecx + 4], esi
        mov    dword ptr [eax + 4], edx
        mov    esi, dword ptr [eax + 8]
        mov    edx, dword ptr [ecx + 8]
        mov    dword ptr [ecx + 8], esi
        mov    dword ptr [eax + 8], edx
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0xc]
        mov    dl, byte ptr [ecx]
        xor    eax, eax
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        cmp    edi, eax
        mov    dword ptr [esi], eax
        mov    byte ptr [esi + 8], dl
        mov    dword ptr [esi + 4], eax
        mov    dword ptr [esi + 8], eax
        je    L_a8df
        lea    eax, [edi*4]
        push    eax
        call    FUN_004084d0
        add    esp, 4
L_a8df:
        lea    ecx, [eax + edi*4]
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 4], eax
        pop    edi
        mov    dword ptr [esi + 8], ecx
        mov    eax, esi
        pop    esi
        ret    8
    }
}
