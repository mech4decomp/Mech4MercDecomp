/*
 * FUN_00696ab0 (60 B) — HUD element lookup helper. XORs two globals to
 * derive an object pointer, validates a magic field (0x85739531) at
 * +0x18, then walks +0x178 / +0x384 to return a nested pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;

__declspec(naked) void FUN_00696ab0(void)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx+18h]
        xor     edx, 85739531h
        lea     eax, [ecx+18h]
        jnz     l1
        xor     eax, eax
        ret
l1:
        mov     eax, dword ptr [eax]
        xor     eax, 85739531h
        jnz     l2
        xor     eax, eax
        ret
l2:
        mov     eax, dword ptr [eax+178h]
        test    eax, eax
        jnz     l3
        ret
l3:
        mov     eax, dword ptr [eax+384h]
        ret
    }
}
