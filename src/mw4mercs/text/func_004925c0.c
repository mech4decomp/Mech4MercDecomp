/*
 * FUN_004925c0 (131 B) — __thiscall array/refcount teardown helper.
 * Decrements refcounts of an array of pointers (or a single pointer),
 * freeing elements that hit zero, and optionally frees the container.
 * The byte param (bit0 = free container, bit1 = array mode).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_004925c0(void)
{
    __asm {
        push    ebx
        mov     bl, byte ptr [esp + 0x8]
        test    bl, 0x2
        push    esi
        mov     esi, ecx
        jz      L_492615
        mov     eax, dword ptr [esi - 0x4]
        push    edi
        lea     edi, [esi - 0x4]
        lea     esi, [esi + eax*0x4]
        dec     eax
        js      L_4925ff
        push    ebp
        lea     ebp, [eax + 0x1]
    L_4925de:
        mov     eax, dword ptr [esi - 0x4]
        sub     esi, 0x4
        test    eax, eax
        jz      L_4925fb
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_4925fb
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_4925fb:
        dec     ebp
        jnz     L_4925de
        pop     ebp
    L_4925ff:
        test    bl, 0x1
        jz      L_49260d
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    L_49260d:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
    L_492615:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_49262e
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_49262e
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_49262e:
        test    bl, 0x1
        jz      L_49263c
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L_49263c:
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
