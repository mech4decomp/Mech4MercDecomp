/*
 * MW4Stats.dll - MW4StatsDll_FreeTicket (0x100030B0, 29 B, __stdcall)
 * Frees *param_1 and nulls it; returns 0.
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void *g_100210ec; /* IAT: free */

__declspec(naked) void MW4StatsDll_FreeTicket(void)
{
    __asm {
        push esi
        mov esi, dword ptr [esp+0x8]
        mov eax, dword ptr [esi]
        push eax
        call dword ptr [g_100210ec]
        add esp, 0x4
        mov dword ptr [esi], 0x0
        xor eax, eax
        pop esi
        ret 0x4
    }
}
