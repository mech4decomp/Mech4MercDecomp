/*
 * FUN_004c43f0 (129 B) — MLR GroupElement __thiscall constructor
 * (variant). Calls FUN_004c6430, zeroes fields, fills object fields
 * from lookup tables indexed by bits of field 0x18.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b3920;
extern int g_007b3b28;
extern int g_007b3b2c;
extern int g_007b3b30;
extern int g_007b3a20;

extern void __cdecl FUN_004c6430(void);

__declspec(naked) void FUN_004c43f0(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_004c6430
        xor     eax, eax
        mov     dword ptr [esi+0x144], eax
        mov     dword ptr [esi+0x148], eax
        mov     eax, dword ptr [esi+0x18]
        mov     ecx, eax
        shr     ecx, 0x2
        and     ecx, 0x3f
        mov     edx, dword ptr [ecx*4 + g_007b3920]
        mov     ecx, eax
        shr     ecx, 0x5
        and     ecx, 0x1f
        lea     ecx, [ecx + ecx*2]
        mov     dword ptr [esi+0x1c], edx
        shl     ecx, 0x2
        mov     edx, dword ptr [ecx + g_007b3b28]
        mov     dword ptr [esi+0x130], edx
        mov     edx, dword ptr [ecx + g_007b3b2c]
        mov     ecx, dword ptr [ecx + g_007b3b30]
        shr     eax, 0xa
        and     eax, 0x1
        mov     dword ptr [esi+0x134], edx
        mov     edx, dword ptr [eax*4 + g_007b3a20]
        mov     dword ptr [esi], 0x7716ec
        mov     dword ptr [esi+0x138], ecx
        mov     dword ptr [esi+0x13c], edx
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
