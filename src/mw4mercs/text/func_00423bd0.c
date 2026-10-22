/*
 * FUN_00423bd0 (100 B) — __thiscall MLR buffer-resize helper (8-byte elems).
 * this->[0] = owned buffer ptr, this->[4] = element count.
 * If new count != old: free old buffer; if new count > 0 allocate
 * count*8 bytes and store; else set ptr = 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *);
extern void *__cdecl FUN_004084d0(int);

__declspec(naked) void FUN_00423bd0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi+4]
        push    edi
        mov     edi, dword ptr [esp+0xc]
        cmp     edi, eax
        jz      L_c2f
        test    edi, edi
        jbe     L_c1e
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_bf2
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_bf2:
        lea     eax, [edi*8+0]
        push    eax
        mov     dword ptr [esi+4], edi
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_c15
        dec     edi
        mov     dword ptr [esp+0xc], edi
        pop     edi
        mov     dword ptr [esi], eax
        pop     esi
        ret     4
    L_c15:
        xor     eax, eax
        pop     edi
        mov     dword ptr [esi], eax
        pop     esi
        ret     4
    L_c1e:
        mov     ecx, dword ptr [esi]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi], 0
    L_c2f:
        pop     edi
        pop     esi
        ret     4
    }
}
