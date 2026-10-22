/*
 * FUN_00411f70 (83 B) — container/loader helper (__thiscall, ECX=this).
 * Looks up an entry by name (FUN_00411a10); if found, finalizes via
 * FUN_0041f3d0 and returns 1. Otherwise, if param_3 is set, logs a
 * "required entry" error (FUN_006fab90) and breaks (INT3) on failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00411a10(void);
extern void __cdecl FUN_0041f3d0(void);
extern int  __cdecl FUN_006fab90(void);
extern char g_76d1c4[];

__declspec(naked) void FUN_00411f70(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     esi, ecx
        push    edi
        call    FUN_00411a10
        test    eax, eax
        jz      L1
        mov     ecx, dword ptr [ebp + 0xc]
        push    ecx
        mov     ecx, eax
        call    FUN_0041f3d0
        pop     edi
        mov     al, 0x1
        pop     esi
        pop     ebp
        ret     0xc
    L1:
        mov     al, byte ptr [ebp + 0x10]
        test    al, al
        jz      L2
        mov     edx, dword ptr [esi + 0x14]
        mov     eax, dword ptr [esi + 0x10]
        mov     ecx, dword ptr [eax]
        push    edi
        push    edx
        push    ecx
        push    offset g_76d1c4
        call    FUN_006fab90
        add     esp, 0x10
        test    eax, eax
        jz      L2
        int     3
    L2:
        pop     edi
        xor     al, al
        pop     esi
        pop     ebp
        ret     0xc
    }
}
