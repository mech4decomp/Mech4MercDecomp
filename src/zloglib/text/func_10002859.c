/*
 * ZlogLib.dll - FUN_10002859 (0x10002859, 69 B, __cdecl)
 * Byte-swap copy: writes each source dword to dst as 4 little-endian bytes.
 * Transcribed from ZlogLib.dll reference bytes.
 */

__declspec(naked) void FUN_10002859(void)
{
    __asm {
        cmp dword ptr [esp + 0xc], 0x0
        jbe L2
        mov edx, dword ptr [esp + 0x4]
        mov ecx, dword ptr [esp + 0x8]
        push esi
        or esi, 0xffffffff
        lea eax, [edx + 0x1]
        sub esi, edx
L1:
        mov dl, byte ptr [ecx]
        mov byte ptr [eax - 0x1], dl
        mov edx, dword ptr [ecx]
        shr edx, 0x8
        mov byte ptr [eax], dl
        mov edx, dword ptr [ecx]
        shr edx, 0x10
        mov byte ptr [eax + 0x1], dl
        mov edx, dword ptr [ecx]
        shr edx, 0x18
        mov byte ptr [eax + 0x2], dl
        add eax, 0x4
        lea edx, [esi + eax]
        add ecx, 0x4
        cmp edx, dword ptr [esp + 0x10]
        jc L1
        pop esi
L2:
        ret
    }
}
