/*
 * FUN_004f9ec3 (extent 0x4f9ec3-0x4f9f9a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b28c;

__declspec(naked) void FUN_004f9ec3(void)
{
    __asm {
        nop    
        inc    edx
        sahf    
        dec    edi
        add    byte ptr [ebx - 0x62], bh
        dec    edi
        add    byte ptr [edi], ch
        sahf    
        dec    edi
        add    byte ptr [ecx - 0x62], ah
        dec    edi
        add    byte ptr [eax], al
        add    dword ptr [ebx], eax
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    al, byte ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    dword ptr [ebx], eax
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ecx]
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    edx, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [ecx]
        push    ebx
        mov    bl, byte ptr [esp + 0x10]
        xor    eax, eax
        test    bl, bl
        setne    al
        push    ebp
        push    esi
        mov    esi, dword ptr [edx]
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        sub    ecx, esi
        inc    eax
        mov    dword ptr [esp + 0x1c], eax
        push    ecx
        add    eax, esi
        lea    ebp, [esi + edi]
        add    eax, edi
        push    ebp
        push    eax
        call    dword ptr [g_0076b28c]
        mov    cl, byte ptr [esp + 0x24]
        mov    byte ptr [ebp], cl
        mov    ecx, dword ptr [esp + 0x2c]
        add    esp, 0xc
        test    bl, bl
        lea    eax, [esi + 1]
        mov    dword ptr [ecx], eax
        je    L_9f83
        mov    byte ptr [eax + edi], bl
        inc    eax
        mov    dword ptr [ecx], eax
L_9f83:
        mov    edx, dword ptr [esp + 0x24]
        mov    eax, dword ptr [edx]
        mov    ecx, dword ptr [esp + 0x1c]
        add    eax, ecx
        mov    byte ptr [eax + edi], 0
        pop    edi
        pop    esi
        pop    ebp
        mov    dword ptr [edx], eax
        pop    ebx
        ret    
    }
}
