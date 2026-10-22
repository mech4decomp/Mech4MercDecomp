/*
 * func_006CB090 - copy 6 dwords from [esp+8] to global buffer 0x82f368 (stdcall, ret 4)
 */

extern char g_82f368;

__declspec(naked) void func_006CB090()
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        push    edi
        mov     ecx, 6
        mov     edi, offset g_82f368
        rep     movsd
        pop     edi
        pop     esi
        ret     4
    }
}
