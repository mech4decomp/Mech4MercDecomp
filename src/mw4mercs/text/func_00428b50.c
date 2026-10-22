/*
 * FUN_00428b50 (166 B) — __thiscall constructor for the MLRFootStep
 * object. Calls FUN_00415180(g_007b964c), zeroes [this+8]/[this+0xc],
 * then allocates a count*0x10 array (FUN_004084d0) and fills each
 * 0x10-byte element from the globals g_007b8d88/8c/90. On failure paths
 * the array pointer is zeroed. Finally sets vtable 0x76df7c and the
 * float fields 0x18/0x1c/0x20. RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(void *);
extern void *__cdecl FUN_004084d0(int);
extern void __cdecl FUN_004084e0(void *);
extern int g_007b964c;
extern int g_007b8d88;
extern int g_007b8d8c;
extern int g_007b8d90;

__declspec(naked) void FUN_00428b50(void)
{
    __asm {
        mov     eax, dword ptr [g_007b964c]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        mov     edi, dword ptr [esp+0x10]
        xor     ebx, ebx
        cmp     edi, ebx
        mov     dword ptr [esi+8], ebx
        mov     dword ptr [esi+0xc], ebx
        jz      L_done
        jbe     L_alloc_fail_free
        mov     ecx, edi
        shl     ecx, 4
        push    ecx
        mov     dword ptr [esi+0xc], edi
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebx
        jz      L_alloc_zero
        lea     edx, [edi-1]
        cmp     edx, ebx
        jl      L_store_eax
        lea     ecx, [eax+0xc]
        inc     edx
L_fill:
        mov     edi, dword ptr [g_007b8d88]
        mov     dword ptr [ecx-0xc], ebx
        mov     dword ptr [ecx-0x8], edi
        mov     edi, dword ptr [g_007b8d8c]
        mov     dword ptr [ecx-0x4], edi
        mov     edi, dword ptr [g_007b8d90]
        mov     dword ptr [ecx], edi
        add     ecx, 0x10
        dec     edx
        jnz     L_fill
        mov     dword ptr [esi+8], eax
        jmp     L_done
L_alloc_zero:
        xor     eax, eax
L_store_eax:
        mov     dword ptr [esi+8], eax
        jmp     L_done
L_alloc_fail_free:
        push    ebx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi+8], ebx
L_done:
        pop     edi
        mov     dword ptr [esi+0x10], ebx
        mov     dword ptr [esi+0x14], ebx
        mov     dword ptr [esi], 0x76df7c
        mov     dword ptr [esi+0x18], 0x43160000
        mov     dword ptr [esi+0x1c], 0x43480000
        mov     dword ptr [esi+0x20], 0x3ca3d70a
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     4
    }
}
