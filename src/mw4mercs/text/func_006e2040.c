/* FUN_006e2040 - 51 bytes, __thiscall, RET */
extern void *g_0076b108;
__declspec(naked) void FUN_006e2040(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     eax, [esi + 0x14]
        push    eax
        call    dword ptr [g_0076b108]
        xor     eax, eax
        mov     byte ptr [esi + 0x38], al
        mov     dword ptr [esi], eax
        mov     dword ptr [esi + 0x4], eax
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi + 0x40], eax
        mov     dword ptr [esi + 0x44], eax
        mov     dword ptr [esi + 0x48], eax
        mov     dword ptr [esi + 0x2c], eax
        mov     dword ptr [esi + 0x30], eax
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [esi + 0x34], eax
        mov     eax, esi
        pop     esi
        ret
    }
}
