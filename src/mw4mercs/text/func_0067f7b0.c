/*
 * FUN_0067f7b0 (51 B) - __cdecl. Indexes a global table using three stack
 * params: reads *g_007dab44, xors with g_007dab40, xors with 0x85739531,
 * derefs +0x90, then indexes [ecx+param_3*4+0x10][param_1*4][param_2*4]
 * and xors the result with *ecx.
 *
 * __cdecl, RET 0 (three stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_007dab44;
extern unsigned int g_007dab40;

__declspec(naked) unsigned int __stdcall FUN_0067f7b0(void)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [esp + 0xc]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x90]
        mov     eax, dword ptr [ecx + edx*4 + 0x10]
        mov     edx, dword ptr [esp + 0x4]
        mov     eax, dword ptr [eax + edx*4]
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [eax + edx*4]
        xor     eax, dword ptr [ecx]
        ret
    }
}
