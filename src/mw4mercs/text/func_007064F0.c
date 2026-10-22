/*
 * FUN_007064F0 (83 B) — __cdecl (1 stack arg, RET 4). Cleanup routine:
 * releases a handle via IAT [g_76b0ec], frees [esi+0x68] via FUN_00705910,
 * and releases two objects at [esi+0x28] via their vtable method +8.
 * Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b0ec;
extern void __cdecl FUN_00705910(void);

__declspec(naked) void FUN_007064F0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     al, byte ptr [esi + 0x70]
        xor     ebx, ebx
        cmp     al, bl
        je      loc_70650f
        mov     eax, dword ptr [esi + 0x6c]
        push    eax
        call    dword ptr [g_76b0ec]
        mov     dword ptr [esi + 0x6c], ebx
        mov     byte ptr [esi + 0x70], bl
loc_70650f:
        mov     eax, dword ptr [esi + 0x68]
        cmp     eax, ebx
        je      loc_70651c
        push    eax
        call    FUN_00705910
loc_70651c:
        mov     eax, dword ptr [esi + 0x28]
        cmp     eax, ebx
        je      loc_70652c
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 8]
        mov     dword ptr [esi + 0x28], ebx
loc_70652c:
        mov     eax, dword ptr [esi + 0x28]
        cmp     eax, ebx
        je      loc_70653c
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 8]
        mov     dword ptr [esi + 0x28], ebx
loc_70653c:
        pop     esi
        mov     al, 1
        pop     ebx
        ret     4
    }
}
