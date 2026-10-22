/*
 * FUN_006204b0 (289 B) — __thiscall (ECX=this), RET 8 (2 stack args).
 *
 * Splits param_2 on '[' via strchr (IAT 0x76b308). If no '[', calls
 * FUN_0064bf90(param_2, DAT_008058e0, 0) on this+0xc; on success checks
 * type field and dispatches to FUN_00620120 / FUN_006202e0. If '['
 * present, copies the prefix into a local buffer and dispatches.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b308;                 /* IAT slot for strchr */
extern int DAT_008058e0;
extern void __cdecl FUN_0064bf90(void);
extern void __cdecl FUN_00620120(void);
extern void __cdecl FUN_006202e0(void);

__declspec(naked) void __stdcall FUN_006204b0(void *this, void *param_1, char *param_2)
{
    __asm {
        sub     esp, 0x104
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x114]
        push    esi
        push    0x5b
        push    ebp
        mov     ebx, ecx
        call    dword ptr [g_76b308]
        mov     edx, eax
        add     esp, 0x8
        test    edx, edx
        jnz     L_strchr_found
        mov     esi, dword ptr [ebx + 0xc]
        push    eax
        mov     eax, dword ptr [DAT_008058e0]
        push    eax
        push    ebp
        mov     ecx, esi
        call    FUN_0064bf90
        test    eax, eax
        jnz     L_bf90_ok
        pop     esi
        pop     ebp
        mov     eax, 0x1
        pop     ebx
        add     esp, 0x104
        ret     0x8
L_bf90_ok:
        mov     ecx, dword ptr [eax + 0x3c]
        cmp     dword ptr [ecx + 0x4], 0x3
        jz      L_type3
        mov     edx, dword ptr [esp + 0x114]
        push    eax
        push    edx
        mov     ecx, ebx
        call    FUN_00620120
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x104
        ret     0x8
L_strchr_found:
        or      ecx, 0xffffffff
        push    edi
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        lea     esi, [esp + 0x14]
        mov     dword ptr [esp + 0x10], esi
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x10]
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [DAT_008058e0]
        push    0x0
        push    ecx
        mov     ecx, dword ptr [ebx + 0xc]
        push    ebp
        mov     byte ptr [edx], 0x0
        call    FUN_0064bf90
        test    eax, eax
        pop     edi
        jnz     L_found_ok
        pop     esi
        pop     ebp
        mov     eax, 0x1
        pop     ebx
        add     esp, 0x104
        ret     0x8
L_found_ok:
        lea     edx, [esp + 0x10]
        push    edx
        push    eax
        mov     eax, dword ptr [esp + 0x11c]
        push    eax
        jmp     L_common
L_type3:
        mov     ecx, dword ptr [DAT_008058e0]
        push    0x0
        push    ecx
        push    ebp
        mov     ecx, esi
        call    FUN_0064bf90
        test    eax, eax
        jnz     L_type3_ok
        pop     esi
        pop     ebp
        mov     eax, 0x1
        pop     ebx
        add     esp, 0x104
        ret     0x8
L_type3_ok:
        mov     edx, dword ptr [esp + 0x114]
        push    0x0
        push    eax
        push    edx
L_common:
        mov     ecx, ebx
        call    FUN_006202e0
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x104
        ret     0x8
    }
}
