/*
 * FUN_0067f7f0 (58 B) — HUD lookup helper. Reads two globals, XORs them to
 * derive a table pointer, then copies a 64-bit entry out of a nested table.
 * 3 params (param_1 = out ptr, param_2 = index, param_3 = index).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;

__declspec(naked) void FUN_0067f7f0(void)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [esp+0xc]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx+0x90]
        mov     edx, dword ptr [eax+ecx*4+0x1c]
        mov     ecx, dword ptr [esp+0x8]
        mov     eax, dword ptr [esp+0x4]
        push    esi
        mov     esi, dword ptr [edx+ecx*8]
        mov     ecx, dword ptr [edx+ecx*8+0x4]
        mov     dword ptr [eax], esi
        mov     dword ptr [eax+0x4], ecx
        pop     esi
        ret
    }
}
