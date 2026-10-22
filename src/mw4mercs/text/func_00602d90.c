/*
 * FUN_00602D90 (85 B) — Calls FUN_004169c0, then if the low bit of the
 * flag param is set, calls FUN_00416130, decrements a global refcount,
 * and when it reaches 0 frees the global object and clears the pointer.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: byte flag).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f26b8;
extern int g_007f26b4;
extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_00416130(void *p);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __fastcall FUN_00602d90(void *this_, unsigned char flag)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp + 8], 1
        jz      L_ret2
        mov     ecx, dword ptr [g_007f26b8]
        push    esi
        call    FUN_00416130
        dec     dword ptr [g_007f26b4]
        jnz     L_ret2
        push    edi
        mov     edi, dword ptr [g_007f26b8]
        test    edi, edi
        jz      L_skip
        mov     ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add     esp, 4
L_skip:
        pop     edi
        mov     eax, esi
        mov     dword ptr [g_007f26b8], 0
        pop     esi
        ret     4
L_ret2:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
