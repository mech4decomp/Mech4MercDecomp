/*
 * MW4Stats.dll - FUN_10006c40 (0x10006C40, 27 B, __fastcall)
 * Returns this+0x4 -> +0x1020 + 0x10 if valid. this in ECX.
 * Transcribed from MW4Stats.dll reference bytes.
 */
__declspec(naked) void FUN_10006c40(void)
{
    __asm {
        mov eax, dword ptr [ecx+0x4]
        mov eax, dword ptr [eax+0x1020]
        test eax, eax
        jz L_c58
        lea ecx, [eax+0x4]
        test ecx, ecx
        jz L_c58
        add eax, 0x10
        ret
    L_c58:
        xor eax, eax
        ret
    }
}
