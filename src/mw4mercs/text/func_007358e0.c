/*
 * FUN_007358E0 (138 B) — __thiscall (ECX=this), RET 8 (two stack params).
 *
 * Conditional engine-object update: checks a flag byte at this+4 and
 * dispatches to FUN_0075c050 / FUN_0075b9c0 / FUN_00735970 /
 * FUN_00735be0 / FUN_00747a50 based on state.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0075c050(void);
extern void __cdecl FUN_00747a50(void);
extern void __cdecl FUN_0075b9c0(void);
extern void __cdecl FUN_00735970(void);
extern void __cdecl FUN_00735be0(void);

__declspec(naked) void __stdcall FUN_007358e0(void *param1, void *param2)
{
    __asm {
        push    ebx
        mov     bl, byte ptr [esp + 0x8]
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x1c]
        test    eax, eax
        jz      L_917
        test    bl, bl
        jz      L_931
        mov     al, byte ptr [esi + 0x4]
        shr     al, 0x4
        test    al, 0x1
        jnz     L_917
        call    FUN_0075c050
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esi + 0xc]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_00747a50
        pop     esi
        pop     ebx
        ret     0x8
L_917:
        test    bl, bl
        jz      L_931
        mov     cl, byte ptr [esi + 0x4]
        shr     cl, 0x4
        test    cl, 0x1
        jnz     L_931
        push    0x0
        push    0x1
        mov     ecx, esi
        call    FUN_0075b9c0
L_931:
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        jnz     L_93f
        mov     ecx, esi
        call    FUN_00735970
L_93f:
        test    bl, bl
        jz      L_955
        mov     dl, byte ptr [esi + 0x4]
        shr     dl, 0x4
        test    dl, 0x1
        jnz     L_955
        mov     ecx, esi
        call    FUN_00735be0
L_955:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esi + 0xc]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_00747a50
        pop     esi
        pop     ebx
        ret     0x8
    }
}
