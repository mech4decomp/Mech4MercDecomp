/*
 * FUN_004e05d0 (108 B) — __thiscall factory. Allocates a block of
 * (count*40+4) bytes, fills it with count GeneralEventQueue objects
 * (via FUN_004e0550), stores count at +0x10, returns base+4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc12c;
extern int g_007dc6d0;
extern void __stdcall FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004e0550(void);
extern void __stdcall FUN_006f49a0(void);

__declspec(naked) void FUN_004e05d0(void)
{
    __asm {
        mov     eax, dword ptr [g_007dc12c]
        push    ebx
        push    edi
        push    eax
        call    FUN_006f4950
        mov     edi, dword ptr [esp + 0xc]
        lea     ecx, [edi + edi*4]
        lea     edx, [ecx*8 + 4]
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_alloc_failed
        lea     ebx, [eax + 0x4]
        mov     dword ptr [eax], edi
        lea     eax, [edi - 1]
        test    eax, eax
        push    esi
        mov     esi, ebx
        jl      L_skip_loop
        push    ebp
        lea     ebp, [eax + 1]
L_loop:
        mov     eax, dword ptr [g_007dc6d0]
        push    eax
        mov     ecx, esi
        call    FUN_004e0550
        add     esi, 0x28
        dec     ebp
        jnz     L_loop
        pop     ebp
L_skip_loop:
        pop     esi
        mov     dword ptr [ebx + 0x10], edi
        call    FUN_006f49a0
        pop     edi
        mov     eax, ebx
        pop     ebx
        ret
L_alloc_failed:
        xor     ebx, ebx
        mov     dword ptr [ebx + 0x10], edi
        call    FUN_006f49a0
        pop     edi
        mov     eax, ebx
        pop     ebx
        ret
    }
}
