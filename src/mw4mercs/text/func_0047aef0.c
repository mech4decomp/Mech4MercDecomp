/*
 * FUN_0047aef0 (41 B) — MLR PMesh buffer fill (__thiscall).
 * Fills a byte buffer (count from virtual call) with 0x01 via rep stosd/stosb.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da5e8;

__declspec(naked) void FUN_0047aef0(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        push    edi
        call    dword ptr [eax+0x8]
        test    eax, eax
        mov     ecx, dword ptr [g_007da5e8]
        mov     edi, dword ptr [ecx]
        jle     L_47af17
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 0x2
        mov     eax, 0x1010101
        rep stosd
        mov     ecx, edx
        and     ecx, 0x3
        rep stosb
L_47af17:
        pop     edi
        ret
    }
}
