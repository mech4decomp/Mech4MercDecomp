/*
 * FUN_00675f70 (210 B) — HUD subsystem teardown: walks a hash table
 * (0x0080da98) freeing entries, then destroys/frees the global objects
 * 0x0080da94/0x0080da90/0x0080daa4/0x0080daa8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0080da98;
extern int g_0080daa8;
extern int g_0080da94;
extern int g_0080da90;
extern int g_0080daa4;
extern void FUN_00416130(void);
extern void FUN_004084e0(void);
extern void FUN_00676910(void);
extern void FUN_00415e30(void);

__declspec(naked) void FUN_00675f70(void)
{
    __asm {
        mov     ecx, dword ptr [g_0080da98]
        push    esi
        push    edi
        xor     edi, edi
        xor     esi, esi
L_loop:
        cmp     dword ptr [esi+ecx*1], edi
        jz      L_next
L_inner:
        mov     eax, dword ptr [esi+ecx*1]
        cmp     eax, edi
        mov     edx, dword ptr [eax+0x10]
        mov     dword ptr [esi+ecx*1], edx
        jz      L_check
        mov     ecx, dword ptr [g_0080daa8]
        push    eax
        call    FUN_00416130
        mov     ecx, dword ptr [g_0080da98]
L_check:
        cmp     dword ptr [esi+ecx*1], edi
        jnz     L_inner
L_next:
        add     esi, 0x4
        cmp     esi, 0x1000
        jl      L_loop
        push    ecx
        call    FUN_004084e0
        mov     esi, dword ptr [g_0080da94]
        add     esp, 0x4
        cmp     esi, edi
        mov     dword ptr [g_0080da98], edi
        jz      L_a
        mov     ecx, esi
        call    FUN_00676910
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_a:
        mov     esi, dword ptr [g_0080da90]
        cmp     esi, edi
        mov     dword ptr [g_0080da94], edi
        jz      L_b
        mov     ecx, esi
        call    FUN_00676910
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_b:
        mov     esi, dword ptr [g_0080daa4]
        cmp     esi, edi
        mov     dword ptr [g_0080da90], edi
        jz      L_c
        mov     ecx, esi
        call    FUN_00415e30
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_c:
        mov     esi, dword ptr [g_0080daa8]
        cmp     esi, edi
        mov     dword ptr [g_0080daa4], edi
        jz      L_d
        mov     ecx, esi
        call    FUN_00415e30
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_d:
        mov     dword ptr [g_0080daa8], edi
        pop     edi
        pop     esi
        ret
    }
}
