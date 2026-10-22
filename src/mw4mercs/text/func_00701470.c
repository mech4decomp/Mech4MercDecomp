/*
 * FUN_00701470 (71 B) — __cdecl, no params.
 *
 * If g_00856870 is non-NULL and its +0xc byte is non-zero, calls
 * vtable slot +0x10 on the object at g_00856870+4 with
 * (g_008589cc, 0x8fc). If result == 0x8000000a, sets g_00856864=1 and
 * returns 0; otherwise sets g_00856864=4 and returns -1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00856870;
extern int g_008589cc;
extern int g_00856864;

__declspec(naked) int FUN_00701470(void)
{
    __asm {
        mov     eax, dword ptr [g_00856870]
        test    eax, eax
        jz      short loc_7014a6
        mov     cl, byte ptr [eax + 0xc]
        test    cl, cl
        jz      short loc_7014a6
        mov     edx, dword ptr [g_008589cc]
        mov     eax, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [eax]
        push    0x8fc
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        cmp     eax, 0x8000000a
        jz      short loc_7014aa
        mov     dword ptr [g_00856864], 4
loc_7014a6:
        or      eax, 0xffffffff
        ret
loc_7014aa:
        mov     dword ptr [g_00856864], 1
        xor     eax, eax
        ret
    }
}
