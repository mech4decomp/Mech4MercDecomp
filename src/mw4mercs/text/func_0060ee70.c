/*
 * FUN_0060ee70 (112 B) — Searches a linked list (at this+0x4, offset
 * +0x384) for an item whose index matches *param_1[2]; returns 1/0/-1.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7f25a8;
extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_005efba0(void);

__declspec(naked) int __fastcall FUN_0060ee70(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [ecx + 0x4]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [eax + 0x8]
        mov     eax, dword ptr [eax + 0x4]
        push    esi
        push    edi
        push    eax
        add     ecx, 0x384
        call    FUN_00416b60
        test    eax, eax
        jz      L_d6
        mov     esi, dword ptr [eax + 0x94]
        xor     ebx, ebx
L_99:
        test    esi, esi
        jz      L_d6
        mov     edi, dword ptr [esi]
        test    edi, edi
        mov     esi, dword ptr [esi + 0x4]
        jz      L_d6
        mov     eax, dword ptr [g_7f25a8]
        mov     ecx, dword ptr [edi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L_99
        cmp     ebx, dword ptr [ebp]
        jz      L_c0
        inc     ebx
        jmp     L_99
L_c0:
        mov     ecx, edi
        call    FUN_005efba0
        neg     al
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        sbb     eax, eax
        and     eax, 0x2
        dec     eax
        ret     8
L_d6:
        pop     edi
        pop     esi
        pop     ebp
        or      eax, 0xffffffff
        pop     ebx
        ret     8
    }
}
