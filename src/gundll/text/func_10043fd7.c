/*
 * FUN_10043fd7 (34 B) — __cdecl.
 * LeaveCriticalSection on a per-slot critical section:
 *   &g_10076aa0[param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24
 * (slot stride 0x24, base 0xc). IAT call to LeaveCriticalSection.
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10076aa0[];
extern void *g_10049064;

__declspec(naked) void FUN_10043fd7(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, eax
        and     eax, 0x1f
        sar     ecx, 0x5
        lea     eax, [eax + eax*8]
        mov     ecx, dword ptr [ecx*4 + g_10076aa0]
        lea     eax, [ecx + eax*4 + 0xc]
        push    eax
        call    dword ptr [g_10049064]
        ret
    }
}
