/*
 * FUN_00705a02 (207 B) — gosScript worker-pool enqueue helper. Uses the
 * caller's EBP frame (nested helper, unaff_EBP). Enters critical section,
 * walks the queued-item linked list comparing a 4-dword key, allocates a
 * new 0x124-byte node if not found, copies the key + string, then leaves
 * the critical section and sets an event. __stdcall, RET 0x14.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b110;   /* IAT: EnterCriticalSection */
extern void *g_0076b294;   /* IAT: malloc */
extern void *g_0076b320;   /* IAT: strncpy */
extern void *g_0076b100;   /* IAT: LeaveCriticalSection */
extern void *g_0076b168;   /* IAT: SetEvent */

__declspec(naked) void FUN_00705a02(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        lea     eax, [ebp+0x4]
        push    eax
        call    dword ptr [g_0076b110]
        mov     eax, dword ptr [ebp]
        test    eax, eax
        mov     ebx, dword ptr [esp+0x24]
        mov     dword ptr [esp+0x14], eax
        jz      L_741
L_71e:
        mov     ecx, 0x4
        mov     edi, ebx
        lea     esi, [eax+0x108]
        xor     edx, edx
        repe    cmpsd
        jz      L_73d
        mov     eax, dword ptr [eax+0x11c]
        test    eax, eax
        jnz     L_71e
        jmp     L_741
L_73d:
        test    eax, eax
        jnz     L_7b4
L_741:
        push    0x124
        call    dword ptr [g_0076b294]
        mov     ecx, dword ptr [esp+0x1c]
        mov     edx, dword ptr [esp+0x24]
        mov     esi, eax
        mov     eax, dword ptr [esp+0x18]
        mov     dword ptr [esi+0x11c], eax
        mov     dword ptr [esi], ecx
        mov     dword ptr [esi+0x104], edx
        add     esp, 0x4
        mov     byte ptr [esi+0x120], 0x1
        mov     eax, dword ptr [esi+0x104]
        mov     ecx, dword ptr [eax]
        push    eax
        mov     dword ptr [ebp], esi
        call    dword ptr [ecx+0x4]
        mov     edx, dword ptr [esp+0x1c]
        push    0x100
        push    edx
        lea     eax, [esi+0x4]
        push    eax
        call    dword ptr [g_0076b320]
        mov     ecx, dword ptr [ebx]
        mov     edx, dword ptr [ebx+0x4]
        mov     eax, dword ptr [ebx+0x8]
        add     esp, 0xc
        add     esi, 0x108
        mov     dword ptr [esi], ecx
        mov     ecx, dword ptr [ebx+0xc]
        mov     dword ptr [esi+0x4], edx
        mov     dword ptr [esi+0x8], eax
        mov     dword ptr [esi+0xc], ecx
L_7b4:
        lea     eax, [ebp+0x4]
        push    eax
        call    dword ptr [g_0076b100]
        mov     edx, dword ptr [ebp+0x28]
        push    edx
        call    dword ptr [g_0076b168]
        pop     edi
        pop     esi
        pop     ebx
        mov     al, 0x1
        pop     ebp
        ret     0x14
    }
}
