/*
 * FUN_00703B3F (extent 0x703B3F-0x703BAD, 110 B) - .text data block.
 * __stdcall, ret 0x10.
 */
#pragma warning(disable : 4035 4793)

extern int g_008aaa68;

__declspec(naked) void __stdcall FUN_00703B3F(void)
{
    __asm {
        nop
        test   byte ptr [esp + 0xc], 1
        push   esi
        push   edi
        jne    L_a6
        mov    eax, dword ptr [esp + 0x18]
        test   eax, eax
        mov    esi, dword ptr [esp + 0xc]
        je     L_9a
        cmp    byte ptr [eax], 0
        je     L_9a
        mov    edi, dword ptr [esi + 0x30]
        push   ebx
    L_5e:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [edi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_86
        test   cl, cl
        je     L_82
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [edi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_86
        add    eax, 2
        add    edi, 2
        test   cl, cl
        jne    L_5e
    L_82:
        xor    eax, eax
        jmp    L_8b
    L_86:
        sbb    eax, eax
        sbb    eax, -1
    L_8b:
        test   eax, eax
        pop    ebx
        je     L_9a
        pop    edi
        mov    eax, 1
        pop    esi
        ret    0x10
    L_9a:
        mov    ecx, 0x14
        mov    edi, offset g_008aaa68
        rep movsd
    L_a6:
        pop    edi
        xor    eax, eax
        pop    esi
        ret    0x10
    }
}
