/*
 * FUN_004bce50 (124 B) — MLR object constructor variant (__thiscall, RET 0x4).
 * Calls FUN_004bf010, sets up vtable 0x7713b8 and table-derived fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7b35e8;
extern int g_7b3b28;
extern int g_7b3b2c;
extern int g_7b3b30;
extern int g_7b36e8;
extern void FUN_004bf010(void);

__declspec(naked) void FUN_004bce50(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_004bf010
        mov     eax, dword ptr [esi + 0x18]
        mov     ecx, eax
        shr     ecx, 2
        and     ecx, 0x3f
        mov     edx, dword ptr [ecx*4 + g_7b35e8]
        mov     ecx, eax
        shr     ecx, 5
        and     ecx, 0x1f
        lea     ecx, [ecx + ecx*2]
        mov     dword ptr [esi + 0x1c], edx
        shl     ecx, 2
        mov     edx, dword ptr [ecx + g_7b3b28]
        mov     dword ptr [esi + 0x130], edx
        mov     edx, dword ptr [ecx + g_7b3b2c]
        mov     ecx, dword ptr [ecx + g_7b3b30]
        shr     eax, 0xa
        and     eax, 1
        mov     dword ptr [esi + 0x134], edx
        mov     edx, dword ptr [eax*4 + g_7b36e8]
        mov     dword ptr [esi], 0x7713b8
        mov     dword ptr [esi + 0x138], ecx
        mov     dword ptr [esi + 0x13c], edx
        mov     word ptr [esi + 0x150], 0
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
