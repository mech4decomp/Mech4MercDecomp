/*
 * FUN_0065d786 (extent 0x65d786-0x65d84e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc6e0;
extern void __cdecl FUN_004f04a0(void);

__declspec(naked) void FUN_0065d786(void)
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
        mov    eax, dword ptr [g_007dc6e0]
        test    eax, eax
        je    L_d7bb
        mov    ecx, dword ptr [eax + 0x4c]
        test    ecx, ecx
        je    L_d7bb
        mov    eax, dword ptr [ecx + 0x24]
        test    eax, eax
        je    L_d7bb
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 8]
        push    eax
        push    edx
        call    FUN_004f04a0
        mov    al, 1
        ret    8
L_d7bb:
        xor    al, al
        ret    8
        mov    dword ptr [ecx + 0x2bc8], 0
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        cmp    dword ptr [ecx + 0x2bc8], 0x1f4
        push    ebx
        push    ebp
        push    esi
        push    edi
        jae    L_d847
        mov    eax, dword ptr [esp + 0x14]
        mov    esi, dword ptr [eax]
        mov    ebx, dword ptr [eax + 4]
        cmp    esi, ebx
        je    L_d847
        mov    edi, dword ptr [esp + 0x18]
L_d7f1:
        mov    eax, dword ptr [ecx + 0x2bc8]
        mov    ebp, dword ptr [esi]
        lea    edx, [eax + eax*2]
        mov    dword ptr [ecx + edx*4 + 8], ebp
        mov    ebp, dword ptr [esi + 4]
        lea    edx, [ecx + edx*4 + 8]
        mov    dword ptr [edx + 4], ebp
        mov    ebp, dword ptr [esi + 8]
        mov    dword ptr [edx + 8], ebp
        mov    ebp, dword ptr [edi]
        mov    edx, eax
        shl    edx, 4
        lea    edx, [edx + ecx + 0x12c8]
        mov    dword ptr [edx], ebp
        mov    ebp, dword ptr [edi + 4]
        mov    dword ptr [edx + 4], ebp
        mov    ebp, dword ptr [edi + 8]
        inc    eax
        cmp    eax, 0x1f4
        mov    dword ptr [edx + 8], ebp
        mov    ebp, dword ptr [edi + 0xc]
        mov    dword ptr [edx + 0xc], ebp
        mov    dword ptr [ecx + 0x2bc8], eax
        jae    L_d847
        add    esi, 0xc
        cmp    esi, ebx
        jne    L_d7f1
L_d847:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
    }
}
