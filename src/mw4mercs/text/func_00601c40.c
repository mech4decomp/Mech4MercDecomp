/*
 * FUN_00601c40 (121 B) — __thiscall (ECX = this), RET 0x4 (1 stack param).
 *
 * Iterates 0xff times over a table, and for each valid entry whose
 * sub-object matches, calls FUN_00621fd0(0x34, obj+0x14, 1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int *g_007dab44;
extern int g_007dab40;
extern void __cdecl FUN_00621fd0(void);

__declspec(naked) void __stdcall FUN_00601c40(void)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [g_007dab40]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     eax, dword ptr [ecx + 0xc]
        xor     eax, 0x85739531
        lea     esi, [eax + 0x3584]
        mov     ebx, 0xff
L_00601c6c:
        mov     al, byte ptr [esi - 0x4c]
        test    al, al
        jz      L_00601ca9
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_00601ca9
        mov     eax, dword ptr [eax + 0x170]
        test    eax, eax
        jz      L_00601ca9
        mov     edx, dword ptr [eax + 0x4]
        cmp     dword ptr [edx], 0x429
        jnz     L_00601ca9
        cmp     dword ptr [eax + 0x4cc], ebp
        jnz     L_00601ca9
        mov     ecx, dword ptr [edi + 0x225c]
        push    0x1
        add     eax, 0x14
        push    eax
        push    0x34
        call    FUN_00621fd0
L_00601ca9:
        add     esi, 0x2038
        dec     ebx
        jnz     L_00601c6c
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
    }
}
