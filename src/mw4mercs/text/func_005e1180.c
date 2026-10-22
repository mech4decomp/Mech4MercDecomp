/*
 * FUN_005e1180 (122 B) — __fastcall, ECX = this (EDI)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __fastcall func_005e1180(void)
{
    __asm {
        sub esp, 0xc
        push esi
        push edi
        lea eax, [esp + 0x8]
        mov edi, ecx
        push eax
        mov dword ptr [esp + 0xc], 0x0
        mov dword ptr [esp + 0x10], 0x0
        mov dword ptr [esp + 0x14], 0x0
        _emit 0xE8              /* call rel32 -> absolute target 0x005df620 */
        _emit 0x77
        _emit 0xE4
        _emit 0xFF
        _emit 0xFF
        push eax
        mov ecx, edi
        _emit 0xE8              /* call rel32 -> absolute target 0x005e0770 */
        _emit 0xBF
        _emit 0xF5
        _emit 0xFF
        _emit 0xFF
        mov eax, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x8]
        sub eax, edx
        xor esi, esi
        sar eax, 0x2
        jz label_11d0
        mov ecx, edx
label_11c4:
        cmp dword ptr [ecx], edi
        jz label_11e5
        inc esi
        add ecx, 0x4
        cmp esi, eax
        jc label_11c4
label_11d0:
        test edx, edx
        jz label_11dd
        push edx
        _emit 0xE8              /* call rel32 -> absolute target 0x004084e0 */
        _emit 0x06
        _emit 0x73
        _emit 0xE2
        _emit 0xFF
        add esp, 0x4
label_11dd:
        pop edi
        pop esi
        xor eax, eax
        add esp, 0xc
        ret
label_11e5:
        test edx, edx
        jz label_11f2
        push edx
        _emit 0xE8              /* call rel32 -> absolute target 0x004084e0 */
        _emit 0xF1
        _emit 0x72
        _emit 0xE2
        _emit 0xFF
        add esp, 0x4
label_11f2:
        pop edi
        mov eax, esi
        pop esi
        add esp, 0xc
        ret
    }
}
