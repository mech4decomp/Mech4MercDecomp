/*
 * FUN_004555e0 (93 B) — MLR material/render helper. __thiscall (ECX = this).
 * Stores 4 ints and computes 3 float scale factors (reciprocal + ratio).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;
extern float g_0076eb4c;

__declspec(naked) void FUN_004555e0(void)
{
    __asm {
        fld     dword ptr [g_0076d064]
        mov     eax, dword ptr [esp+4]
        fdiv    dword ptr [esp+0x14]
        mov     edx, dword ptr [esp+8]
        mov     dword ptr [ecx+0x94], eax
        mov     eax, dword ptr [esp+0xc]
        mov     dword ptr [ecx+0x98], edx
        mov     edx, dword ptr [esp+0x10]
        mov     dword ptr [ecx+0x9c], eax
        mov     dword ptr [ecx+0xa0], edx
        fst     dword ptr [ecx+0x88]
        fld     dword ptr [g_0076d064]
        fdiv    dword ptr [esp+0x18]
        fst     dword ptr [ecx+0x8c]
        fxch
        fsub    st(0), st(1)
        fdivr   dword ptr [g_0076eb4c]
        fstp    dword ptr [ecx+0x90]
        fstp    st(0)
        ret     0x18
    }
}
