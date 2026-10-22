/*
 * FUN_005cec40 (220 B) — __thiscall, RET 4. Compares an object pointer
 * against a stored object by name lookup through several name tables.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005cec40(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [ecx + 0x460]
        push    ebp
        xor     ebp, ebp
        cmp     ebx, ebp
        jnz     L1
        pop     ebp
        xor     al, al
        pop     ebx
        pop     ecx
        ret     4
L1:
        _emit 0xA1
        _emit 0xD8
        _emit 0x24
        _emit 0x7F
        _emit 0x00
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        mov     esi, dword ptr [edi + 4]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x14], ebp
        _emit 0xE8
        _emit 0xBF
        _emit 0x65
        _emit 0xE4
        _emit 0xFF
        test    al, al
        jz      L2
        mov     eax, dword ptr [edi + 0x170]
        mov     dword ptr [esp + 0x10], eax
        jmp     L3
L2:
        _emit 0xA1
        _emit 0xB8
        _emit 0x25
        _emit 0x7F
        _emit 0x00
        push    eax
        mov     ecx, esi
        _emit 0xE8
        _emit 0xA2
        _emit 0x65
        _emit 0xE4
        _emit 0xFF
        test    al, al
        jz      L4
        mov     ebp, dword ptr [edi + 0x170]
        jmp     L3
L4:
        _emit 0xA1
        _emit 0x8C
        _emit 0x26
        _emit 0x7F
        _emit 0x00
        push    eax
        mov     ecx, esi
        _emit 0xE8
        _emit 0x89
        _emit 0x65
        _emit 0xE4
        _emit 0xFF
        test    al, al
        jz      L3
        mov     dword ptr [esp + 0x10], edi
L3:
        _emit 0xA1
        _emit 0xD8
        _emit 0x24
        _emit 0x7F
        _emit 0x00
        mov     ecx, dword ptr [ebx + 4]
        push    eax
        _emit 0xE8
        _emit 0x73
        _emit 0x65
        _emit 0xE4
        _emit 0xFF
        test    al, al
        pop     edi
        pop     esi
        jz      L5
        mov     ebp, dword ptr [ebx + 0x170]
        cmp     dword ptr [esp + 8], ebp
        pop     ebp
        setz    al
        pop     ebx
        pop     ecx
        ret     4
L5:
        _emit 0xA1
        _emit 0xB8
        _emit 0x25
        _emit 0x7F
        _emit 0x00
        mov     ecx, dword ptr [ebx + 4]
        push    eax
        _emit 0xE8
        _emit 0x4C
        _emit 0x65
        _emit 0xE4
        _emit 0xFF
        test    al, al
        jz      L6
        mov     ebp, dword ptr [ebx + 0x170]
        cmp     dword ptr [esp + 8], ebp
        pop     ebp
        setz    al
        pop     ebx
        pop     ecx
        ret     4
L6:
        _emit 0xA1
        _emit 0x8C
        _emit 0x26
        _emit 0x7F
        _emit 0x00
        mov     ecx, dword ptr [ebx + 4]
        push    eax
        _emit 0xE8
        _emit 0x27
        _emit 0x65
        _emit 0xE4
        _emit 0xFF
        test    al, al
        jz      L7
        mov     ebp, ebx
L7:
        cmp     dword ptr [esp + 8], ebp
        pop     ebp
        setz    al
        pop     ebx
        pop     ecx
        ret     4
    }
}
