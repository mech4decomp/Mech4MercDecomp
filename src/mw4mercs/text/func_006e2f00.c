/*
 * FUN_006E2F00 (170 B) — String/array operations (multiple sub-functions).
 *
 * __thiscall
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_006E2F00(void)
{
    __asm {
        /* 0x6E2F00: imul edi, eax, -0x18; call 0x6E2920 */
        _emit 0x6B
        _emit 0xF8
        _emit 0xE8
        _emit 0x19
        _emit 0xFA
        _emit 0xFF
        _emit 0xFF
        pop     edi
        mov     eax, ebx
        pop     ebp
        pop     esi
        pop     ebx
        pop     ecx
        ret     4
        /* nop padding */
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        /* 0x6E2F20: second sub-function */
        push    esi
        mov     esi, ecx
        _emit 0xE8
        _emit 0x48
        _emit 0xFA
        _emit 0xFF
        _emit 0xFF
        mov     eax, dword ptr [esp + 8]
        cmp     eax, -1
        jne     l_use_strlen
        mov     eax, dword ptr [esi]
        push    eax
        _emit 0xFF
        _emit 0x15
        _emit 0x34
        _emit 0xB1
        _emit 0x76
        _emit 0x00
    l_use_strlen:
        mov     ecx, dword ptr [esi]
        mov     dword ptr [ecx - 8], eax
        _emit 0xC6
        _emit 0x04
        _emit 0x01
        _emit 0x00
        pop     esi
        ret     4
        /* nop padding */
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        /* 0x6E2F50: third sub-function */
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x0C]
        mov     esi, ecx
        push    edi
        _emit 0xE8
        _emit 0x52
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        mov     eax, dword ptr [esi]
        mov     dword ptr [eax - 8], edi
        mov     byte ptr [eax + edi], 0
        pop     edi
        pop     esi
        ret     4
        /* nop padding */
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        /* 0x6E2F70: fourth sub-function */
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi]
        mov     ecx, dword ptr [eax - 8]
        cmp     ecx, dword ptr [eax - 4]
        je      l_done
        push    ebx
        push    esi
        push    ecx
        mov     ecx, edi
        lea     ebx, [eax - 0x0C]
        _emit 0xE8
        _emit 0x06
        _emit 0xF9
        _emit 0xFF
        _emit 0xFF
        mov     ecx, dword ptr [ebx + 4]
        mov     edi, dword ptr [edi]
        mov     eax, ecx
        shr     ecx, 2
        lea     esi, [ebx + 0x0C]
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        push    ebx
        rep movsb
        _emit 0xE8
        _emit 0x7A
        _emit 0xF9
        _emit 0xFF
        _emit 0xFF
        pop     esi
        pop     ebx
    l_done:
        pop     edi
        ret
    }
}
