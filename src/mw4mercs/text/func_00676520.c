/*
 * FUN_00676520 (136 B) — HUD map/hud4 family __thiscall setter. Clears
 * element [index] of the array pointed to by this->[0] to 0, with debug
 * bounds/flag checks (DAT_007dde2c, this->[0x10]) and FUN_006fabf0 assert
 * traps (INT3).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fabf0(void);

extern char g_007dde2c;   /* 0x007dde2c (byte flag) */
extern char g_0076b768[]; /* 0x0076b768 (assert string) */

__declspec(naked) void FUN_00676520(int index)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     al, byte ptr [g_007dde2c]
        test    al, al
        push    esi
        push    edi
        mov     esi, ecx
        jz      L6596
        mov     edi, dword ptr [ebp + 0x8]
        test    edi, edi
        jge     L6549
        push    offset g_0076b768
        call    FUN_006fabf0
        add     esp, 0x4
        test    eax, eax
        jz      L6549
        int     3
L6549:
        mov     al, byte ptr [g_007dde2c]
        test    al, al
        jz      L6587
        cmp     edi, dword ptr [esi + 0x10]
        jl      L6578
        push    offset g_0076b768
        call    FUN_006fabf0
        add     esp, 0x4
        test    eax, eax
        jz      L6569
        int     3
L6569:
        mov     eax, dword ptr [esi]
        mov     dword ptr [eax + edi*4], 0x0
        pop     edi
        pop     esi
        pop     ebp
        ret     0x4
L6578:
        mov     ecx, dword ptr [esi]
        mov     dword ptr [ecx + edi*4], 0x0
        pop     edi
        pop     esi
        pop     ebp
        ret     0x4
L6587:
        mov     edx, dword ptr [esi]
        mov     dword ptr [edx + edi*4], 0x0
        pop     edi
        pop     esi
        pop     ebp
        ret     0x4
L6596:
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [ebp + 0x8]
        pop     edi
        mov     dword ptr [eax + ecx*4], 0x0
        pop     esi
        pop     ebp
        ret     0x4
    }
}
