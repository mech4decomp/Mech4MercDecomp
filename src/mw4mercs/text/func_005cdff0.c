/*
 * FUN_005cdff0 (834 B) — __thiscall, RET 4. Serializes many object fields
 * through a stream object (virtual method at vtable+0x24).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005cdff0(void)
{
    __asm {
        push    ecx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x35c]
        test    eax, eax
        jz      L1
        mov     esi, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esi]
        push    4
        add     eax, 0x30
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        jmp     L2
L1:
        mov     esi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esi]
        push    4
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x14], 0xffffffff
        call    dword ptr [eax + 0x24]
L2:
        mov     eax, dword ptr [edi + 0x360]
        test    eax, eax
        jz      L3
        mov     edx, dword ptr [esi]
        push    4
        add     eax, 0x30
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        jmp     L4
L3:
        mov     eax, dword ptr [esi]
        push    4
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x1c], 0xffffffff
        call    dword ptr [eax + 0x24]
L4:
        mov     ebp, dword ptr [edi + 0x364]
        test    ebp, ebp
        jz      L5
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x1c], 1
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [ebp + 8]
        mov     edx, dword ptr [esi]
        mov     dword ptr [esp + 0x14], ecx
        push    4
        lea     eax, [esp + 0x18]
        jmp     L6
L5:
        mov     edx, dword ptr [esi]
        mov     byte ptr [esp + 0x14], 0
        push    1
        lea     eax, [esp + 0x18]
L6:
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ebp, dword ptr [edi + 0x368]
        test    ebp, ebp
        jz      L7
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x1c], 1
        call    dword ptr [edx + 0x24]
        push    esi
        mov     ecx, ebp
        _emit 0xE8
        _emit 0x3E
        _emit 0x70
        _emit 0x0B
        _emit 0x00
        jmp     L8
L7:
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x1c], 0
        call    dword ptr [edx + 0x24]
L8:
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x3d8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0xc
        lea     eax, [edi + 0x36c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0xc
        lea     eax, [edi + 0x378]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0xc
        lea     eax, [edi + 0x384]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0xc
        lea     eax, [edi + 0x390]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0xc
        lea     eax, [edi + 0x39c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x3a8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x3ac]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x3b0]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x3b4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x3b8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    8
        lea     eax, [edi + 0x3bc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    8
        lea     eax, [edi + 0x3c4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x3cc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x3cd]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x3ce]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x3cf]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x459]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     eax, dword ptr [edi + 0x460]
        test    eax, eax
        jz      L9
        mov     edx, dword ptr [esi]
        push    4
        add     eax, 0x30
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        jmp     L10
L9:
        mov     eax, dword ptr [esi]
        push    4
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x1c], 0xffffffff
        call    dword ptr [eax + 0x24]
L10:
        mov     edx, dword ptr [esi]
        push    0xc
        lea     eax, [edi + 0x464]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ebp, dword ptr [edi + 0x470]
        test    ebp, ebp
        jz      L11
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x1c], 1
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        push    ebp
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     eax, dword ptr [esi]
        push    4
        lea     ecx, [ebp + 4]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebp + 8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebp + 0xc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebp + 0x10]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x18
        add     ebp, 0x14
        push    ebp
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        jmp     L12
L11:
        mov     eax, dword ptr [esi]
        push    1
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, esi
        mov     byte ptr [esp + 0x1c], 0
        call    dword ptr [eax + 0x24]
L12:
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x474]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    8
        lea     eax, [edi + 0x49c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    8
        lea     eax, [edi + 0x4a4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x4ac]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0xc
        lea     eax, [edi + 0x4bc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0xc
        lea     eax, [edi + 0x3dc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x3e8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        mov     ecx, edi
        _emit 0xE8
        _emit 0x05
        _emit 0xCA
        _emit 0x00
        _emit 0x00
        pop     edi
        pop     esi
        pop     ebp
        pop     ecx
        ret     4
    }
}
