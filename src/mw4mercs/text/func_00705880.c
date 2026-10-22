/*
 * FUN_00705880 (141 B) — initializes a worker object: critical section,
 * event, and a pool of threads (CreateThread via IAT). __stdcall RET 8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00705910(void *param);

extern void *g_0076b108;   /* IAT: InitializeCriticalSection */
extern void *g_0076b16c;   /* IAT: CreateEventA */
extern void *g_0076b218;   /* IAT: CreateThread */

__declspec(naked) unsigned int __stdcall FUN_00705880(void *param_1, int param_2)
{
    __asm {
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        push    esi
        call    FUN_00705910
        mov     eax, dword ptr [esp + 0x14]
        lea     ecx, [esi + 0x4]
        push    ecx
        mov     dword ptr [esi + 0x2c], eax
        call    dword ptr [g_0076b108]
        push    0x0
        push    0x0
        push    0x0
        push    0x0
        mov     byte ptr [esi + 0x24], 0x1
        call    dword ptr [g_0076b16c]
        test    eax, eax
        mov     dword ptr [esi + 0x28], eax
        jnz     loc_58c5
loc_58b7:
        push    esi
        call    FUN_00705910
        pop     edi
        pop     esi
        xor     al, al
        pop     ebp
        ret     8
loc_58c5:
        mov     ebp, dword ptr [g_0076b218]
        mov     byte ptr [esi + 0x25], 0x0
        mov     dword ptr [esi + 0x20], 0x0
        lea     edi, [esi + 0x1c]
loc_58d9:
        lea     edx, [esp + 0x10]
        push    edx
        push    0x0
        push    esi
        push    0x705640
        push    0x0
        push    0x0
        call    ebp
        test    edi, edi
        mov     ecx, dword ptr [esi + 0x20]
        mov     dword ptr [esi + ecx*0x4 + 0x1c], eax
        jz      loc_58b7
        mov     ecx, dword ptr [esi + 0x20]
        inc     ecx
        mov     eax, ecx
        cmp     eax, 0x1
        mov     dword ptr [esi + 0x20], ecx
        jc      loc_58d9
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebp
        ret     8
    }
}
