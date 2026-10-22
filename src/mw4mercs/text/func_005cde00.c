/*
 * FUN_005cde00 (491 B) — __thiscall. Destructor. Frees various member
 * sub-objects and arrays.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005cde00(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        xor     ebx, ebx
        push    ebx
        mov     esi, ecx
        push    1
        mov     dword ptr [esi], 0x787ef4
        _emit 0xE8
        _emit 0xC9
        _emit 0x1F
        _emit 0x00
        _emit 0x00
        mov     ecx, dword ptr [esi + 0x364]
        cmp     ecx, ebx
        jz      L1
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L1:
        mov     edi, dword ptr [esi + 0x368]
        cmp     edi, ebx
        mov     dword ptr [esi + 0x364], ebx
        jz      L2
        mov     ecx, edi
        _emit 0xE8
        _emit 0x72
        _emit 0x71
        _emit 0x0B
        _emit 0x00
        push    edi
        _emit 0xE8
        _emit 0x9C
        _emit 0xA6
        _emit 0xE3
        _emit 0xFF
        add     esp, 4
L2:
        mov     eax, dword ptr [esi + 0x470]
        cmp     eax, ebx
        mov     dword ptr [esi + 0x368], ebx
        jz      L3
        _emit 0x8B
        _emit 0x0D
        _emit 0xA4
        _emit 0xDA
        _emit 0x80
        _emit 0x00
        push    eax
        _emit 0xE8
        _emit 0xCD
        _emit 0x82
        _emit 0xE4
        _emit 0xFF
L3:
        mov     eax, dword ptr [esi + 0x3d4]
        cmp     eax, ebx
        jz      L4
        push    eax
        _emit 0xE8
        _emit 0x6D
        _emit 0xA6
        _emit 0xE3
        _emit 0xFF
        add     esp, 4
L4:
        mov     ecx, esi
        _emit 0xE8
        _emit 0x73
        _emit 0x25
        _emit 0x00
        _emit 0x00
        mov     edi, dword ptr [esi + 0x45c]
        cmp     edi, ebx
        mov     dword ptr [esi + 0x3d4], ebx
        mov     dword ptr [esi + 0x470], ebx
        jz      L5
        _emit 0x8B
        _emit 0x0D
        _emit 0x38
        _emit 0x24
        _emit 0x7F
        _emit 0x00
        push    edi
        _emit 0xE8
        _emit 0xD1
        _emit 0xBD
        _emit 0x00
        _emit 0x00
        cmp     edi, ebx
        jz      L6
        mov     ecx, edi
        _emit 0xE8
        _emit 0x56
        _emit 0xB6
        _emit 0x00
        _emit 0x00
        push    edi
        _emit 0xE8
        _emit 0x30
        _emit 0xA6
        _emit 0xE3
        _emit 0xFF
        add     esp, 4
L6:
        mov     dword ptr [esi + 0x45c], ebx
L5:
        mov     ecx, dword ptr [esi + 0x478]
        mov     eax, dword ptr [esi + 0x47c]
        lea     ebx, [esi + 0x478]
        push    ecx
        push    eax
        push    eax
        _emit 0xE8
        _emit 0x6D
        _emit 0x88
        _emit 0x00
        _emit 0x00
        mov     ebp, dword ptr [esi + 0x484]
        lea     edi, [esi + 0x484]
        mov     dword ptr [ebx + 4], eax
        mov     eax, dword ptr [esi + 0x488]
        add     esp, 0xc
        cmp     ebp, eax
        jz      L7
L8:
        mov     eax, dword ptr [ebp]
        test    eax, eax
        jz      L9
        _emit 0x8B
        _emit 0x0D
        _emit 0xA8
        _emit 0xDA
        _emit 0x80
        _emit 0x00
        push    eax
        _emit 0xE8
        _emit 0x2E
        _emit 0x82
        _emit 0xE4
        _emit 0xFF
L9:
        mov     eax, dword ptr [esi + 0x488]
        add     ebp, 4
        cmp     ebp, eax
        jnz     L8
L7:
        mov     edx, dword ptr [edi]
        mov     eax, dword ptr [edi + 4]
        push    edx
        push    eax
        push    eax
        _emit 0xE8
        _emit 0x54
        _emit 0x88
        _emit 0x00
        _emit 0x00
        mov     ecx, dword ptr [esi + 0x490]
        mov     dword ptr [edi + 4], eax
        mov     eax, dword ptr [esi + 0x494]
        push    ecx
        push    eax
        push    eax
        _emit 0xE8
        _emit 0x6D
        _emit 0x88
        _emit 0x00
        _emit 0x00
        mov     edx, dword ptr [esi + 0x4d0]
        lea     ecx, [esi + 0x4d0]
        mov     dword ptr [esi + 0x494], eax
        mov     eax, dword ptr [esi + 0x4c8]
        sub     edx, eax
        add     esp, 0x18
        sar     edx, 2
        push    edx
        push    eax
        mov     dword ptr [esp + 0x18], eax
        _emit 0xE8
        _emit 0x02
        _emit 0x87
        _emit 0x00
        _emit 0x00
        mov     eax, dword ptr [esi + 0x4b0]
        mov     edx, dword ptr [esi + 0x4b8]
        lea     ecx, [esi + 0x4b8]
        sub     edx, eax
        sar     edx, 2
        push    edx
        push    eax
        mov     dword ptr [esp + 0x18], eax
        _emit 0xE8
        _emit 0x50
        _emit 0x59
        _emit 0xFE
        _emit 0xFF
        mov     eax, dword ptr [esi + 0x490]
        mov     edx, dword ptr [esi + 0x498]
        lea     ecx, [esi + 0x498]
        sub     edx, eax
        sar     edx, 2
        push    edx
        push    eax
        mov     dword ptr [esp + 0x18], eax
        _emit 0xE8
        _emit 0x2E
        _emit 0x59
        _emit 0xFE
        _emit 0xFF
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        mov     dword ptr [esp + 0x10], eax
        _emit 0xE8
        _emit 0x81
        _emit 0x86
        _emit 0x00
        _emit 0x00
        mov     ecx, dword ptr [ebx]
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, ebx
        _emit 0xE8
        _emit 0x44
        _emit 0x86
        _emit 0x00
        _emit 0x00
        mov     eax, dword ptr [esi + 0x420]
        mov     edx, dword ptr [esi + 0x428]
        lea     ecx, [esi + 0x428]
        sub     edx, eax
        sar     edx, 2
        push    edx
        push    eax
        mov     dword ptr [esp + 0x18], eax
        _emit 0xE8
        _emit 0x62
        _emit 0x86
        _emit 0x00
        _emit 0x00
        mov     ecx, esi
        _emit 0xE8
        _emit 0x2B
        _emit 0xDA
        _emit 0x00
        _emit 0x00
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}
