/*
 * FUN_0065d7cb (extent 0x65d7cb-0x65d867) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_0065d7cb(void)
{
    __asm {
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
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [ecx + 0x2bd0], eax
        mov    dword ptr [ecx + 0x2bd4], edx
        ret    8
    }
}
