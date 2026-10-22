/*
 * FUN_005cd950 (1113 B) — __thiscall, RET 0x10. Large object constructor /
 * initializer. Sets up a vtable, initializes many float fields to -1.0
 * (0xbf800000), zeroes many fields, and grows several internal arrays.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005cd950(void)
{
    __asm {
        sub     esp, 0xc
        mov     eax, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x14]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        mov     eax, dword ptr [esp + 0x24]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x2c]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        _emit 0xE8
        _emit 0x6C
        _emit 0xDD
        _emit 0x00
        _emit 0x00
        lea     ecx, [esp + 0x2c]
        lea     edi, [esi + 0x420]
        push    ecx
        xor     ebx, ebx
        mov     ecx, edi
        mov     dword ptr [esi + 0x3e8], ebx
        _emit 0xE8
        _emit 0x32
        _emit 0x8C
        _emit 0x00
        _emit 0x00
        lea     edx, [esp + 0x2c]
        push    edx
        lea     ecx, [esi + 0x478]
        _emit 0xE8
        _emit 0x42
        _emit 0x8C
        _emit 0x00
        _emit 0x00
        lea     eax, [esp + 0x2c]
        lea     ebp, [esi + 0x484]
        push    eax
        mov     ecx, ebp
        _emit 0xE8
        _emit 0x60
        _emit 0x8C
        _emit 0x00
        _emit 0x00
        lea     edx, [esp + 0x2c]
        lea     ecx, [esi + 0x490]
        push    edx
        _emit 0xE8
        _emit 0xF0
        _emit 0x5E
        _emit 0xFE
        _emit 0xFF
        lea     eax, [esp + 0x2c]
        push    eax
        lea     ecx, [esi + 0x4b0]
        _emit 0xE8
        _emit 0xE0
        _emit 0x5E
        _emit 0xFE
        _emit 0xFF
        lea     ecx, [esp + 0x2c]
        push    ecx
        lea     ecx, [esi + 0x4c8]
        _emit 0xE8
        _emit 0x30
        _emit 0x8C
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x15
        _emit 0x4C
        _emit 0x24
        _emit 0x7F
        _emit 0x00
        push    edx
        mov     dword ptr [esi], 0x787ef4
        _emit 0xE8
        _emit 0x5E
        _emit 0x6F
        _emit 0x12
        _emit 0x00
        mov     eax, 0xbf800000
        mov     dword ptr [esi + 0x36c], eax
        mov     dword ptr [esi + 0x370], eax
        mov     dword ptr [esi + 0x374], eax
        mov     dword ptr [esi + 0x378], eax
        mov     dword ptr [esi + 0x37c], eax
        mov     dword ptr [esi + 0x380], eax
        mov     dword ptr [esi + 0x390], eax
        mov     dword ptr [esi + 0x394], eax
        mov     dword ptr [esi + 0x398], eax
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x18], eax
        lea     eax, [esp + 0x10]
        mov     dword ptr [esi + 0x4a4], ebx
        push    eax
        lea     ecx, [esi + 0x39c]
        mov     dword ptr [esi + 0x45c], ebx
        mov     dword ptr [esi + 0x470], ebx
        mov     dword ptr [esi + 0x364], ebx
        mov     dword ptr [esi + 0x368], ebx
        mov     dword ptr [esi + 0x3d4], ebx
        mov     byte ptr [esi + 0x4ac], bl
        mov     dword ptr [esi + 0x4a8], ebx
        _emit 0xE8
        _emit 0x97
        _emit 0xE9
        _emit 0xE3
        _emit 0xFF
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     ecx, [esi + 0x384]
        mov     dword ptr [esp + 0x14], 0xbf800000
        mov     dword ptr [esp + 0x18], 0xbf800000
        mov     dword ptr [esp + 0x1c], 0xbf800000
        _emit 0xE8
        _emit 0x6F
        _emit 0xE9
        _emit 0xE3
        _emit 0xFF
        mov     dword ptr [esp + 0x10], 0xbf800000
        mov     dword ptr [esp + 0x14], 0xbf800000
        lea     edx, [esp + 0x10]
        push    edx
        lea     ecx, [esi + 0x3ec]
        mov     dword ptr [esp + 0x1c], 0xbf800000
        _emit 0xE8
        _emit 0x47
        _emit 0xE9
        _emit 0xE3
        _emit 0xFF
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esi + 0x3f8]
        mov     dword ptr [esp + 0x14], 0xbf800000
        mov     dword ptr [esp + 0x18], 0xbf800000
        mov     dword ptr [esp + 0x1c], 0xbf800000
        _emit 0xE8
        _emit 0x1F
        _emit 0xE9
        _emit 0xE3
        _emit 0xFF
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     ecx, [esi + 0x404]
        mov     dword ptr [esp + 0x14], 0xbf800000
        mov     dword ptr [esp + 0x18], 0xbf800000
        mov     dword ptr [esp + 0x1c], 0xbf800000
        _emit 0xE8
        _emit 0xF7
        _emit 0xE8
        _emit 0xE3
        _emit 0xFF
        lea     edx, [esp + 0x10]
        push    edx
        lea     ecx, [esi + 0x410]
        mov     dword ptr [esp + 0x14], 0xbf800000
        mov     dword ptr [esp + 0x18], 0xbf800000
        mov     dword ptr [esp + 0x1c], 0xbf800000
        _emit 0xE8
        _emit 0xCF
        _emit 0xE8
        _emit 0xE3
        _emit 0xFF
        mov     eax, dword ptr [edi + 4]
        cmp     eax, dword ptr [edi + 8]
        mov     dword ptr [esi + 0x41c], ebx
        mov     dword ptr [esi + 0x430], ebx
        mov     dword ptr [esp + 0x2c], ebx
        jz      L1
        cmp     eax, ebx
        jz      L2
        mov     dword ptr [eax], ebx
L2:
        add     eax, 4
        mov     dword ptr [edi + 4], eax
        jmp     L3
L1:
        push    1
        lea     ecx, [esp + 0x30]
        push    ecx
        push    eax
        mov     ecx, edi
        _emit 0xE8
        _emit 0x9A
        _emit 0x36
        _emit 0xFB
        _emit 0xFF
L3:
        mov     eax, dword ptr [edi + 4]
        cmp     eax, dword ptr [edi + 8]
        mov     dword ptr [esp + 0x2c], ebx
        jz      L4
        cmp     eax, ebx
        jz      L5
        mov     dword ptr [eax], ebx
L5:
        add     eax, 4
        mov     dword ptr [edi + 4], eax
        jmp     L6
L4:
        push    1
        lea     edx, [esp + 0x30]
        push    edx
        push    eax
        mov     ecx, edi
        _emit 0xE8
        _emit 0x71
        _emit 0x36
        _emit 0xFB
        _emit 0xFF
L6:
        mov     eax, dword ptr [edi + 4]
        cmp     eax, dword ptr [edi + 8]
        mov     dword ptr [esp + 0x2c], ebx
        jz      L7
        cmp     eax, ebx
        jz      L8
        mov     dword ptr [eax], ebx
L8:
        add     eax, 4
        mov     dword ptr [edi + 4], eax
        jmp     L9
L7:
        push    1
        lea     ecx, [esp + 0x30]
        push    ecx
        push    eax
        mov     ecx, edi
        _emit 0xE8
        _emit 0x48
        _emit 0x36
        _emit 0xFB
        _emit 0xFF
L9:
        mov     eax, dword ptr [edi + 4]
        cmp     eax, dword ptr [edi + 8]
        mov     dword ptr [esp + 0x2c], ebx
        jz      L10
        lea     edx, [esp + 0x2c]
        push    edx
        push    eax
        _emit 0xE8
        _emit 0x51
        _emit 0x37
        _emit 0xFB
        _emit 0xFF
        mov     eax, dword ptr [edi + 4]
        add     esp, 8
        add     eax, 4
        mov     dword ptr [edi + 4], eax
        jmp     L11
L10:
        push    1
        lea     ecx, [esp + 0x30]
        push    ecx
        push    eax
        mov     ecx, edi
        _emit 0xE8
        _emit 0x14
        _emit 0x36
        _emit 0xFB
        _emit 0xFF
L11:
        mov     eax, dword ptr [edi + 4]
        cmp     eax, dword ptr [edi + 8]
        mov     dword ptr [esp + 0x2c], ebx
        jz      L12
        lea     edx, [esp + 0x2c]
        push    edx
        push    eax
        _emit 0xE8
        _emit 0x1D
        _emit 0x37
        _emit 0xFB
        _emit 0xFF
        mov     eax, dword ptr [edi + 4]
        add     esp, 8
        add     eax, 4
        mov     dword ptr [edi + 4], eax
        jmp     L13
L12:
        push    1
        lea     ecx, [esp + 0x30]
        push    ecx
        push    eax
        mov     ecx, edi
        _emit 0xE8
        _emit 0xE0
        _emit 0x35
        _emit 0xFB
        _emit 0xFF
L13:
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esi + 0x42c], ebx
        mov     byte ptr [esi + 0x434], bl
        mov     byte ptr [esi + 0x435], bl
        mov     dword ptr [esi + 0x3e4], ebx
        mov     dword ptr [esi + 0x3e0], ebx
        mov     dword ptr [esi + 0x3dc], ebx
        mov     dword ptr [esi + 0x450], ebx
        mov     dword ptr [esi + 0x3a8], ebx
        mov     dword ptr [esi + 0x3ac], ebx
        mov     dword ptr [esi + 0x3b0], ebx
        mov     dword ptr [esi + 0x3b4], ebx
        _emit 0xE8
        _emit 0xC6
        _emit 0x46
        _emit 0x00
        _emit 0x00
        mov     eax, dword ptr [ebp]
        mov     edx, dword ptr [ebp + 8]
        lea     edi, [ebp + 8]
        sub     edx, eax
        sar     edx, 2
        cmp     edx, 0xa
        mov     byte ptr [esi + 0x3cc], bl
        mov     byte ptr [esi + 0x3cd], bl
        mov     byte ptr [esi + 0x459], bl
        mov     byte ptr [esi + 0x3ce], bl
        mov     byte ptr [esi + 0x3cf], bl
        jnc     L14
        mov     edx, dword ptr [ebp + 4]
        mov     ecx, edx
        sub     ecx, eax
        sar     ecx, 2
        cmp     eax, ebx
        mov     dword ptr [esp + 0x28], ecx
        jz      L15
        push    edx
        push    eax
        push    0xa
        mov     ecx, ebp
        _emit 0xE8
        _emit 0x08
        _emit 0x8B
        _emit 0x00
        _emit 0x00
        mov     ecx, dword ptr [edi]
        mov     dword ptr [esp + 0x2c], eax
        mov     eax, dword ptr [ebp]
        sub     ecx, eax
        sar     ecx, 2
        push    ecx
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp + 0x2c], eax
        _emit 0xE8
        _emit 0x7D
        _emit 0x89
        _emit 0x00
        _emit 0x00
        mov     eax, dword ptr [esp + 0x2c]
        jmp     L16
L15:
        push    0x28
        _emit 0xE8
        _emit 0xE0
        _emit 0xA7
        _emit 0xE3
        _emit 0xFF
        add     esp, 4
L16:
        mov     edx, dword ptr [esp + 0x28]
        lea     ecx, [eax + edx*4]
        mov     dword ptr [ebp], eax
        add     eax, 0x28
        mov     dword ptr [ebp + 4], ecx
        mov     dword ptr [edi], eax
L14:
        push    0x14
        lea     ecx, [esi + 0x490]
        _emit 0xE8
        _emit 0x6E
        _emit 0x89
        _emit 0x00
        _emit 0x00
        push    0xbf800000
        push    0xbf800000
        push    0xbf800000
        lea     ecx, [esp + 0x1c]
        _emit 0xE8
        _emit 0x96
        _emit 0xEC
        _emit 0xE3
        _emit 0xFF
        lea     edx, [esp + 0x10]
        push    edx
        lea     ecx, [esi + 0x4bc]
        _emit 0xE8
        _emit 0xD6
        _emit 0xE6
        _emit 0xE3
        _emit 0xFF
        mov     edi, dword ptr [esi + 0x170]
        cmp     edi, ebx
        mov     dword ptr [esi + 0x460], ebx
        mov     dword ptr [esi + 0x3d0], ebx
        mov     dword ptr [esi + 0x3d8], ebx
        mov     dword ptr [esi + 0x4d4], ebx
        mov     dword ptr [esi + 0x35c], ebx
        mov     dword ptr [esi + 0x360], ebx
        jz      L17
        _emit 0xA1
        _emit 0xC0
        _emit 0x25
        _emit 0x7F
        _emit 0x00
        mov     ecx, dword ptr [edi + 4]
        push    eax
        _emit 0xE8
        _emit 0xBA
        _emit 0x74
        _emit 0xE4
        _emit 0xFF
        test    al, al
        jz      L18
        mov     dword ptr [esi + 0x35c], edi
L18:
        _emit 0xA1
        _emit 0x8C
        _emit 0x26
        _emit 0x7F
        _emit 0x00
        mov     ecx, dword ptr [edi + 4]
        push    eax
        _emit 0xE8
        _emit 0xA2
        _emit 0x74
        _emit 0xE4
        _emit 0xFF
        test    al, al
        jz      L17
        mov     dword ptr [esi + 0x360], edi
L17:
        _emit 0xE8
        _emit 0x03
        _emit 0x6C
        _emit 0x12
        _emit 0x00
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x10
    }
}
