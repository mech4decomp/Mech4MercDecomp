/*
 * FUN_00759a70 (49 B) — __fastcall (ECX = this). Destructor: sets vtable
 * pointer at [this] to g_7aeed4, walks a linked list at [this+0x814]
 * calling each node's virtual method (node->vtable[0], arg 1), then calls
 * FUN_00759730(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_7aeed4[];
extern void __cdecl FUN_00759730(void);

__declspec(naked) void __fastcall FUN_00759a70(void)
{
    __asm {
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [edi + 0x814]
        test    ecx, ecx
        mov     dword ptr [edi], offset g_7aeed4
        jz      L_98
        push    esi
    L_84:
        test    ecx, ecx
        mov     esi, dword ptr [ecx + 0x10]
        jz      L_91
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
    L_91:
        test    esi, esi
        mov     ecx, esi
        jnz     L_84
        pop     esi
    L_98:
        mov     ecx, edi
        call    FUN_00759730
        pop     edi
        ret
    }
}
