/*
 * FUN_0072CFC0 (135 B) — __stdcall, RET 4 (one pointer param).
 *
 * If param_1 != NULL, copies 13 dwords from param_1 to a global array
 * at 0x882580, masks 8 of the fields with 0xffffff, then calls
 * FUN_0072cf50.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0072cf50(void);

extern unsigned int g_882580;
extern unsigned int g_882584;
extern unsigned int g_882598;
extern unsigned int g_88259c;
extern unsigned int g_8825a0;
extern unsigned int g_8825a4;
extern unsigned int g_8825a8;

__declspec(naked) void __stdcall FUN_0072CFC0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        test    esi, esi
        jz      L2
        push    edi
        mov     eax, 0xffffff
        mov     ecx, 0xd
        mov     edi, offset g_882580
        rep movsd
        mov     esi, dword ptr [g_882580]
        mov     edx, dword ptr [g_882584]
        mov     ecx, dword ptr [g_882598]
        mov     edi, dword ptr [g_88259c]
        and     esi, eax
        and     edx, eax
        and     ecx, eax
        mov     dword ptr [g_882580], esi
        mov     esi, dword ptr [g_8825a0]
        mov     dword ptr [g_882584], edx
        mov     edx, dword ptr [g_8825a4]
        mov     dword ptr [g_882598], ecx
        mov     ecx, dword ptr [g_8825a8]
        and     edi, eax
        and     esi, eax
        and     edx, eax
        and     ecx, eax
        mov     dword ptr [g_88259c], edi
        mov     dword ptr [g_8825a0], esi
        mov     dword ptr [g_8825a4], edx
        mov     dword ptr [g_8825a8], ecx
        call    FUN_0072cf50
        pop     edi
L2:
        pop     esi
        ret     4
    }
}
