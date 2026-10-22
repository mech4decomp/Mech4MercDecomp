/*
 * FUN_004bf010 (136 B) — MLR object constructor (__thiscall, RET 0x4).
 * Calls FUN_004c6430(param_1), zeroes [esi+0x144]/[esi+0x148]/[esi+0x14c],
 * sets up vtable 0x771454 and lookup-table-derived fields from [esi+0x18].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004c6430(void);

extern int g_007b36f0[];
extern int g_007b3b28[];
extern int g_007b37f0[];

__declspec(naked) void FUN_004bf010(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_004c6430
        xor     eax, eax
        mov     dword ptr [esi + 0x144], eax
        mov     dword ptr [esi + 0x148], eax
        mov     word ptr [esi + 0x14c], ax
        mov     eax, dword ptr [esi + 0x18]
        mov     ecx, eax
        shr     ecx, 2
        and     ecx, 0x3f
        mov     edx, dword ptr [g_007b36f0 + ecx*4]
        mov     ecx, eax
        shr     ecx, 5
        and     ecx, 0x1f
        lea     ecx, [ecx + ecx*2]
        mov     dword ptr [esi + 0x1c], edx
        shl     ecx, 2
        mov     edx, dword ptr [g_007b3b28 + ecx]
        mov     dword ptr [esi + 0x130], edx
        mov     edx, dword ptr [g_007b3b28 + ecx + 4]
        mov     ecx, dword ptr [g_007b3b28 + ecx + 8]
        shr     eax, 0xa
        and     eax, 1
        mov     dword ptr [esi + 0x134], edx
        mov     edx, dword ptr [g_007b37f0 + eax*4]
        mov     dword ptr [esi], 0x771454
        mov     dword ptr [esi + 0x138], ecx
        mov     dword ptr [esi + 0x13c], edx
        mov     eax, esi
        pop     esi
        ret     4
    }
}
