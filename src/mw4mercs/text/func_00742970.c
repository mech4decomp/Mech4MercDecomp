/*
 * FUN_00742970 (101 B) — Bit-field repacking helper.
 *
 * Takes a 16-bit value and repacks its bit fields using shift/and
 * amounts and masks read from globals 0x008abd28..0x008abd48.
 *
 * __stdcall (RET 4), one dword param, returns unsigned int.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_008abd40;
extern unsigned char g_008abd34;
extern unsigned char g_008abd28;
extern unsigned int g_008abd44;
extern unsigned int g_008abd48;
extern unsigned int g_008abd38;
extern unsigned int g_008abd3c;
extern unsigned int g_008abd2c;
extern unsigned int g_008abd30;

__declspec(naked) unsigned int __stdcall FUN_00742970(unsigned int param_1)
{
    __asm {
        mov     edx, dword ptr [esp + 4]
        mov     cl, byte ptr [g_008abd40]
        and     edx, 0xffff
        mov     eax, edx
        shr     eax, cl
        mov     ecx, dword ptr [g_008abd44]
        push    esi
        mov     esi, edx
        and     eax, ecx
        mov     ecx, dword ptr [g_008abd48]
        shl     eax, cl
        mov     cl, byte ptr [g_008abd34]
        shr     esi, cl
        mov     ecx, dword ptr [g_008abd38]
        shl     eax, 8
        and     esi, ecx
        mov     ecx, dword ptr [g_008abd3c]
        shl     esi, cl
        mov     cl, byte ptr [g_008abd28]
        shr     edx, cl
        mov     ecx, dword ptr [g_008abd2c]
        or      eax, esi
        shl     eax, 8
        and     edx, ecx
        mov     ecx, dword ptr [g_008abd30]
        shl     edx, cl
        pop     esi
        or      eax, edx
        ret     4
    }
}
