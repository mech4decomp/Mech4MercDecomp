/*
 * FUN_005e0e70 (248 B) — __fastcall, ECX = this (ESI)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __fastcall func_005e0e70(void)
{
    __asm {
        sub esp, 0x8
        push esi
        push edi
        mov esi, ecx
        _emit 0xE8              /* call rel32 -> absolute target 0x005df620 */
        _emit 0xA4
        _emit 0xE7
        _emit 0xFF
        _emit 0xFF
        add eax, 0x14
        push eax
        push 0x26
        mov ecx, esi
        _emit 0xE8              /* call rel32 -> absolute target 0x005e1200 */
        _emit 0x77
        _emit 0x03
        _emit 0x00
        _emit 0x00
        mov ecx, esi
        _emit 0xE8              /* call rel32 -> absolute target 0x005df620 */
        _emit 0x90
        _emit 0xE7
        _emit 0xFF
        _emit 0xFF
        xor ecx, ecx
        mov cl, byte ptr [eax + 0x14]
        push ecx
        push 0x7888dc
        _emit 0xE8              /* call rel32 -> absolute target 0x00563550 */
        _emit 0xB0
        _emit 0x26
        _emit 0xF8
        _emit 0xFF
        push eax
        _emit 0xE8              /* call rel32 -> absolute target 0x00563c80 */
        _emit 0xDA
        _emit 0x2D
        _emit 0xF8
        _emit 0xFF
        _emit 0x8B              /* mov edi,[imm32] encoded as immediate load by MSVC6 */
        _emit 0x3D
        _emit 0x84
        _emit 0x1F
        _emit 0x7F
        _emit 0x00
        add esp, 0xc
        mov ecx, esi
        _emit 0xE8              /* call rel32 -> absolute target 0x005df620 */
        _emit 0x6A
        _emit 0xE7
        _emit 0xFF
        _emit 0xFF
        mov ecx, dword ptr [eax + 0x4]
        push edi
        _emit 0xE8              /* call rel32 -> absolute target 0x00415230 */
        _emit 0x71
        _emit 0x43
        _emit 0xE3
        _emit 0xFF
        cmp al, 0x1
        jnz label_0ee4
        mov ecx, esi
        _emit 0xE8              /* call rel32 -> absolute target 0x005df620 */
        _emit 0x56
        _emit 0xE7
        _emit 0xFF
        _emit 0xFF
        mov edx, dword ptr [eax + 0x2c]
        mov eax, dword ptr [eax + 0x4cc]
        mov ecx, dword ptr [esi + 0x44c]
        push edx
        push eax
        push ecx
        _emit 0xE8              /* call rel32 -> absolute target 0x005e0300 */
        _emit 0x1F
        _emit 0xF4
        _emit 0xFF
        _emit 0xFF
        add esp, 0xc
label_0ee4:
        xor edi, edi
        mov ecx, esi
        mov dword ptr [esi + 0x488], edi
        _emit 0xE8              /* call rel32 -> absolute target 0x005e1b10 */
        _emit 0x1D
        _emit 0x0C
        _emit 0x00
        _emit 0x00
        push edi
        mov ecx, esi
        _emit 0xE8              /* call rel32 -> absolute target 0x005df4f0 */
        _emit 0xF5
        _emit 0xE5
        _emit 0xFF
        _emit 0xFF
        _emit 0xE8              /* call rel32 -> absolute target 0x005e1160 */
        _emit 0x60
        _emit 0x02
        _emit 0x00
        _emit 0x00
        cmp eax, -0x1
        jz label_0f4b
        cmp eax, edi
        jz label_0f37
        mov ecx, esi
        _emit 0xE8              /* call rel32 -> absolute target 0x005df420 */
        _emit 0x10
        _emit 0xE5
        _emit 0xFF
        _emit 0xFF
        _emit 0xE8              /* call rel32 -> absolute target 0x005e1160 */
        _emit 0x4B
        _emit 0x02
        _emit 0x00
        _emit 0x00
        mov dword ptr [esp + 0x8], eax
        fild dword ptr [esp + 0x8]
        push edi
        fstp qword ptr [esp + 0xc]
        _emit 0xE8              /* call rel32 -> absolute target 0x00707e70 */
        _emit 0x49
        _emit 0x6F
        _emit 0x12
        _emit 0x00
        fadd qword ptr [esp + 0x8]
        pop edi
        fstp qword ptr [esi + 0x440]
        pop esi
        add esp, 0x8
        ret
label_0f37:
        lea edx, [esi + 0x454]
        push edx
        mov ecx, esi
        _emit 0xE8              /* call rel32 -> absolute target 0x004daa20 */
        _emit 0xDB
        _emit 0x9A
        _emit 0xEF
        _emit 0xFF
        pop edi
        pop esi
        add esp, 0x8
        ret
label_0f4b:
        mov ecx, esi
        _emit 0xE8              /* call rel32 -> absolute target 0x005df420 */
        _emit 0xCE
        _emit 0xE4
        _emit 0xFF
        _emit 0xFF
        mov dword ptr [esi + 0x440], edi
        pop edi
        mov dword ptr [esi + 0x444], 0xbff00000
        pop esi
        add esp, 0x8
        ret
    }
}
