/*
 * FUN_0069cdc0 (90 B) — __thiscall: clears a vector of 8-byte elements
 * (this+0x50..+0x54), releasing each non-null element via virtual call,
 * then compacts the array back to the start.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0069cdc0(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0x50]
        mov     ebx, dword ptr [edi + 0x54]
        cmp     esi, ebx
        jz      LCEF
LCF:
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        jz      LDB
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
LDB:
        mov     dword ptr [esi], 0x0
        mov     dword ptr [esi + 0x4], 0x0
        add     esi, 0x8
        cmp     esi, ebx
        jnz     LCF
LCEF:
        mov     eax, dword ptr [edi + 0x54]
        mov     ecx, dword ptr [edi + 0x50]
        mov     edx, eax
        sub     edx, eax
        sar     edx, 0x3
        test    edx, edx
        jle     LCE13
LCE00:
        mov     esi, dword ptr [eax]
        mov     dword ptr [ecx], esi
        mov     esi, dword ptr [eax + 0x4]
        mov     dword ptr [ecx + 0x4], esi
        add     eax, 0x8
        add     ecx, 0x8
        dec     edx
        jnz     LCE00
LCE13:
        mov     dword ptr [edi + 0x54], ecx
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
