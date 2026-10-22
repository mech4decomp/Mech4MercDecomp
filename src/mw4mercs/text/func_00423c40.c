/*
 * FUN_00423c40 (82 B) — __thiscall MLR buffer-resize helper (4-byte elems).
 * this->[0] = owned buffer ptr, this->[4] = element count.
 * If new count != old: free old buffer; if new count > 0 allocate
 * count*4 bytes and store; else set ptr = 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *);
extern void *__cdecl FUN_004084d0(int);

__declspec(naked) void FUN_00423c40(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi+4]
        push    edi
        mov     edi, dword ptr [esp+0xc]
        cmp     edi, eax
        jz      L_c8d
        test    edi, edi
        jbe     L_c7c
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_c62
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_c62:
        lea     eax, [edi*4+0]
        push    eax
        mov     dword ptr [esi+4], edi
        call    FUN_004084d0
        add     esp, 4
        pop     edi
        mov     dword ptr [esi], eax
        pop     esi
        ret     4
    L_c7c:
        mov     ecx, dword ptr [esi]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi], 0
    L_c8d:
        pop     edi
        pop     esi
        ret     4
    }
}
