/*
 * FUN_00514760 (85 B) — __cdecl (3 stack args, RET 0xC). Computes a pointer
 * via globals g_7DAB44/g_7DAB40 and a fixed XOR, then scans a 0xC0C-stride
 * table for a non-empty entry; sets a byte flag on [esp] accordingly.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;
extern int g_7dab40;

__declspec(naked) void FUN_00514760(void)
{
    __asm {
        push    ecx
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [edx + 0x14]
        xor     eax, eax
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x1814]
        __emit 0xC6 /* mov byte ptr [esp],0: MSVC6 drops 00 disp byte for [esp] */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        __emit 0x00
loc_514785:
        cmp     byte ptr [ecx], 0
        jne     loc_5147a3
        inc     eax
        add     ecx, 0xc0c
        cmp     eax, 0x12
        jl      loc_514785
        __emit 0x8B /* mov eax,[esp]: MSVC6 drops 00 disp byte for [esp] */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        and     eax, 0xff
        pop     ecx
        ret     0xc
loc_5147a3:
        __emit 0xC6 /* mov byte ptr [esp],1: MSVC6 drops 00 disp byte for [esp] */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        __emit 0x01
        __emit 0x8B /* mov eax,[esp]: MSVC6 drops 00 disp byte for [esp] */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        and     eax, 0xff
        pop     ecx
        ret     0xc
    }
}
