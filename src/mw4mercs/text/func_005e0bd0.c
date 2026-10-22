/*
 * FUN_005e0bd0 (434 B) — __fastcall, ECX = this (ESI)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __fastcall func_005e0bd0(void)
{
    __asm {
        sub esp, 0x60
        push esi
        mov esi, ecx
        mov dword ptr [esi + 0x488], 0x0
        _emit 0xE8              /* call rel32 -> absolute target 0x005df620 */
        _emit 0x3B
        _emit 0xEA
        _emit 0xFF
        _emit 0xFF
        mov eax, dword ptr [eax + 0xd8]
        add eax, 0x80
        push eax
        lea ecx, [esp + 0x38]
        _emit 0xE8              /* call rel32 -> absolute target 0x00419460 */
        _emit 0x66
        _emit 0x88
        _emit 0xE3
        _emit 0xFF
        lea eax, [esp + 0x34]
        push eax
        lea ecx, [esp + 0x2c]
        _emit 0xE8              /* call rel32 -> absolute target 0x00419480 */
        _emit 0x78
        _emit 0x88
        _emit 0xE3
        _emit 0xFF
        lea ecx, [esp + 0x1c]
        push ecx
        lea ecx, [esp + 0x38]
        _emit 0xE8              /* call rel32 -> absolute target 0x0054fd90 */
        _emit 0x7A
        _emit 0xF1
        _emit 0xF6
        _emit 0xFF
        _emit 0xD9              /* fld dword ptr [imm32] not supported in MSVC6 inline asm */
        _emit 0x05
        _emit 0x6C
        _emit 0x87
        _emit 0x78
        _emit 0x00
        mov ecx, dword ptr [esp + 0x24]
        mov edx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esp + 0x20]
        push ecx
        mov dword ptr [esp + 0x14], edx
        lea edx, [esp + 0x14]
        mov dword ptr [esp + 0x1c], ecx
        fstp dword ptr [esp]
        push edx
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x1c], eax
        _emit 0xE8              /* call rel32 -> absolute target 0x0040ca40 */
        _emit 0xFA
        _emit 0xBD
        _emit 0xE2
        _emit 0xFF
        lea eax, [esp + 0x34]
        push eax
        lea ecx, [esp + 0x8]
        _emit 0xE8              /* call rel32 -> absolute target 0x00419480 */
        _emit 0x2C
        _emit 0x88
        _emit 0xE3
        _emit 0xFF
        lea ecx, [esp + 0x4]
        push ecx
        lea edx, [esp + 0x14]
        push edx
        lea ecx, [esp + 0x18]
        _emit 0xE8              /* call rel32 -> absolute target 0x0040c9e0 */
        _emit 0x79
        _emit 0xBD
        _emit 0xE2
        _emit 0xFF
        fld dword ptr [esp + 0x2c]
        push ecx
        lea eax, [esp + 0x14]
        fstp dword ptr [esp]
        push eax
        mov ecx, esi
        _emit 0xE8              /* call rel32 -> absolute target 0x005e16a0 */
        _emit 0x25
        _emit 0x0A
        _emit 0x00
        _emit 0x00
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x14]
        mov eax, dword ptr [esp + 0x18]
        mov dword ptr [esp + 0x40], ecx
        lea ecx, [esp + 0x34]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x54], edx
        mov dword ptr [esp + 0x64], eax
        _emit 0xE8              /* call rel32 -> absolute target 0x004daa20 */
        _emit 0x81
        _emit 0x9D
        _emit 0xEF
        _emit 0xFF
        mov edx, dword ptr [esi]
        push 0x1
        mov ecx, esi
        call dword ptr [edx + 0x48]
        _emit 0xA1              /* mov eax,[imm32] encoded as immediate load by MSVC6 */
        _emit 0x44
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        mov ecx, dword ptr [eax]
        _emit 0x33              /* xor ecx,[imm32] encoded as immediate xor by MSVC6 */
        _emit 0x0D
        _emit 0x40
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        mov ecx, dword ptr [ecx + 0x1c]
        push esi
        xor ecx, 0x85739531
        _emit 0xE8              /* call rel32 -> absolute target 0x004e2690 */
        _emit 0xCC
        _emit 0x19
        _emit 0xF0
        _emit 0xFF
        mov ecx, esi
        _emit 0xE8              /* call rel32 -> absolute target 0x005df620 */
        _emit 0x55
        _emit 0xE9
        _emit 0xFF
        _emit 0xFF
        add eax, 0x14
        push eax
        push 0x25
        mov ecx, esi
        _emit 0xE8              /* call rel32 -> absolute target 0x005e1200 */
        _emit 0x28
        _emit 0x05
        _emit 0x00
        _emit 0x00
        mov ecx, esi
        _emit 0xE8              /* call rel32 -> absolute target 0x005df620 */
        _emit 0x41
        _emit 0xE9
        _emit 0xFF
        _emit 0xFF
        xor edx, edx
        mov dl, byte ptr [eax + 0x14]
        push edx
        push 0x7888cc
        _emit 0xE8              /* call rel32 -> absolute target 0x00563550 */
        _emit 0x61
        _emit 0x28
        _emit 0xF8
        _emit 0xFF
        push eax
        _emit 0xE8              /* call rel32 -> absolute target 0x00563c80 */
        _emit 0x8B
        _emit 0x2F
        _emit 0xF8
        _emit 0xFF
        add esp, 0xc
        mov ecx, esi
        _emit 0xE8              /* call rel32 -> absolute target 0x005df620 */
        _emit 0x21
        _emit 0xE9
        _emit 0xFF
        _emit 0xFF
        mov ecx, dword ptr [eax + 0x2c]
        mov edx, dword ptr [eax + 0x4cc]
        mov eax, dword ptr [esi + 0x44c]
        push ecx
        push edx
        push eax
        _emit 0xE8              /* call rel32 -> absolute target 0x005e0170 */
        _emit 0x5A
        _emit 0xF4
        _emit 0xFF
        _emit 0xFF
        add esp, 0xc
        push 0x0
        mov ecx, esi
        _emit 0xE8              /* call rel32 -> absolute target 0x005df4f0 */
        _emit 0xCE
        _emit 0xE7
        _emit 0xFF
        _emit 0xFF
        _emit 0xE8              /* call rel32 -> absolute target 0x005e1140 */
        _emit 0x19
        _emit 0x04
        _emit 0x00
        _emit 0x00
        cmp eax, -0x1
        jz label_ret
        test eax, eax
        jz label_0d57
        _emit 0xE8              /* call rel32 -> absolute target 0x005e1140 */
        _emit 0x0B
        _emit 0x04
        _emit 0x00
        _emit 0x00
        mov dword ptr [esp + 0x4], eax
        fild dword ptr [esp + 0x4]
        push 0x0
        fstp qword ptr [esp + 0x8]
        _emit 0xE8              /* call rel32 -> absolute target 0x00707e70 */
        _emit 0x28
        _emit 0x71
        _emit 0x12
        _emit 0x00
        fadd qword ptr [esp + 0x4]
        fstp qword ptr [esi + 0x438]
        pop esi
        add esp, 0x60
        ret
label_0d57:
        mov eax, dword ptr [esi + 0x44c]
        cmp eax, 0x8
        jz label_0d76
        push eax
        push 0x7888a8
        _emit 0xE8              /* call rel32 -> absolute target 0x00563550 */
        _emit 0xE3
        _emit 0x27
        _emit 0xF8
        _emit 0xFF
        push eax
        _emit 0xE8              /* call rel32 -> absolute target 0x00563c80 */
        _emit 0x0D
        _emit 0x2F
        _emit 0xF8
        _emit 0xFF
        add esp, 0xc
label_0d76:
        mov ecx, esi
        _emit 0xE8              /* call rel32 -> absolute target 0x005e0b10 */
        _emit 0x93
        _emit 0xFD
        _emit 0xFF
        _emit 0xFF
label_ret:
        pop esi
        add esp, 0x60
        ret
    }
}
