/*
 * FUN_004eb1f0 (53 B) — __thiscall MLR/Adept object constructor.
 * Calls FUN_004f21b0(this, p1, p2, p3), sets vtable ptr 0x774644,
 * stores p4 into a member at [obj+0x18]->[+0x50]+0x88.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004f21b0(void);
extern int g_00774644;

__declspec(naked) void FUN_004eb1f0(void)
{
    __asm {
        mov     eax, dword ptr [esp+0xc]
        mov     edx, dword ptr [esp+0x4]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp+0xc]
        push    eax
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_004f21b0
        mov     eax, dword ptr [esi+0x18]
        mov     ecx, dword ptr [eax+0x50]
        mov     edx, dword ptr [esp+0x14]
        mov     dword ptr [esi], offset g_00774644
        mov     eax, esi
        mov     dword ptr [ecx+0x88], edx
        pop     esi
        ret     0x10
    }
}
