/*
 * FUN_004cdf50 (78 B) — MLR subsystem: __thiscall/__stdcall (ret 4)
 * lookup helper. Scans the per-type table [this+0x1818] for an entry
 * whose [obj+0x2c] matches the argument; returns the matching entry
 * (or 0). Uses ESP-relative locals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004cdf50(void)
{
    __asm {
        push    ecx
        push    ebx
        push    esi
        mov     esi, dword ptr [esp+0x10]
        mov     bl, 1
        mov     byte ptr [esp+8], bl
L_4cdf5d:
        mov     edx, dword ptr [esp+8]
        mov     eax, edx
        and     eax, 0xff
        mov     eax, dword ptr [ecx+eax*4+0x1818]
        test    eax, eax
        jz      L_4cdf78
        cmp     dword ptr [eax+0x2c], esi
        jz      L_4cdf8b
L_4cdf78:
        inc     bl
        cmp     bl, 0xff
        mov     byte ptr [esp+8], bl
        jc      L_4cdf5d
        pop     esi
        xor     eax, eax
        pop     ebx
        pop     ecx
        ret     4
L_4cdf8b:
        and     edx, 0xff
        mov     eax, dword ptr [ecx+edx*4+0x1818]
        pop     esi
        pop     ebx
        pop     ecx
        ret     4
    }
}
