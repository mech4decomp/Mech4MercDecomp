/*
 * FUN_004c8ee0 (113 B) — __cdecl, no args. Allocates a 0x78-byte block,
 * XORs a global with *g_007dab44, copies 0x1e dwords, frees two blocks,
 * reallocates g_007dab44 (4 bytes), stores FUN_00414fd0() result, and
 * XORs it with the allocation pointer into g_007dab40.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void* __cdecl FUN_004084d0(void);
extern void  __cdecl FUN_004084e0(void);
extern int   __cdecl FUN_00414fd0(void);
extern int   g_007dab40;
extern int*  g_007dab44;

__declspec(naked) void FUN_004c8ee0(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        push    0x78
        call    FUN_004084d0
        mov     edx, dword ptr [g_007dab40]
        mov     esi, eax
        mov     eax, dword ptr [g_007dab44]
        xor     edx, dword ptr [eax]
        mov     ecx, edx
        add     esp, 0x4
        mov     dword ptr [g_007dab40], edx
        mov     eax, esi
        sub     ecx, esi
        mov     edi, 0x1e
    L_8f0d:
        mov     ebx, dword ptr [ecx + eax]
        mov     dword ptr [eax], ebx
        add     eax, 0x4
        dec     edi
        jnz     L_8f0d
        push    edx
        call    FUN_004084e0
        mov     ecx, dword ptr [g_007dab44]
        push    ecx
        call    FUN_004084e0
        push    0x4
        call    FUN_004084d0
        add     esp, 0xc
        mov     dword ptr [g_007dab44], eax
        call    FUN_00414fd0
        mov     edx, dword ptr [g_007dab44]
        pop     edi
        mov     dword ptr [edx], eax
        xor     eax, esi
        pop     esi
        mov     dword ptr [g_007dab40], eax
        pop     ebx
        ret
    }
}
