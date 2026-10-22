/*
 * FUN_00637990 (141 B) — __fastcall (ECX = param_1), RET (no stack args).
 *
 * Destructor-ish: frees a tagged pointer at param_1+0x4e8 (two layouts),
 * then calls FUN_004d21c0 on param_1+0x4a4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040de20(void);
extern void __cdecl FUN_004084e0(void *p);
extern void __cdecl FUN_004d21c0(void);

__declspec(naked) void __fastcall FUN_00637990(void *param_1)
{
    __asm {
        push    ebx
        mov     ebx, ecx
        mov     ecx, dword ptr [ebx + 0x4e8]
        mov     eax, ecx
        and     eax, 0x1
        cmp     al, 0x1
        push    esi
        jnz     L_7a05
        mov     edx, ecx
        and     edx, 0x2
        cmp     dl, 0x2
        jnz     L_79e8
        and     ecx, 0xfffffffc
        mov     dword ptr [ebx + 0x4e8], ecx
        jz      L_7a05
        mov     eax, dword ptr [ecx - 0x4]
        push    ebp
        lea     ebp, [ecx - 0x4]
        lea     esi, [eax + eax*4]
        shl     esi, 0x4
        add     esi, ecx
        dec     eax
        js      L_79dc
        push    edi
        lea     edi, [eax + 0x1]
L_79ce:
        sub     esi, 0x50
        mov     ecx, esi
        call    FUN_0040de20
        dec     edi
        jnz     L_79ce
        pop     edi
L_79dc:
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
        pop     ebp
        jmp     L_7a05
L_79e8:
        mov     esi, ecx
        and     esi, 0xfffffffc
        mov     dword ptr [ebx + 0x4e8], esi
        jz      L_7a05
        mov     ecx, esi
        call    FUN_0040de20
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_7a05:
        lea     ecx, [ebx + 0x4a4]
        mov     dword ptr [ebx + 0x4e8], 0x0
        call    FUN_004d21c0
        pop     esi
        pop     ebx
        ret
    }
}
