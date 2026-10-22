/*
 * FUN_10012090 (163 B, __thiscall) - Critical-section-guarded removal of a
 * list node matching param_1 from a doubly-linked list rooted at (this+0x24)
 * and (this+0x20). Unlinks the node, frees it, and decrements the count at
 * (this+0x1c).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021048;   /* IAT: EnterCriticalSection */
extern void *g_10021044;   /* IAT: LeaveCriticalSection */
extern void __cdecl FUN_10012000(void);
extern void __cdecl FUN_1000a110(void);

__declspec(naked) void __cdecl FUN_10012090(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        push    edi
        call    dword ptr [g_10021048]      /* EnterCriticalSection */
        mov     esi, dword ptr [edi + 0x24]
        test    esi, esi
        jz      L_12127
        mov     eax, dword ptr [esp + 0xc]
    L_120AA:
        cmp     dword ptr [esi], eax
        jz      L_120C4
        mov     esi, dword ptr [esi + 0xa0]
        test    esi, esi
        jnz     L_120AA
        push    edi
        call    dword ptr [g_10021044]      /* LeaveCriticalSection */
        pop     edi
        pop     esi
        ret     0x4
    L_120C4:
        mov     eax, dword ptr [esi + 0xa0]
        test    eax, eax
        jz      L_120DA
        mov     ecx, dword ptr [esi + 0xa4]
        mov     dword ptr [eax + 0xa4], ecx
    L_120DA:
        mov     eax, dword ptr [esi + 0xa4]
        test    eax, eax
        jz      L_120F0
        mov     edx, dword ptr [esi + 0xa0]
        mov     dword ptr [eax + 0xa0], edx
    L_120F0:
        mov     eax, dword ptr [edi + 0x24]
        cmp     esi, eax
        jnz     L_12100
        mov     eax, dword ptr [eax + 0xa0]
        mov     dword ptr [edi + 0x24], eax
    L_12100:
        mov     eax, dword ptr [edi + 0x20]
        cmp     esi, eax
        jnz     L_12110
        mov     ecx, dword ptr [eax + 0xa4]
        mov     dword ptr [edi + 0x20], ecx
    L_12110:
        test    esi, esi
        jz      L_12124
        mov     ecx, esi
        call    FUN_10012000
        push    esi
        call    FUN_1000a110
        add     esp, 0x4
    L_12124:
        dec     dword ptr [edi + 0x1c]
    L_12127:
        push    edi
        call    dword ptr [g_10021044]      /* LeaveCriticalSection */
        pop     edi
        pop     esi
        ret     0x4
    }
}
