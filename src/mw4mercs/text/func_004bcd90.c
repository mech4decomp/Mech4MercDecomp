/*
 * FUN_004bcd90 (152 B) — MLR object constructor (__thiscall, RET 0x10).
 * Calls FUN_004bede0, sets up vtable 0x7713b8 and several table-derived
 * fields, then invokes a virtual method (vtable+0x20) on param_2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7b35e8;   /* dword table indexed by [ecx*4] */
extern int g_7b3b28;   /* dword table indexed by [ecx]   */
extern int g_7b3b2c;
extern int g_7b3b30;
extern int g_7b36e8;   /* dword table indexed by [eax*4] */
extern void FUN_004bede0(void);

__declspec(naked) void FUN_004bcd90(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x4]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        push    1
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        push    edi
        push    edx
        mov     ecx, esi
        call    FUN_004bede0
        mov     eax, dword ptr [esi + 0x18]
        mov     ecx, eax
        shr     ecx, 2
        and     ecx, 0x3f
        mov     edx, dword ptr [ecx*4 + g_7b35e8]
        mov     ecx, eax
        shr     ecx, 5
        and     ecx, 0x1f
        lea     ecx, [ecx + ecx*2]
        shl     ecx, 2
        mov     dword ptr [esi + 0x1c], edx
        mov     edx, dword ptr [ecx + g_7b3b28]
        mov     dword ptr [esi + 0x130], edx
        mov     edx, dword ptr [ecx + g_7b3b2c]
        mov     ecx, dword ptr [ecx + g_7b3b30]
        shr     eax, 0xa
        mov     dword ptr [esi + 0x138], ecx
        and     eax, 1
        push    2
        lea     ecx, [esi + 0x150]
        mov     dword ptr [esi + 0x134], edx
        mov     edx, dword ptr [eax*4 + g_7b36e8]
        mov     eax, dword ptr [edi]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esi], 0x7713b8
        mov     dword ptr [esi + 0x13c], edx
        call    dword ptr [eax + 0x20]
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
