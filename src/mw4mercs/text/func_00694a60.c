/*
 * FUN_00694a60 (99 B) — __thiscall (ECX = this), RET 4 (one byte param).
 *
 * If (param & 2): destroys an array of 0x50-byte elements (count from
 * [this-4]) via FUN_0040de20, then optionally frees the block via
 * FUN_004084e0. Else: destroys a single element and optionally frees.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040de20(void *param);
extern void __cdecl FUN_004084e0(void *param);

__declspec(naked) void FUN_00694a60(void)
{
    __asm {
        push    ebx
        mov     bl, byte ptr [esp + 0x8]
        test    bl, 0x2
        push    edi
        mov     edi, ecx
        jz      L_else
        mov     eax, dword ptr [edi - 0x4]
        push    ebp
        lea     ebp, [edi - 0x4]
        push    esi
        lea     esi, [eax + eax*4]
        shl     esi, 0x4
        add     esi, edi
        dec     eax
        js      L_afterloop
        lea     edi, [eax + 0x1]
L_loop2:
        sub     esi, 0x50
        mov     ecx, esi
        call    FUN_0040de20
        dec     edi
        jnz     L_loop2
L_afterloop:
        test    bl, 0x1
        jz      L_skipfree
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
L_skipfree:
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     edi
        pop     ebx
        ret     0x4
L_else:
        mov     ecx, edi
        call    FUN_0040de20
        test    bl, 0x1
        jz      L_skipfree2
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_skipfree2:
        mov     eax, edi
        pop     edi
        pop     ebx
        ret     0x4
    }
}
