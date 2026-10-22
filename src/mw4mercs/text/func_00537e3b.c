/*
 * FUN_00537e3b (extent 0x537e3b-0x537f95) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007db090;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004d4290(void);
extern void __cdecl FUN_004d42c0(void);
extern void __cdecl FUN_0052dbb0(void);
extern void __cdecl FUN_0052ddd0(void);
extern void __cdecl FUN_0052e010(void);
extern void __cdecl FUN_00543ec0(void);

__declspec(naked) void FUN_00537e3b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    edx, eax
        shl    edx, 7
        add    edx, eax
        shl    edx, 3
        sub    edx, eax
        lea    ecx, [ecx + edx*8]
        mov    edx, dword ptr [esp + 8]
        mov    edx, dword ptr [edx + 0x30]
        mov    byte ptr [ecx + 0x3538], 1
        mov    dword ptr [ecx + 0x3588], edx
        xor    edx, edx
        mov    ecx, 0xbff00000
        mov    dword ptr [eax*8 + 0x7db8c0], edx
        mov    dword ptr [eax*8 + 0x7db0c8], edx
        mov    dword ptr [eax*8 + 0x7db8c4], ecx
        mov    dword ptr [eax*8 + 0x7db0cc], ecx
        ret    8
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        mov    ecx, eax
        shl    ecx, 7
        add    ecx, eax
        shl    ecx, 3
        sub    ecx, eax
        lea    eax, [esi + ecx*8]
        push    edi
        mov    edi, dword ptr [eax + 0x3548]
        lea    ecx, [eax + 0x3538]
        call    FUN_0052ddd0
        cmp    edi, 8
        je    L_7eea
        mov    ecx, esi
        call    FUN_00543ec0
        mov    edi, eax
        test    edi, edi
        je    L_7eea
        mov    eax, dword ptr [g_007db090]
        mov    edx, dword ptr [esi]
        xor    ecx, ecx
        mov    cl, byte ptr [eax + 0x28]
        push    edi
        push    0
        push    0
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 0x30]
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_7eea:
        pop    edi
        pop    esi
        ret    8
        nop    
        push    ebx
        push    esi
        mov    ebx, ecx
        push    edi
        mov    dword ptr [ebx + 0x3534], 0
        lea    esi, [ebx + 0x3538]
        mov    edi, 0xff
L_7f0a:
        mov    ecx, esi
        call    FUN_0052dbb0
        add    esi, 0x2038
        dec    edi
        jne    L_7f0a
        lea    esi, [ebx + 0x205d24]
        mov    edi, 0x18
L_7f25:
        mov    ecx, esi
        call    FUN_0052e010
        add    esi, 0x22ac
        dec    edi
        jne    L_7f25
        mov    ecx, ebx
        call    FUN_004d4290
        pop    edi
        pop    esi
        pop    ebx
        ret    
        push    ebx
        push    esi
        mov    esi, ecx
        xor    eax, eax
        push    edi
        mov    byte ptr [esi + 0x16], 1
        mov    byte ptr [esi + 0x17], al
        mov    dword ptr [esi + 0x3534], eax
        lea    edi, [esi + 0x3538]
        mov    ebx, 0xff
L_7f5f:
        mov    ecx, edi
        call    FUN_0052ddd0
        add    edi, 0x2038
        dec    ebx
        jne    L_7f5f
        lea    edi, [esi + 0x205d24]
        mov    ebx, 0x18
L_7f7a:
        mov    ecx, edi
        call    FUN_0052e010
        add    edi, 0x22ac
        dec    ebx
        jne    L_7f7a
        mov    ecx, esi
        call    FUN_004d42c0
        pop    edi
        pop    esi
        pop    ebx
        ret    
    }
}
