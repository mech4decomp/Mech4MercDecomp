/*
 * FUN_00617940 (291 B) — __thiscall (ECX=this), RET 8 (2 stack args).
 *
 * Iterates a library-instance registry (via FUN_00416cc0 iterator),
 * compares each entry's name against param_2 with _stricmp (IAT
 * 0x76b2ac), and marks entries for update. Sets result object fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b2ac;               /* IAT slot for _stricmp */
extern void *g_77a38c;               /* PTR_FUN_0077a38c function table */
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00617920(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00416c60(void);

__declspec(naked) void __stdcall FUN_00617940(void *this, void *param_1, char *param_2)
{
    __asm {
        sub     esp, 0x1c
        mov     eax, dword ptr [esp + 0x24]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412570
        lea     ecx, [esp + 0xc]
        push    ecx
        lea     ecx, [esi + 0x54]
        call    FUN_00416b60
        mov     edi, eax
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 0x10], edi
        jz      L_dec_done
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_dec_done
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_dec_done:
        mov     edx, dword ptr [esp + 0x2c]
        push    edx
        mov     ecx, esi
        call    FUN_00617920
        test    edi, edi
        mov     ebx, eax
        mov     dword ptr [esp + 0x2c], ebx
        jz      L_final
        add     esi, 0x40
        push    esi
        lea     ecx, [esp + 0x18]
        call    FUN_00416bc0
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], offset g_77a38c
        call    FUN_00416cc0
        mov     edi, eax
        test    edi, edi
        jz      L_iter_done
L_loop:
        mov     eax, dword ptr [edi + 0x10]
        test    eax, eax
        jz      L_next
        mov     esi, dword ptr [eax + 0x10]
        test    esi, esi
        jz      L_stricmp
        inc     byte ptr [esi - 1]
L_stricmp:
        mov     eax, dword ptr [esp + 0x30]
        push    eax
        push    esi
        call    dword ptr [g_76b2ac]
        add     esp, 0x8
        mov     ebx, eax
        neg     ebx
        sbb     bl, bl
        inc     bl
        test    esi, esi
        jz      L_check
        mov     cl, byte ptr [esi - 1]
        lea     eax, [esi - 1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_check
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_check:
        test    bl, bl
        jz      L_next
        mov     al, byte ptr [edi + 0x14]
        test    al, al
        mov     dword ptr [edi + 0x10], 0
        jnz     L_setflag
        mov     eax, dword ptr [edi + 0x18]
        test    eax, eax
        jz      L_next
L_setflag:
        mov     byte ptr [edi + 0x1c], 1
L_next:
        lea     ecx, [esp + 0x14]
        call    FUN_00416cc0
        mov     edi, eax
        test    edi, edi
        jnz     L_loop
        mov     ebx, dword ptr [esp + 0x2c]
L_iter_done:
        lea     ecx, [esp + 0x14]
        call    FUN_00416c60
        mov     edi, dword ptr [esp + 0x10]
L_final:
        mov     al, byte ptr [ebx + 0x14]
        test    al, al
        mov     dword ptr [ebx + 0x10], edi
        jnz     L_final_set
        mov     eax, dword ptr [ebx + 0x18]
        test    eax, eax
        jz      L_ret
L_final_set:
        mov     byte ptr [ebx + 0x1c], 1
L_ret:
        pop     edi
        pop     esi
        mov     eax, 0x1
        pop     ebx
        add     esp, 0x1c
        ret     0x8
    }
}
