/*
 * FUN_004da180 (103 B) — __thiscall: allocates a 0x44-byte object via
 * vtable dispatch, initializes its fields, and copies a 0xc-dword block.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004da180(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    0x44
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        test    eax, eax
        jz      L_a1e0
        mov     cl, byte ptr [edi + 0x14]
        mov     esi, dword ptr [edi + 0xd8]
        mov     dx, word ptr [edi + 0x16]
        mov     dword ptr [eax], 0x44
        mov     byte ptr [eax + 0x10], cl
        add     esi, 0x80
        lea     edi, [eax + 0x14]
        mov     ecx, 0xc
        mov     dword ptr [eax + 0x4], 0x3
        mov     dword ptr [eax + 0x8], 0x2
        mov     dword ptr [eax + 0xc], 0x0
        mov     word ptr [eax + 0x12], dx
        rep movsd
        pop     edi
        pop     esi
        ret     0x4
L_a1e0:
        pop     edi
        xor     eax, eax
        pop     esi
        ret     0x4
    }
}
