/*
 * FUN_005cbc50 (66 B) — __thiscall (ECX = this). Releases a reference-counted
 * object stored at *this. If low bit set (owned), calls virtual method with
 * arg 3 (if bit 2 set) or arg 1, then clears *this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005cbc50(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi]
        mov     eax, ecx
        and     eax, 0x1
        cmp     al, 0x1
        jnz     L_8A
        mov     edx, ecx
        and     edx, 0x2
        cmp     dl, 0x2
        jnz     L_7D
        and     ecx, 0xfffffffc
        mov     dword ptr [esi], ecx
        jz      L_8A
        mov     eax, dword ptr [ecx]
        push    0x3
        call    dword ptr [eax]
        mov     dword ptr [esi], 0x0
        pop     esi
        ret
L_7D:
        and     ecx, 0xfffffffc
        mov     dword ptr [esi], ecx
        jz      L_8A
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
L_8A:
        mov     dword ptr [esi], 0x0
        pop     esi
        ret
    }
}
