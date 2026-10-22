/*
 * FUN_10012200 (67 B, __fastcall, ECX = this) - Critical-section-guarded
 * pop of the head node at (this+0x28). Advances the head to its +0xa0 link
 * and returns the popped node's +0x9c value (or 0 if empty).
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * CFLAGS: /O2
 */

extern void *g_10021048;   /* IAT: EnterCriticalSection */
extern void *g_10021044;   /* IAT: LeaveCriticalSection */

__declspec(naked) unsigned int __cdecl FUN_10012200(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        push    esi
        call    dword ptr [g_10021048]      /* EnterCriticalSection */
        mov     eax, dword ptr [esi + 0x28]
        test    eax, eax
        jz      L_1221A
        mov     eax, dword ptr [eax + 0xa0]
        jmp     L_1221C
    L_1221A:
        xor     eax, eax
    L_1221C:
        test    eax, eax
        mov     dword ptr [esi + 0x28], eax
        jz      L_12235
        mov     edi, dword ptr [eax + 0x9c]
        push    esi
        call    dword ptr [g_10021044]      /* LeaveCriticalSection */
        mov     eax, edi
        pop     edi
        pop     esi
        ret
    L_12235:
        push    esi
        xor     edi, edi
        call    dword ptr [g_10021044]      /* LeaveCriticalSection */
        mov     eax, edi
        pop     edi
        pop     esi
        ret
    }
}
