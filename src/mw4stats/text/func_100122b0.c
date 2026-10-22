/*
 * FUN_100122b0 (169 B, __thiscall, RET 0x4) - Allocates a new 0xa8-byte list
 * node, initializes it, and appends it to the tail of the list rooted at
 * (this+0x20)/(this+0x24). Returns 1 on success, 0 on failure or null param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021048;   /* IAT: EnterCriticalSection */
extern void *g_10021044;   /* IAT: LeaveCriticalSection */
extern void __cdecl FUN_1000a120(void);

__declspec(naked) unsigned int __cdecl FUN_100122b0(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    esi
        push    edi
        xor     edi, edi
        mov     esi, ecx
        cmp     ebx, edi
        jnz     L_122C7
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        ret     0x4
    L_122C7:
        push    esi
        call    dword ptr [g_10021048]      /* EnterCriticalSection */
        push    0xa8
        call    FUN_1000a120
        add     esp, 0x4
        cmp     eax, edi
        jz      L_12343
        mov     ecx, dword ptr [esi + 0x20]
        mov     dword ptr [eax], edi
        mov     dword ptr [eax + 0x4], edi
        mov     dword ptr [eax + 0x8], edi
        mov     dword ptr [eax + 0xc], edi
        mov     dword ptr [eax + 0x10], edi
        mov     dword ptr [eax + 0x14], edi
        mov     dword ptr [eax + 0x18], 0x400
        mov     dword ptr [eax + 0x9c], ebx
        mov     dword ptr [eax + 0xa0], edi
        mov     dword ptr [eax + 0xa4], ecx
        mov     ecx, dword ptr [esi + 0x1c]
        inc     ecx
        mov     ebx, eax
        mov     dword ptr [esi + 0x1c], ecx
        mov     ecx, dword ptr [esi + 0x20]
        cmp     ecx, edi
        jz      L_12322
        mov     dword ptr [ecx + 0xa0], eax
    L_12322:
        mov     ecx, dword ptr [esi + 0x24]
        mov     dword ptr [esi + 0x20], eax
        cmp     ecx, edi
        jnz     L_1232F
        mov     dword ptr [esi + 0x24], eax
    L_1232F:
        push    esi
        call    dword ptr [g_10021044]      /* LeaveCriticalSection */
        xor     eax, eax
        cmp     ebx, edi
        pop     edi
        pop     esi
        setnz   al
        pop     ebx
        ret     0x4
    L_12343:
        push    esi
        xor     ebx, ebx
        call    dword ptr [g_10021044]      /* LeaveCriticalSection */
        xor     eax, eax
        cmp     ebx, edi
        pop     edi
        pop     esi
        setnz   al
        pop     ebx
        ret     0x4
    }
}
