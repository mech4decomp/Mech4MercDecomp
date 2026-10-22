/*
 * FUN_00627ad0 (98 B) — __fastcall (this in ECX).
 *
 * Virtual call through [ESI+0x14c]->vtable[0x14], then a global-pointer
 * XOR-obfuscated lookup. Sets [ESI+0x16b]=0, and conditionally copies
 * [ESI+0x64] into the obfuscated table.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_007dab44;
extern unsigned int g_007dab40;

__declspec(naked) void FUN_00627ad0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x14c]
        mov     eax, dword ptr [ecx]
        mov     byte ptr [esi + 0x16b], 0x0
        call    dword ptr [eax + 0x14]
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx + 0x2c]
        xor     ecx, 0x85739531
        lea     eax, [edx + 0x2c]
        jz      L_b30
        mov     edx, dword ptr [eax]
        mov     cl, byte ptr [esi + 0x64]
        xor     edx, 0x85739531
        cmp     cl, byte ptr [edx + 0x584]
        jz      L_b30
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [eax]
        xor     edx, 0x85739531
        xor     eax, 0x85739531
        mov     byte ptr [edx + 0x588], cl
        mov     byte ptr [eax + 0x585], 0x1
    L_b30:
        pop     esi
        ret
    }
}
