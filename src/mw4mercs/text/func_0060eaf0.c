/*
 * FUN_0060EAF0 (105 B) — __thiscall, RET 8.
 *
 * Reads this+4; if non-null, calls virtual method at +0x78 vtable+4,
 * then walks this+0x3E4 and calls its +0x78 vtable+4, comparing
 * result+0x30 to 0x8A. Writes results into param_1's fields. Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_0060eaf0(void *this, int param_1)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [ecx + 0x4]
        test    esi, esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     ebx, dword ptr [edi + 0x4]
        mov     dword ptr [ebx], 0x0
        jz      l_eb4e
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 0x4]
        mov     esi, dword ptr [esi + 0x3e4]
        mov     edx, dword ptr [edi + 0x8]
        xor     ecx, ecx
        test    esi, esi
        mov     cl, byte ptr [eax + 0x668]
        mov     eax, dword ptr [edi + 0xc]
        mov     dword ptr [ebx], 0x0
        mov     dword ptr [eax], 0x3f800000
        mov     dword ptr [edx], ecx
        jz      l_eb4e
        mov     edx, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [edx + 0x4]
        cmp     dword ptr [eax + 0x30], 0x8a
        jnz     l_eb4e
        mov     dword ptr [ebx], 0x1
    l_eb4e:
        pop     edi
        pop     esi
        mov     eax, 0x1
        pop     ebx
        ret     0x8
    }
}
