/*
 * FUN_00637e20 (121 B) — __fastcall (ECX = this), no stack params.
 *
 * Frees a tagged pointer stored at this. If low bit set and bit 1 set,
 * it's an array (count at ptr-4) — frees each element via FUN_0040de20
 * then the header via FUN_004084e0. If only low bit set, frees a single
 * object. Clears the pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040de20(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void __fastcall FUN_00637e20(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [edi]
        mov     eax, ecx
        and     eax, 0x1
        cmp     al, 0x1
        jnz     L_00637e90
        mov     edx, ecx
        and     edx, 0x2
        cmp     dl, 0x2
        jnz     L_00637e77
        and     ecx, 0xfffffffc
        mov     dword ptr [edi], ecx
        jz      L_00637e90
        mov     eax, dword ptr [ecx - 0x4]
        push    ebp
        lea     ebp, [ecx - 0x4]
        lea     esi, [eax + eax*0x4]
        shl     esi, 0x4
        add     esi, ecx
        dec     eax
        js      L_00637e64
        push    ebx
        lea     ebx, [eax + 0x1]
L_00637e56:
        sub     esi, 0x50
        mov     ecx, esi
        call    FUN_0040de20
        dec     ebx
        jnz     L_00637e56
        pop     ebx
L_00637e64:
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
        pop     ebp
        mov     dword ptr [edi], 0x0
        pop     edi
        pop     esi
        ret
L_00637e77:
        mov     esi, ecx
        and     esi, 0xfffffffc
        mov     dword ptr [edi], esi
        jz      L_00637e90
        mov     ecx, esi
        call    FUN_0040de20
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_00637e90:
        mov     dword ptr [edi], 0x0
        pop     edi
        pop     esi
        ret
    }
}
