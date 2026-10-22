/*
 * FUN_10016f30 (195 B) - __fastcall constructor (ECX = this).
 * SEH-framed constructor that installs vtables, zeroes members, calls
 * FUN_100065b0 on this+0x20, and sets up two 0x400-capacity arrays.
 *
 * __fastcall (ECX = this), RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_100065b0(void);  /* sub-object constructor @ 0x100065b0 */

__declspec(naked) void __cdecl FUN_10016f30(void)
{
    __asm {
        push    -1
        push    0x1001ffa8
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        push    edi
        mov     esi, ecx
        xor     edi, edi
        mov     dword ptr [esp + 8], esi
        mov     dword ptr [esi], 0x10021688
        mov     dword ptr [esi + 4], edi
        mov     dword ptr [esi + 0x10], edi
        mov     dword ptr [esi + 0x14], edi
        mov     dword ptr [esi + 0x18], edi
        lea     ecx, [esi + 0x20]
        mov     dword ptr [esp + 0x14], edi
        call    FUN_100065b0

        mov     ecx, dword ptr [esp + 0xc]
        mov     eax, 0x400
        mov     dword ptr [esi + 0x3c], edi
        mov     dword ptr [esi + 0x40], edi
        mov     dword ptr [esi + 0x44], edi
        mov     dword ptr [esi + 0x48], edi
        mov     dword ptr [esi + 0x4c], edi
        mov     dword ptr [esi + 0x50], eax
        mov     dword ptr [esi + 0xd4], edi
        mov     dword ptr [esi + 0xd8], edi
        mov     dword ptr [esi + 0xdc], edi
        mov     dword ptr [esi + 0xe0], edi
        mov     dword ptr [esi + 0xe4], edi
        mov     dword ptr [esi + 0xe8], eax
        mov     dword ptr [esi + 4], edi
        mov     dword ptr [esi + 0x10], edi
        mov     dword ptr [esi + 0x14], edi
        mov     dword ptr [esi + 0x18], edi
        mov     dword ptr [esi + 0x34], edi
        mov     dword ptr [esi + 0x38], edi
        mov     dword ptr [esi + 8], edi
        mov     dword ptr [esi], 0x100218c0
        mov     dword ptr [esi + 0x1c], 0x100218a0
        mov     dword ptr [esi + 0x28], 0x8
        mov     dword ptr [esi + 0x2c], 0x10026814
        mov     dword ptr [esi + 0x30], 0x10026808
        mov     eax, esi
        pop     edi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
