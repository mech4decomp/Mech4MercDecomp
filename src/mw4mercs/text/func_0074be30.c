/*
 * FUN_0074be30 (extent 0x74be30-0x74bf54) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2d0;
extern int    g_008b8e38;
extern int    g_008b8e3c;
extern int    g_008b8e40;
extern int    g_008b8e44;

__declspec(naked) void FUN_0074be30(void)
{
    __asm {
        mov    eax, dword ptr [g_008b8e44]
        push    esi
        mov    esi, dword ptr [g_0076b2d0]
        push    eax
        call    esi
        mov    ecx, dword ptr [g_008b8e40]
        push    ecx
        call    esi
        mov    edx, dword ptr [g_008b8e3c]
        push    edx
        call    esi
        mov    eax, dword ptr [g_008b8e38]
        push    eax
        call    esi
        add    esp, 0x10
        pop    esi
        ret    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        cmp    ax, 0xff
        push    esi
        mov    esi, dword ptr [g_008b8e38]
        jbe    L_beb8
        mov    ecx, dword ptr [esp + 8]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [g_008b8e40]
        push    edi
        mov    edi, dword ptr [g_008b8e3c]
L_be84:
        and    eax, 0xffff
        mov    bl, byte ptr [eax + edi]
        mov    ax, word ptr [ebp + eax*2]
        mov    edx, ecx
        and    edx, 0xffff
        inc    ecx
        cmp    ax, 0xff
        mov    byte ptr [edx + esi], bl
        ja    L_be84
        pop    edi
        pop    ebp
        mov    edx, ecx
        and    edx, 0xffff
        pop    ebx
        mov    byte ptr [edx + esi], al
        lea    eax, [ecx + 1]
        pop    esi
        ret    8
L_beb8:
        mov    ecx, dword ptr [esp + 8]
        mov    edx, ecx
        and    edx, 0xffff
        mov    byte ptr [edx + esi], al
        lea    eax, [ecx + 1]
        pop    esi
        ret    8
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 4]
        push    ebx
        shl    eax, 4
        push    ebp
        xor    eax, edx
        test    ax, ax
        push    esi
        push    edi
        je    L_beef
        mov    esi, 0x6d5d
        sub    esi, eax
        jmp    L_bef4
L_beef:
        mov    esi, 1
L_bef4:
        mov    edi, dword ptr [g_008b8e44]
        mov    ecx, eax
        and    ecx, 0xffff
        cmp    word ptr [edi + ecx*2], -1
        je    L_bf4d
        mov    ebp, dword ptr [g_008b8e40]
        mov    edx, dword ptr [g_008b8e3c]
L_bf15:
        mov    bx, word ptr [esp + 0x14]
        cmp    word ptr [ebp + ecx*2], bx
        jne    L_bf2a
        mov    bl, byte ptr [esp + 0x18]
        cmp    byte ptr [ecx + edx], bl
        je    L_bf4d
L_bf2a:
        movsx    ebx, si
        cmp    ecx, ebx
        jl    L_bf35
        sub    eax, esi
        jmp    L_bf3e
L_bf35:
        mov    ecx, 0x6d5d
        sub    ecx, esi
        add    eax, ecx
L_bf3e:
        mov    ecx, eax
        and    ecx, 0xffff
        cmp    word ptr [edi + ecx*2], -1
        jne    L_bf15
L_bf4d:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
    }
}
