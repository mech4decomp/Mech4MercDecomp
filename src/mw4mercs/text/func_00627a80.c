/*
 * FUN_00627a80 (76 B) — __fastcall (ECX = this).
 *
 * Sets [this+0x16b]=1, calls a virtual method (vtable+0x10) on the object
 * at [this+0x14c], then walks an XOR-obfuscated linked list rooted at
 * (g_007dab44 ^ g_007dab40)+0x2c, clearing/setting two flags.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;

__declspec(naked) void FUN_00627a80(void)
{
    __asm {
        mov     byte ptr [ecx + 0x16b], 0x1
        mov     ecx, dword ptr [ecx + 0x14c]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x10]
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx + 0x2c]
        xor     ecx, 0x85739531
        lea     eax, [edx + 0x2c]
        jz      L_ret
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [eax]
        xor     edx, 0x85739531
        xor     eax, 0x85739531
        mov     byte ptr [edx + 0x588], 0x0
        mov     byte ptr [eax + 0x585], 0x1
    L_ret:
        ret
    }
}
