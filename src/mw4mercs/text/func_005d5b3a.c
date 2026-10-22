/*
 * FUN_005d5b3a (extent 0x5d5b3a-0x5d5be4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_00788160;

__declspec(naked) void FUN_005d5b3a(void)
{
    __asm {
        mov    edi, edi
        sti    
        pop    ecx
        pop    ebp
        add    byte ptr [esi + 0x5a], ah
        pop    ebp
        add    byte ptr [ecx + 0x21005d5a], bh
        pop    ebx
        pop    ebp
        add    byte ptr [eax - 0x7c6f6f70], dl
        in    al, dx
        adc    al, 0x53
        push    esi
        mov    esi, ecx
        push    edi
        mov    edi, dword ptr [esi + 0x35c]
        mov    eax, dword ptr [edi + 0x78]
        lea    ecx, [edi + 0x78]
        call    dword ptr [eax + 4]
        mov    edx, dword ptr [edi]
        push    0
        mov    ecx, edi
        mov    ebx, eax
        call    dword ptr [edx + 0xb0]
        mov    al, byte ptr [esi + 0x458]
        test    al, al
        mov    dword ptr [esi + 0x450], 4
        je    L_5b91
        fld    dword ptr [ebx + 0x2c4]
        jmp    L_5b97
L_5b91:
        fld    dword ptr [ebx + 0x2bc]
L_5b97:
        fdivr    dword ptr [g_00788160]
        mov    eax, dword ptr [esi]
        lea    edx, [esp + 0x14]
        mov    dword ptr [esp + 0x14], 0xbf800000
        mov    dword ptr [esp + 0x18], 0xbf800000
        mov    dword ptr [esp + 0x1c], 0xbf800000
        fst    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        mov    ecx, dword ptr [esp + 0x14]
        push    edx
        push    ecx
        lea    edx, [esi + 0x444]
        push    edx
        mov    ecx, esi
        call    dword ptr [eax + 0x1d0]
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x14
        ret    
    }
}
