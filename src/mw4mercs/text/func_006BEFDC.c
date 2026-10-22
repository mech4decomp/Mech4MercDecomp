/*
 * FUN_006BEFDC (163 B) — removes entries from a linked list (0x82f350),
 * freeing nodes via a callback (0x76b2d0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_82f350;
extern int g_82f354;
extern int g_76b2d0;

__declspec(naked) void FUN_006BEFDC(void)
{
    __asm {
        nop
        nop
        nop
        nop
        mov     edx, dword ptr [g_82f350]
        test    edx, edx
        push    ebx
        push    esi
        je      L_f07c
        mov     ebx, dword ptr [g_76b2d0]
    L_eff6:
        test    edx, edx
        mov     ecx, dword ptr [edx+0xc]
        je      L_f07c
        mov     esi, edx
    L_effd:
        cmp     dword ptr [esi+0xc], ecx
        mov     eax, dword ptr [esi+4]
        jne     L_f02e
        mov     edx, dword ptr [g_82f354]
        dec     edx
        mov     dword ptr [esi+8], 0
        push    esi
        mov     dword ptr [g_82f350], eax
        mov     dword ptr [g_82f354], edx
        mov     dword ptr [esi], 0
        call    ebx
        add     esp, 4
        jmp     L_f06e
    L_f02e:
        test    eax, eax
        je      L_f074
    L_f032:
        cmp     dword ptr [eax+0xc], ecx
        je      L_f042
        mov     esi, eax
        mov     eax, dword ptr [esi+4]
        test    eax, eax
        jne     L_f032
        jmp     L_f074
    L_f042:
        mov     eax, dword ptr [esi+4]
        mov     ecx, dword ptr [eax+4]
        mov     dword ptr [esi+4], ecx
        mov     ecx, dword ptr [eax+4]
        test    ecx, ecx
        je      L_f055
        mov     dword ptr [ecx+8], esi
    L_f055:
        mov     edx, dword ptr [g_82f354]
        dec     edx
        push    eax
        mov     dword ptr [g_82f354], edx
        call    ebx
        add     esp, 4
        mov     dword ptr [esi], 0
    L_f06e:
        mov     edx, dword ptr [g_82f350]
    L_f074:
        test    edx, edx
        jne     L_eff6
    L_f07c:
        pop     esi
        pop     ebx
        ret
    }
}
