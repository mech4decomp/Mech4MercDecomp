/*
 * FUN_00743ea0 (50 B) — __stdcall (RET 0x10, 4 args). If (arg[0] & 0x80000),
 * copies 0x3b dwords from arg[0] to g_8abd60 and sets g_8abd58 = 1.
 * Returns 1 either way.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_8abd60[];
extern unsigned char g_8abd58;

__declspec(naked) int __stdcall FUN_00743ea0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        test    dword ptr [esi], 0x80000
        jz      L_c9
        push    edi
        mov     ecx, 0x3b
        mov     edi, offset g_8abd60
        rep     movsd
        mov     eax, 0x1
        pop     edi
        mov     byte ptr [g_8abd58], al
        pop     esi
        ret     0x10
    L_c9:
        mov     eax, 0x1
        pop     esi
        ret     0x10
    }
}
