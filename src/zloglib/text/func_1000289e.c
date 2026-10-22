/*
 * ZlogLib.dll - FUN_1000289e (0x1000289E, 70 B, __cdecl)
 * Byte-swap read: assembles each source dword (little-endian) into a
 * big-endian dword in dst. Transcribed from ZlogLib.dll reference bytes.
 */

__declspec(naked) void FUN_1000289e(void)
{
    __asm {
        cmp dword ptr [esp + 0xc], 0x0
        jbe L2
        mov edx, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0x4]
        push esi
        push edi
        push -0x2
        pop esi
        lea eax, [edx + 0x2]
        sub esi, edx
L1:
        movzx edi, byte ptr [eax - 0x1]
        xor edx, edx
        mov dh, byte ptr [eax + 0x1]
        mov dl, byte ptr [eax]
        add eax, 0x4
        shl edx, 0x8
        or edx, edi
        movzx edi, byte ptr [eax - 0x6]
        shl edx, 0x8
        or edx, edi
        mov dword ptr [ecx], edx
        lea edx, [esi + eax]
        add ecx, 0x4
        cmp edx, dword ptr [esp + 0x14]
        jc L1
        pop edi
        pop esi
L2:
        ret
    }
}
