/*
 * FUN_00705910 (214 B) — gosScript worker-pool teardown: enters a critical
 * section, signals + closes all worker events, frees the linked list of
 * queued items, then deletes the critical section. __stdcall, 1 arg.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b110;   /* IAT: EnterCriticalSection */
extern void *g_0076b168;   /* IAT: SetEvent */
extern void *g_0076b170;   /* IAT: WaitForMultipleObjects */
extern void *g_0076b0ec;   /* IAT: CloseHandle */
extern void *g_0076b2d0;   /* IAT: free */
extern void *g_0076b100;   /* IAT: LeaveCriticalSection */
extern void *g_0076b10c;   /* IAT: DeleteCriticalSection */

__declspec(naked) void FUN_00705910(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+0x8]
        mov     al, byte ptr [esi+0x24]
        test    al, al
        jz      L_e0
        push    ebx
        push    ebp
        push    edi
        lea     edi, [esi+0x4]
        push    edi
        mov     dword ptr [esp+0x18], edi
        call    dword ptr [g_0076b110]
        mov     eax, dword ptr [esi+0x20]
        test    eax, eax
        mov     byte ptr [esi+0x25], 0x1
        jz      L_986
        mov     ebx, dword ptr [g_0076b168]
        lea     ebp, [esi+0x1c]
L_945:
        mov     eax, dword ptr [esi+0x28]
        push    eax
        call    ebx
        mov     ecx, dword ptr [esi+0x20]
        push    -0x1
        push    0x0
        push    ebp
        push    ecx
        call    dword ptr [g_0076b170]
        mov     edi, eax
        mov     edx, dword ptr [esi+edi*0x4+0x1c]
        push    edx
        call    dword ptr [g_0076b0ec]
        mov     eax, dword ptr [esi+0x20]
        mov     ecx, dword ptr [esi+eax*0x4+0x18]
        mov     dword ptr [esi+edi*0x4+0x1c], ecx
        mov     edx, dword ptr [esi+0x20]
        mov     dword ptr [esi+edx*0x4+0x18], 0x0
        dec     dword ptr [esi+0x20]
        jnz     L_945
        mov     edi, dword ptr [esp+0x14]
L_986:
        mov     eax, dword ptr [esi+0x28]
        test    eax, eax
        jz      L_99b
        push    eax
        call    dword ptr [g_0076b0ec]
        mov     dword ptr [esi+0x28], 0x0
L_99b:
        mov     eax, dword ptr [esi]
        test    eax, eax
        mov     byte ptr [esi+0x24], 0x0
        jz      L_9c9
        mov     ebx, dword ptr [g_0076b2d0]
        mov     ebp, eax
L_9ad:
        mov     ecx, ebp
        mov     eax, ebp
        mov     edi, dword ptr [eax+0x11c]
        push    ecx
        call    ebx
        add     esp, 0x4
        test    edi, edi
        mov     ebp, edi
        jnz     L_9ad
        mov     edi, dword ptr [esp+0x14]
        mov     dword ptr [esi], ebp
L_9c9:
        push    edi
        call    dword ptr [g_0076b100]
        push    edi
        call    dword ptr [g_0076b10c]
        pop     edi
        pop     ebp
        pop     ebx
        mov     al, 0x1
        pop     esi
        ret     0x4
L_e0:
        mov     al, 0x1
        pop     esi
        ret     0x4
    }
}
