/*
 * FUN_005dfa80 (294 B) — __fastcall site-flag render/update
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005dfa80(void)
{
    __asm {
        sub esp, 0x94
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0xd8]
        add eax, 0x80
        push eax
        lea ecx, [esp + 0x48]
        _emit 0xE8          /* call 0x00419460 */
        _emit 0xC2
        _emit 0x99
        _emit 0xE3
        _emit 0xFF
        push 0x7b8d08
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x2c], 0x44fa0000
        _emit 0xE8          /* call 0x0040d560 */
        _emit 0xAC
        _emit 0xDA
        _emit 0xE2
        _emit 0xFF
        fld dword ptr [esp + 0x60]
        mov ecx, dword ptr [esp + 0x50]
        _emit 0xD8          /* fadd dword ptr [0x0078096c] — FPU mem [imm32] */
        _emit 0x05
        _emit 0x6C
        _emit 0x09
        _emit 0x78
        _emit 0x00
        mov edx, dword ptr [esp + 0x70]
        mov dword ptr [esp + 0x10], ecx
        mov dword ptr [esp + 0x18], edx
        fstp dword ptr [esp + 0x14]
        lea ecx, [esp + 0x8c]
        lea edx, [esp + 0x2c]
        lea eax, [esp + 0x10]
        mov dword ptr [esp + 0x30], ecx
        _emit 0x8B          /* mov ecx,[0x007dc728] — mov reg,[imm32] not encodable */
        _emit 0x0D
        _emit 0x28
        _emit 0xC7
        _emit 0x7D
        _emit 0x00
        push edx
        mov dword ptr [esp + 0x30], eax
        mov dword ptr [esp + 0x38], 0x0
        mov dword ptr [esp + 0x40], esi
        mov dword ptr [esp + 0x44], 0x1000
        _emit 0xE8          /* call 0x004e2f40 */
        _emit 0x37
        _emit 0x34
        _emit 0xF0
        _emit 0xFF
        fld dword ptr [esp + 0x28]
        push ecx
        lea eax, [esp + 0x20]
        fstp dword ptr [esp]
        push eax
        lea ecx, [esp + 0xc]
        _emit 0xE8          /* call 0x0040ca40 */
        _emit 0x21
        _emit 0xCF
        _emit 0xE2
        _emit 0xFF
        lea ecx, [esp + 0x4]
        push ecx
        lea edx, [esp + 0x14]
        push edx
        lea ecx, [esp + 0x7c]
        _emit 0xE8          /* call 0x0040cbb0 */
        _emit 0x7E
        _emit 0xD0
        _emit 0xE2
        _emit 0xFF
        mov eax, dword ptr [esi + 0xd8]
        mov ecx, dword ptr [eax + 0x8c]
        mov edx, dword ptr [eax + 0xac]
        add eax, 0x80
        mov dword ptr [esp + 0x4], ecx
        mov ecx, dword ptr [esp + 0x78]
        mov dword ptr [esp + 0x8], ecx
        push eax
        lea ecx, [esp + 0x84]
        mov dword ptr [esp + 0x10], edx
        _emit 0xE8          /* call 0x0041acb0 */
        _emit 0x4A
        _emit 0xB1
        _emit 0xE3
        _emit 0xFF
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x4]
        mov eax, dword ptr [esp + 0x8]
        push 0x2
        push 0x0
        push 0x1
        mov dword ptr [esp + 0x7c], ecx
        push 0x7b8d18
        lea ecx, [esp + 0x54]
        mov dword ptr [esp + 0x60], edx
        mov dword ptr [esp + 0x70], eax
        _emit 0xE8          /* call 0x0041fde0 */
        _emit 0x4E
        _emit 0x02
        _emit 0xE4
        _emit 0xFF
        lea edx, [esp + 0x44]
        push edx
        mov ecx, esi
        _emit 0xE8          /* call 0x004daa20 */
        _emit 0x82
        _emit 0xAE
        _emit 0xEF
        _emit 0xFF
        pop esi
        add esp, 0x94
        ret
    }
}
