/*
 * FUN_005ce340 (1331 B) — __thiscall, RET 4. Deserializes an object from a
 * stream (virtual method at vtable+0x20). Uses a jump table to construct
 * one of several object types based on a type id.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005ce340(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 8
        _emit 0xA1
        _emit 0x4C
        _emit 0x24
        _emit 0x7F
        _emit 0x00
        push    ebx
        push    esi
        push    edi
        push    eax
        mov     edi, ecx
        _emit 0xE8
        _emit 0xFA
        _emit 0x65
        _emit 0x12
        _emit 0x00
        mov     esi, dword ptr [ebp + 8]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebp - 8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebp - 8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [ebp - 1]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [edi + 0x364]
        test    ecx, ecx
        jz      L1
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L1:
        mov     al, byte ptr [ebp - 1]
        test    al, al
        mov     dword ptr [edi + 0x364], 0
        jz      L_after_switch
        mov     eax, dword ptr [esi]
        push    4
        lea     ecx, [ebp + 8]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [ebp + 8]
        lea     eax, [edx - 1]
        cmp     eax, 8
        ja      L_default
        jmp     dword ptr [eax*4 + 0x5ce874]
L_case1:
        push    0x2c
        _emit 0xE8
        _emit 0x01
        _emit 0xA1
        _emit 0xE3
        _emit 0xFF
        add     esp, 4
        test    eax, eax
        jz      L_fail
        _emit 0x8B
        _emit 0x0D
        _emit 0x40
        _emit 0x24
        _emit 0x7F
        _emit 0x00
        push    edi
        push    ecx
        mov     ecx, eax
        _emit 0xE8
        _emit 0xCB
        _emit 0xDE
        _emit 0x0B
        _emit 0x00
        mov     dword ptr [edi + 0x364], eax
        jmp     L_done
L_fail:
        xor     eax, eax
        mov     dword ptr [edi + 0x364], eax
        jmp     L_done
L_case2:
        push    0x50
        _emit 0xE8
        _emit 0xCC
        _emit 0xA0
        _emit 0xE3
        _emit 0xFF
        add     esp, 4
        test    eax, eax
        jz      L_fail
        _emit 0x8B
        _emit 0x15
        _emit 0x40
        _emit 0x24
        _emit 0x7F
        _emit 0x00
        push    edi
        push    edx
        mov     ecx, eax
        _emit 0xE8
        _emit 0xF6
        _emit 0xD0
        _emit 0x0B
        _emit 0x00
        mov     dword ptr [edi + 0x364], eax
        jmp     L_done
L_case3:
        push    0x44
        _emit 0xE8
        _emit 0xA4
        _emit 0xA0
        _emit 0xE3
        _emit 0xFF
        add     esp, 4
        test    eax, eax
        jz      L_fail
        _emit 0x8B
        _emit 0x0D
        _emit 0x40
        _emit 0x24
        _emit 0x7F
        _emit 0x00
        push    edi
        push    ecx
        mov     ecx, eax
        _emit 0xE8
        _emit 0x9E
        _emit 0xC5
        _emit 0x0B
        _emit 0x00
        mov     dword ptr [edi + 0x364], eax
        jmp     L_done
L_case4:
        push    0x44
        _emit 0xE8
        _emit 0x7C
        _emit 0xA0
        _emit 0xE3
        _emit 0xFF
        add     esp, 4
        test    eax, eax
        jz      L_fail
        _emit 0x8B
        _emit 0x15
        _emit 0x40
        _emit 0x24
        _emit 0x7F
        _emit 0x00
        push    edi
        push    edx
        mov     ecx, eax
        _emit 0xE8
        _emit 0x86
        _emit 0xBC
        _emit 0x0B
        _emit 0x00
        mov     dword ptr [edi + 0x364], eax
        jmp     L_done
L_case5:
        push    0x30
        _emit 0xE8
        _emit 0x54
        _emit 0xA0
        _emit 0xE3
        _emit 0xFF
        add     esp, 4
        test    eax, eax
        jz      L_fail
        _emit 0x8B
        _emit 0x0D
        _emit 0x40
        _emit 0x24
        _emit 0x7F
        _emit 0x00
        push    edi
        push    ecx
        mov     ecx, eax
        _emit 0xE8
        _emit 0x7A
        _emit 0xB5
        _emit 0x0B
        _emit 0x00
        mov     dword ptr [edi + 0x364], eax
        jmp     L_done
L_case6:
        push    0x44
        _emit 0xE8
        _emit 0x28
        _emit 0xA0
        _emit 0xE3
        _emit 0xFF
        add     esp, 4
        test    eax, eax
        jz      L_fail
        _emit 0x8B
        _emit 0x15
        _emit 0x40
        _emit 0x24
        _emit 0x7F
        _emit 0x00
        push    edi
        push    edx
        mov     ecx, eax
        _emit 0xE8
        _emit 0xCE
        _emit 0xA2
        _emit 0x0B
        _emit 0x00
        mov     dword ptr [edi + 0x364], eax
        jmp     L_done
L_case7:
        push    0x20
        _emit 0xE8
        _emit 0xFC
        _emit 0x9F
        _emit 0xE3
        _emit 0xFF
        add     esp, 4
        test    eax, eax
        jz      L_fail
        _emit 0x8B
        _emit 0x0D
        _emit 0x40
        _emit 0x24
        _emit 0x7F
        _emit 0x00
        push    edi
        push    ecx
        mov     ecx, eax
        _emit 0xE8
        _emit 0x22
        _emit 0xA2
        _emit 0x0B
        _emit 0x00
        mov     dword ptr [edi + 0x364], eax
        jmp     L_done
L_case8:
        push    0x2c
        _emit 0xE8
        _emit 0xD3
        _emit 0x9F
        _emit 0xE3
        _emit 0xFF
        add     esp, 4
        test    eax, eax
        jz      L_fail
        _emit 0x8B
        _emit 0x15
        _emit 0x40
        _emit 0x24
        _emit 0x7F
        _emit 0x00
        push    edi
        push    edx
        mov     ecx, eax
        _emit 0xE8
        _emit 0x19
        _emit 0x9F
        _emit 0x0B
        _emit 0x00
        mov     dword ptr [edi + 0x364], eax
        jmp     L_done
L_case9:
        push    0x24
        _emit 0xE8
        _emit 0xAA
        _emit 0x9F
        _emit 0xE3
        _emit 0xFF
        add     esp, 4
        test    eax, eax
        jz      L_fail
        _emit 0x8B
        _emit 0x0D
        _emit 0x40
        _emit 0x24
        _emit 0x7F
        _emit 0x00
        push    edi
        push    ecx
        mov     ecx, eax
        _emit 0xE8
        _emit 0x90
        _emit 0x9A
        _emit 0x0B
        _emit 0x00
        mov     dword ptr [edi + 0x364], eax
        jmp     L_done
L_default:
        push    0x7880c8
        _emit 0xE8
        _emit 0x3E
        _emit 0xC6
        _emit 0x12
        _emit 0x00
        add     esp, 4
        test    eax, eax
        jz      L_done
        _emit 0xCC
L_done:
        mov     ecx, dword ptr [edi + 0x364]
        mov     edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 8]
L_after_switch:
        mov     eax, dword ptr [esi]
        push    1
        lea     ecx, [ebp - 1]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     ebx, dword ptr [edi + 0x368]
        test    ebx, ebx
        jz      L2
        mov     ecx, ebx
        _emit 0xE8
        _emit 0x2C
        _emit 0x6A
        _emit 0x0B
        _emit 0x00
        push    ebx
        _emit 0xE8
        _emit 0x56
        _emit 0x9F
        _emit 0xE3
        _emit 0xFF
        add     esp, 4
L2:
        mov     al, byte ptr [ebp - 1]
        test    al, al
        mov     dword ptr [edi + 0x368], 0
        jz      L3
        _emit 0x8B
        _emit 0x15
        _emit 0x64
        _emit 0x24
        _emit 0x7F
        _emit 0x00
        push    edx
        _emit 0xE8
        _emit 0xA6
        _emit 0x63
        _emit 0x12
        _emit 0x00
        push    0x6c
        _emit 0xE8
        _emit 0x1F
        _emit 0x9F
        _emit 0xE3
        _emit 0xFF
        add     esp, 4
        test    eax, eax
        jz      L4
        _emit 0x8B
        _emit 0x0D
        _emit 0x40
        _emit 0x24
        _emit 0x7F
        _emit 0x00
        push    edi
        push    ecx
        mov     ecx, eax
        _emit 0xE8
        _emit 0x49
        _emit 0x67
        _emit 0x0B
        _emit 0x00
        jmp     L5
L4:
        xor     eax, eax
L5:
        push    esi
        mov     ecx, eax
        mov     dword ptr [edi + 0x368], eax
        _emit 0xE8
        _emit 0xE7
        _emit 0x6C
        _emit 0x0B
        _emit 0x00
        _emit 0xE8
        _emit 0xC2
        _emit 0x63
        _emit 0x12
        _emit 0x00
L3:
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x3d8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0xc
        lea     eax, [edi + 0x36c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0xc
        lea     eax, [edi + 0x378]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0xc
        lea     eax, [edi + 0x384]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0xc
        lea     eax, [edi + 0x390]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0xc
        lea     eax, [edi + 0x39c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x3a8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x3ac]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x3b0]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x3b4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x3b8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    8
        lea     eax, [edi + 0x3bc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    8
        lea     eax, [edi + 0x3c4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x3cc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x3cd]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x3ce]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x3cf]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x459]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebp - 8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [ebp - 8]
        cmp     ecx, -1
        jz      L6
        _emit 0x8B
        _emit 0x15
        _emit 0x44
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        mov     eax, dword ptr [edx]
        _emit 0x33
        _emit 0x05
        _emit 0x40
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        push    ecx
        mov     ecx, dword ptr [eax + 0x10]
        xor     ecx, 0x85739531
        _emit 0xE8
        _emit 0x00
        _emit 0xE4
        _emit 0xF2
        _emit 0xFF
        mov     dword ptr [edi + 0x460], eax
        xor     ebx, ebx
        jmp     L7
L6:
        xor     ebx, ebx
        mov     dword ptr [edi + 0x460], ebx
L7:
        mov     eax, dword ptr [esi]
        push    0xc
        lea     ecx, [edi + 0x464]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [ebp - 1]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [edi + 0x470]
        cmp     eax, ebx
        jz      L8
        _emit 0x8B
        _emit 0x0D
        _emit 0xA4
        _emit 0xDA
        _emit 0x80
        _emit 0x00
        push    eax
        _emit 0xE8
        _emit 0xBB
        _emit 0x79
        _emit 0xE4
        _emit 0xFF
L8:
        mov     al, byte ptr [ebp - 1]
        test    al, al
        mov     dword ptr [edi + 0x470], ebx
        jz      L9
        _emit 0x8B
        _emit 0x0D
        _emit 0xA4
        _emit 0xDA
        _emit 0x80
        _emit 0x00
        _emit 0xE8
        _emit 0x83
        _emit 0x79
        _emit 0xE4
        _emit 0xFF
        cmp     eax, ebx
        jz      L10
        mov     dword ptr [eax + 0x2c], ebx
        mov     dword ptr [eax + 0x30], ebx
        mov     dword ptr [eax + 0x34], ebx
        mov     ebx, eax
L10:
        mov     edx, dword ptr [esi]
        push    4
        push    ebx
        mov     ecx, esi
        mov     dword ptr [edi + 0x470], ebx
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esi]
        push    4
        lea     ecx, [ebx + 4]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebx + 8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebx + 0xc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebx + 0x10]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x18
        add     ebx, 0x14
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
L9:
        mov     eax, dword ptr [esi]
        push    4
        lea     ecx, [edi + 0x474]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [esi]
        push    8
        lea     eax, [edi + 0x49c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    8
        lea     eax, [edi + 0x4a4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x4ac]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0xc
        lea     eax, [edi + 0x4bc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0xc
        lea     eax, [edi + 0x3dc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x3e8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        push    esi
        mov     ecx, edi
        _emit 0xE8
        _emit 0x7B
        _emit 0xC7
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0x36
        _emit 0x61
        _emit 0x12
        _emit 0x00
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
