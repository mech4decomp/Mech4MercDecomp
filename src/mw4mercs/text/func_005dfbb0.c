/*
 * FUN_005dfbb0 (455 B) — __fastcall site-flag render/update (large)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005dfbb0(void)
{
    __asm {
        sub esp, 0xac
        push esi
        push edi
        _emit 0x8B          /* mov edi,[0x007f268c] — mov reg,[imm32] not encodable */
        _emit 0x3D
        _emit 0x8C
        _emit 0x26
        _emit 0x7F
        _emit 0x00
        mov esi, ecx
        _emit 0xE8          /* call 0x005df620 */
        _emit 0x5B
        _emit 0xFA
        _emit 0xFF
        _emit 0xFF
        mov ecx, dword ptr [eax + 0x4]
        push edi
        _emit 0xE8          /* call 0x00415230 */
        _emit 0x62
        _emit 0x56
        _emit 0xE3
        _emit 0xFF
        cmp al, 0x1
        mov ecx, esi
        jnz Lc12
        _emit 0xE8          /* call 0x005df620 */
        _emit 0x47
        _emit 0xFA
        _emit 0xFF
        _emit 0xFF
        mov ecx, dword ptr [eax + 0x410]
        mov edi, dword ptr [eax + 0x40c]
        sub ecx, edi
        sar ecx, 0x2
        jz Lc2c
        mov ecx, edi
        cmp dword ptr [ecx], 0x0
        jz Lc2c
        mov edx, dword ptr [eax + 0x410]
        sub edx, edi
        sar edx, 0x2
        jz Lc09
        mov ecx, dword ptr [ecx]
        _emit 0xE8          /* call 0x005eaec0 */
        _emit 0xB9
        _emit 0xB2
        _emit 0x00
        _emit 0x00
        jmp Lc22
Lc09:
        xor ecx, ecx
        _emit 0xE8          /* call 0x005eaec0 */
        _emit 0xB0
        _emit 0xB2
        _emit 0x00
        _emit 0x00
        jmp Lc22
Lc12:
        _emit 0xE8          /* call 0x005df620 */
        _emit 0x09
        _emit 0xFA
        _emit 0xFF
        _emit 0xFF
        mov eax, dword ptr [eax + 0xd8]
        add eax, 0x80
Lc22:
        push eax
        lea ecx, [esp + 0x40]
        _emit 0xE8          /* call 0x00419460 */
        _emit 0x34
        _emit 0x98
        _emit 0xE3
        _emit 0xFF
Lc2c:
        lea eax, [esp + 0x78]
        push eax
        lea ecx, [esp + 0x40]
        _emit 0xE8          /* call 0x00428730 */
        _emit 0xF6
        _emit 0x8A
        _emit 0xE4
        _emit 0xFF
        lea ecx, [esp + 0x3c]
        push ecx
        lea ecx, [esp + 0x70]
        _emit 0xE8          /* call 0x0041aa10 */
        _emit 0xC8
        _emit 0xAD
        _emit 0xE3
        _emit 0xFF
        lea edx, [esp + 0x6c]
        push edx
        lea ecx, [esp + 0x40]
        _emit 0xE8          /* call 0x00419f90 */
        _emit 0x3A
        _emit 0xA3
        _emit 0xE3
        _emit 0xFF
        mov ecx, dword ptr [esi + 0x434]
        test ecx, ecx
        jz Lc8a
        lea eax, [esp + 0x84]
        push eax
        _emit 0xE8          /* call 0x00507f90 */
        _emit 0x23
        _emit 0x83
        _emit 0xF2
        _emit 0xFF
        push eax
        lea ecx, [esp + 0x1c]
        _emit 0xE8          /* call 0x00419480 */
        _emit 0x09
        _emit 0x98
        _emit 0xE3
        _emit 0xFF
        lea ecx, [esp + 0x18]
        push ecx
        lea ecx, [esp + 0x40]
        _emit 0xE8          /* call 0x0040d030 */
        _emit 0xAB
        _emit 0xD3
        _emit 0xE2
        _emit 0xFF
        jmp Ld62
Lc8a:
        lea edx, [esp + 0x78]
        push edx
        lea ecx, [esp + 0x10]
        _emit 0xE8          /* call 0x0040c410 */
        _emit 0x78
        _emit 0xC7
        _emit 0xE2
        _emit 0xFF
        push 0x40c00000
        lea eax, [esp + 0x10]
        push eax
        lea ecx, [esp + 0x14]
        _emit 0xE8          /* call 0x0040ca40 */
        _emit 0x95
        _emit 0xCD
        _emit 0xE2
        _emit 0xFF
        mov ecx, esi
        _emit 0xE8          /* call 0x005df620 */
        _emit 0x6E
        _emit 0xF9
        _emit 0xFF
        _emit 0xFF
        mov ecx, dword ptr [eax + 0xd8]
        lea edx, [esp + 0x30]
        add ecx, 0x80
        push edx
        _emit 0xE8          /* call 0x004c41f0 */
        _emit 0x28
        _emit 0x45
        _emit 0xEE
        _emit 0xFF
        mov ecx, dword ptr [esp + 0x34]
        mov eax, dword ptr [esp + 0x30]
        mov edx, dword ptr [esp + 0x38]
        mov dword ptr [esp + 0x28], ecx
        mov ecx, esi
        mov dword ptr [esp + 0x24], eax
        mov dword ptr [esp + 0x2c], edx
        _emit 0xE8          /* call 0x005e1180 */
        _emit 0x99
        _emit 0x14
        _emit 0x00
        _emit 0x00
        mov dword ptr [esp + 0x8], eax
        fild dword ptr [esp + 0x8]
        lea ecx, [esp + 0x24]
        _emit 0xD8          /* fadd dword ptr [0x0076d978] — FPU mem [imm32] */
        _emit 0x05
        _emit 0x78
        _emit 0xD9
        _emit 0x76
        _emit 0x00
        fstp dword ptr [esp + 0x8]
        mov eax, dword ptr [esp + 0x8]
        push eax
        push ecx
        lea ecx, [esp + 0x2c]
        _emit 0xE8          /* call 0x0040ca40 */
        _emit 0x34
        _emit 0xCD
        _emit 0xE2
        _emit 0xFF
        lea edx, [esp + 0x24]
        push edx
        lea eax, [esp + 0x10]
        push eax
        lea ecx, [esp + 0x14]
        _emit 0xE8          /* call 0x0040c9e0 */
        _emit 0xC1
        _emit 0xCC
        _emit 0xE2
        _emit 0xFF
        mov ecx, dword ptr [esp + 0x48]
        mov edx, dword ptr [esp + 0x58]
        mov eax, dword ptr [esp + 0x68]
        mov dword ptr [esp + 0x18], ecx
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x1c], edx
        push ecx
        lea edx, [esp + 0x10]
        push edx
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x28], eax
        _emit 0xE8          /* call 0x0040c9e0 */
        _emit 0x96
        _emit 0xCC
        _emit 0xE2
        _emit 0xFF
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x14]
        mov dword ptr [esp + 0x48], eax
        mov dword ptr [esp + 0x58], ecx
        mov dword ptr [esp + 0x68], edx
Ld62:
        lea eax, [esp + 0x3c]
        push eax
        mov ecx, esi
        _emit 0xE8          /* call 0x004daa20 */
        _emit 0xB2
        _emit 0xAC
        _emit 0xEF
        _emit 0xFF
        pop edi
        pop esi
        add esp, 0xac
        ret
    }
}
