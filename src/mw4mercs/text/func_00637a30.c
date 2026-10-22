/*
 * FUN_00637A30 (132 B) — __thiscall (ECX = this), RET 0xC (3 stack params).
 *
 * Looks up a cached object at this+0x4EC; if absent or its name (this+0x14)
 * doesn't match param_1, allocates via FUN_0040ecc0 and caches it. Then
 * initializes the slot at this+param_4*4 via FUN_00411a10 / FUN_0041f270.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_0076b2ac;   /* IAT: _stricmp */
extern void __cdecl FUN_0040ecc0(void);
extern void __cdecl FUN_00411a10(void);
extern void __cdecl FUN_0041f270(void);

__declspec(naked) void __stdcall FUN_00637a30(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 0x4ec]
        test    edi, edi
        jz      L_637a5b
        mov     eax, dword ptr [edi + 0x14]
        mov     ecx, dword ptr [ebx]
        push    eax
        push    ecx
        call    dword ptr [DAT_0076b2ac]
        add     esp, 0x8
        test    eax, eax
        jnz     L_637a5b
        mov     eax, edi
        jmp     L_637a87
L_637a5b:
        mov     edx, dword ptr [ebx]
        mov     ecx, dword ptr [esi + 0x4e8]
        push    edx
        and     ecx, 0xfffffffc
        call    FUN_0040ecc0
        test    eax, eax
        jnz     L_637a81
        mov     eax, dword ptr [esp + 0x18]
        pop     edi
        mov     dword ptr [esi + eax*4], 0x0
        pop     esi
        pop     ebx
        ret     0xc
L_637a81:
        mov     dword ptr [esi + 0x4ec], eax
L_637a87:
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [ecx]
        push    edx
        mov     ecx, eax
        call    FUN_00411a10
        test    eax, eax
        mov     ecx, dword ptr [esp + 0x18]
        lea     ecx, [esi + ecx*4]
        mov     dword ptr [ecx], 0x0
        jz      L_637aae
        push    ecx
        mov     ecx, eax
        call    FUN_0041f270
L_637aae:
        pop     edi
        pop     esi
        pop     ebx
        ret     0xc
    }
}
