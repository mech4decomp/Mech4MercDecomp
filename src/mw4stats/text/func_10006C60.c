/*
 * MW4Stats.dll - FUN_10006c60 (0x10006C60, 27 B, __fastcall)
 * Free *this and null it. this in ECX.
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void *g_100210ec; /* IAT: free */

__declspec(naked) void FUN_10006c60(void)
{
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        test eax, eax
        jz L_c73
        push eax
        call dword ptr [g_100210ec]
        add esp, 0x4
    L_c73:
        mov dword ptr [esi], 0x0
        pop esi
        ret
    }
}
