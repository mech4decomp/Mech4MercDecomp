/*
 * FUN_00446de0 (63 B) — MLR object constructor (__thiscall, RET 0x8):
 * sets up vtable 0x76e808, calls FUN_00486e50, stores arg2 at +0x9c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b9890;
extern int g_76e808;

extern void __cdecl FUN_00486e50(void);

__declspec(naked) void FUN_00446de0(void)
{
    __asm {
        mov     eax, dword ptr [g_007b9890]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x8]
        lea     edx, [ecx + ecx*0x1]
        push    eax
        push    edx
        mov     ecx, esi
        call    FUN_00486e50
        mov     eax, dword ptr [esp + 0xc]
        mov     dword ptr [esi + 0x9c], eax
        mov     dword ptr [esi], offset g_76e808
        mov     dword ptr [esi + 0xa0], 0
        mov     dword ptr [esi + 0x20], 4
        mov     eax, esi
        pop     esi
        ret     0x8
    }
}
