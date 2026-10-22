/*
 * FUN_00723A30 (63 B) — Bitmap flag lookup helper.
 *
 * __stdcall, RET 4 (1 param). Indexes two byte-bitmap tables
 * (0x87ddc4, 0x87dda4) by param_1>>3, testing bit (param_1&7).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_87ddc4[];
extern unsigned char g_87dda4[];

__declspec(naked) int __stdcall FUN_00723A30(int param_1)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        mov     eax, ecx
        and     ecx, 0x7
        mov     edx, 0x1
        shl     edx, cl
        sar     eax, 0x3
        test    byte ptr [eax + g_87ddc4], dl
        jz      l_else
        test    byte ptr [eax + g_87dda4], dl
        mov     eax, 0x0
        setnz   al
        inc     eax
        ret     4
l_else:
        mov     al, byte ptr [eax + g_87dda4]
        and     al, dl
        neg     al
        sbb     eax, eax
        and     eax, 0x3
        ret     4
    }
}
