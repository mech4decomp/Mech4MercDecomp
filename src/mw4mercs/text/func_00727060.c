/*
 * FUN_00727060 (extent 0x727060-0x72718a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_00856b8c;
extern char   g_0087dd0a;
extern void __cdecl FUN_00740dc0(void);
extern void __cdecl FUN_00758750(void);

__declspec(naked) void FUN_00727060(void)
{
    __asm {
        push    ebp
        mov    ebp, dword ptr [esp + 8]
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi]
        test    eax, eax
        push    edi
        mov    dword ptr [ebp], 0
        je    L_707f
        cmp    eax, 1
        jne    L_713e
L_707f:
        mov    al, byte ptr [esi + 0xb0]
        test    al, al
        je    L_709b
        mov    esi, dword ptr [esi + 0x58]
        push    esi
        call    FUN_00740dc0
        pop    edi
        mov    dword ptr [ebp], esi
        pop    esi
        pop    ebp
        ret    4
L_709b:
        mov    edi, dword ptr [esi + 0xac]
        xor    eax, eax
        test    edi, edi
        jbe    L_70c2
        lea    ecx, [esi + 0x5c]
L_70aa:
        cmp    dword ptr [ecx], 0
        je    L_70ba
        mov    dl, byte ptr [eax + esi + 0x9c]
        test    dl, dl
        je    L_7114
L_70ba:
        inc    eax
        add    ecx, 4
        cmp    eax, edi
        jb    L_70aa
L_70c2:
        cmp    edi, 0xf
        je    L_7137
        mov    edx, dword ptr [esi + 0x58]
        mov    eax, dword ptr [g_00856b8c]
        mov    ecx, dword ptr [eax + 0xc]
        push    ebp
        push    edx
        push    ecx
        mov    byte ptr [g_0087dd0a], 1
        call    FUN_00758750
        test    eax, eax
        mov    edx, dword ptr [ebp]
        mov    byte ptr [g_0087dd0a], 0
        mov    dword ptr [esi + edi*4 + 0x5c], edx
        jne    L_7129
        mov    eax, dword ptr [esi + 0xac]
        mov    byte ptr [esi + eax + 0x9c], 1
        mov    eax, dword ptr [esi + 0xac]
        inc    eax
        pop    edi
        mov    dword ptr [esi + 0xac], eax
        pop    esi
        pop    ebp
        ret    4
L_7114:
        mov    ecx, dword ptr [esi + eax*4 + 0x5c]
        pop    edi
        mov    byte ptr [eax + esi + 0x9c], 1
        pop    esi
        mov    dword ptr [ebp], ecx
        pop    ebp
        ret    4
L_7129:
        mov    ecx, dword ptr [esi + 0xac]
        mov    dword ptr [esi + ecx*4 + 0x5c], 0
L_7137:
        mov    dword ptr [ebp], 0
L_713e:
        pop    edi
        pop    esi
        pop    ebp
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
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x58]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        cmp    edi, eax
        je    L_7185
        mov    esi, dword ptr [ecx + 0xac]
        xor    eax, eax
        test    esi, esi
        jbe    L_7185
        lea    edx, [ecx + 0x5c]
L_716c:
        cmp    edi, dword ptr [edx]
        je    L_717d
        inc    eax
        add    edx, 4
        cmp    eax, esi
        jb    L_716c
        pop    edi
        pop    esi
        ret    4
L_717d:
        mov    byte ptr [eax + ecx + 0x9c], 0
L_7185:
        pop    edi
        pop    esi
        ret    4
    }
}
