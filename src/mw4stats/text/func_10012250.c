/*
 * FUN_10012250 (94 B, __fastcall, ECX = this) - Critical-section-guarded pop
 * of the head node at (this+0x24). Advances the head, frees the popped node,
 * decrements the count at (this+0x1c), and clears the new head's +0xa4 link
 * (or this+0x20 if the list became empty).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021048;   /* IAT: EnterCriticalSection */
extern void *g_10021044;   /* IAT: LeaveCriticalSection */
extern void __cdecl FUN_10012000(void);
extern void __cdecl FUN_1000a110(void);

__declspec(naked) void __cdecl FUN_10012250(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        push    esi
        call    dword ptr [g_10021048]      /* EnterCriticalSection */
        mov     edi, dword ptr [esi + 0x24]
        test    edi, edi
        jz      L_122A4
        mov     eax, dword ptr [edi + 0xa0]
        mov     ecx, edi
        mov     dword ptr [esi + 0x24], eax
        call    FUN_10012000
        push    edi
        call    FUN_1000a110
        mov     edx, dword ptr [esi + 0x1c]
        mov     eax, dword ptr [esi + 0x24]
        add     esp, 0x4
        dec     edx
        test    eax, eax
        mov     dword ptr [esi + 0x1c], edx
        jz      L_1229D
        push    esi
        mov     dword ptr [eax + 0xa4], 0x0
        call    dword ptr [g_10021044]      /* LeaveCriticalSection */
        pop     edi
        pop     esi
        ret
    L_1229D:
        mov     dword ptr [esi + 0x20], 0x0
    L_122A4:
        push    esi
        call    dword ptr [g_10021044]      /* LeaveCriticalSection */
        pop     edi
        pop     esi
        ret
    }
}
