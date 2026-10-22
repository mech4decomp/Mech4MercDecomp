/*
 * FUN_004E8C50 (97 B) — Adept Tile: collect visible tile entities (__thiscall).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_7b220c;   /* DAT_007b220c */

__declspec(naked) void __fastcall FUN_004e8c50(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 0x170]
        xor     ebx, ebx
        xor     ebp, ebp
        mov     edx, 0x18
    L8C63:
        cmp     edi, ebx
        jz      L8C97
        mov     eax, dword ptr [edi]
        cmp     eax, ebx
        mov     edi, dword ptr [edi + 4]
        jz      L8C97
        cmp     edx, 0x38
        jge     L8CA6
        mov     esi, dword ptr [eax + 0x10]
        fld     dword ptr [esi + 8]
        fcomp   dword ptr [g_7b220c]
        __emit 0xDF   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L8C63
        mov     eax, dword ptr [ecx + 0x140]
        mov     dword ptr [eax + edx], esi
        inc     ebp
        add     edx, 4
        jmp     L8C63
    L8C97:
        cmp     ebp, 8
        jge     L8CA6
        mov     edx, dword ptr [ecx + 0x140]
        mov     dword ptr [edx + ebp*4 + 0x18], ebx
    L8CA6:
        pop     edi
        pop     esi
        pop     ebp
        mov     byte ptr [ecx + 0x178], bl
        pop     ebx
        ret
    }
}
