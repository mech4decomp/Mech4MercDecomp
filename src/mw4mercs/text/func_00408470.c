/*
 * FUN_00408470 (78 B) — __thiscall, RET 0x4: recursive list teardown.
 * Walks a linked list of nodes, freeing each node's sub-buffers and the
 * node itself. Recurses via FUN_00408470 and frees via FUN_004084e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00408470(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00408470(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        test    esi, esi
        mov     ebx, ecx
        jz      L_4084b9
        push    edi
    L_40847d:
        mov     eax, dword ptr [esi + 0xc]
        push    eax
        mov     ecx, ebx
        call    FUN_00408470
        mov     eax, dword ptr [esi + 0x10]
        test    eax, eax
        mov     edi, dword ptr [esi + 0x8]
        jz      L_4084a5
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_4084a5
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_4084a5:
        test    esi, esi
        jz      L_4084b2
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L_4084b2:
        test    edi, edi
        mov     esi, edi
        jnz     L_40847d
        pop     edi
    L_4084b9:
        pop     esi
        pop     ebx
        ret     0x4
    }
}
