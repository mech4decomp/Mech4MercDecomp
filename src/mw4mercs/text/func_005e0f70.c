/*
 * FUN_005e0f70 (452 B) — __stdcall (RET 0x4), 1 arg at [esp+0xf0]
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall func_005e0f70(void)
{
    __asm {
        sub esp, 0xe4
        push esi
        push edi
        mov edi, dword ptr [esp + 0xf0]
        test edi, edi
        jz label_1124
        or ecx, 0xffffffff
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        shr ecx, 0x2
        lea edx, [esp + 0x24]
        mov esi, edi
        mov edi, edx
        rep movsd
        mov ecx, eax
        and ecx, 0x3
        rep movsb
        lea ecx, [esp + 0x24]
        push ecx
        _emit 0xFF              /* call dword ptr [imm32] not supported in MSVC6 inline asm */
        _emit 0x15
        _emit 0x04
        _emit 0xB3
        _emit 0x76
        _emit 0x00
        add esp, 0x4
        lea edx, [esp + 0x8]
        mov esi, eax
        push edx
        lea eax, [esp + 0x23]
        push eax
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x14], 0x0
        mov dword ptr [esp + 0x18], 0x0
        mov dword ptr [esp + 0x10], 0x0
        _emit 0xE8              /* call rel32 -> absolute target 0x00547ba0 */
        _emit 0xBD
        _emit 0x6B
        _emit 0xF6
        _emit 0xFF
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        add ecx, esi
        push ecx
        push esi
        lea ecx, [esp + 0x14]
        _emit 0xE8              /* call rel32 -> absolute target 0x005480c0 */
        _emit 0xC4
        _emit 0x70
        _emit 0xF6
        _emit 0xFF
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, 0x7888ec
        repne scasb
        not ecx
        dec ecx
        push ecx
        push eax
        push 0x7888ec
        lea ecx, [esp + 0x18]
        _emit 0xE8              /* call rel32 -> absolute target 0x00547c70 */
        _emit 0x55
        _emit 0x6C
        _emit 0xF6
        _emit 0xFF
        _emit 0x3B              /* cmp eax,[imm32] encoded as immediate cmp by MSVC6 */
        _emit 0x05
        _emit 0x74
        _emit 0xB8
        _emit 0x77
        _emit 0x00
        jz label_1110
        mov edx, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0xc]
        mov esi, edx
        add eax, 0xb
        sub esi, ecx
        cmp eax, esi
        jnc label_1114
        mov esi, edx
        sub esi, ecx
        mov dword ptr [esp + 0x18], eax
        cmp esi, eax
        mov dword ptr [esp + 0x8], esi
        lea eax, [esp + 0x8]
        jc label_1056
        lea eax, [esp + 0x18]
label_1056:
        mov esi, dword ptr [eax]
        add esi, ecx
        cmp ecx, esi
        push ebx
        _emit 0x8B              /* mov ebx,[imm32] encoded as immediate load by MSVC6 */
        _emit 0x1D
        _emit 0x8C
        _emit 0xB2
        _emit 0x76
        _emit 0x00
        mov edi, ecx
        jz label_1082
        sub edx, esi
        inc edx
        push edx
        push esi
        push ecx
        call ebx
        mov edx, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x1c]
        sub edi, esi
        add esp, 0xc
        add edx, edi
        mov dword ptr [esp + 0x14], edx
label_1082:
        mov eax, edx
        sub eax, ecx
        cmp eax, 0x1
        jbe label_10cf
        lea esi, [eax - 0x1]
        mov eax, edx
        sub eax, ecx
        dec eax
        mov dword ptr [esp + 0x1c], eax
        cmp eax, esi
        mov dword ptr [esp + 0xc], esi
        lea eax, [esp + 0x1c]
        jc label_10a7
        lea eax, [esp + 0xc]
label_10a7:
        mov eax, dword ptr [eax]
        lea edi, [eax + ecx + 0x1]
        lea esi, [ecx + 0x1]
        cmp esi, edi
        jz label_10cf
        sub edx, edi
        inc edx
        push edx
        push edi
        push esi
        call ebx
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x1c]
        sub esi, edi
        add esp, 0xc
        add eax, esi
        mov dword ptr [esp + 0x14], eax
label_10cf:
        push 0xa
        lea edx, [esp + 0x28]
        push edx
        push ecx
        _emit 0xFF              /* call dword ptr [imm32] not supported in MSVC6 inline asm */
        _emit 0x15
        _emit 0x00
        _emit 0xB4
        _emit 0x76
        _emit 0x00
        add esp, 0xc
        mov esi, eax
        test esi, esi
        pop ebx
        jz label_1110
        dec esi
        js label_1110
        cmp esi, 0x7
        jg label_1110
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x14]
        sub ecx, eax
        push ecx
        push eax
        _emit 0xE8              /* call rel32 -> absolute target 0x00547c60 */
        _emit 0x60
        _emit 0x6B
        _emit 0xF6
        _emit 0xFF
        add esp, 0x8
        pop edi
        mov eax, esi
        pop esi
        add esp, 0xe4
        ret 0x4
label_1110:
        mov ecx, dword ptr [esp + 0xc]
label_1114:
        mov edx, dword ptr [esp + 0x14]
        sub edx, ecx
        push edx
        push ecx
        _emit 0xE8              /* call rel32 -> absolute target 0x00547c60 */
        _emit 0x3F
        _emit 0x6B
        _emit 0xF6
        _emit 0xFF
        add esp, 0x8
label_1124:
        pop edi
        mov eax, 0x8
        pop esi
        add esp, 0xe4
        ret 0x4
    }
}
