/*
 * FUN_00652f70 (50 B) — __cdecl. Calls FUN_00652d90(p1,p2,p3); if it
 * returns nonzero, calls FUN_00652e00(p1,p2,p4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char __cdecl FUN_00652d90(void *a, void *b, void *c);
extern void __cdecl FUN_00652e00(void *a, void *b, void *c);

__declspec(naked) void FUN_00652f70(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        push    eax
        push    esi
        push    edi
        call    FUN_00652d90
        add     esp, 0xc
        test    al, al
        jnz     L_cont
        pop     edi
        pop     esi
        ret
    L_cont:
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        push    esi
        push    edi
        call    FUN_00652e00
        add     esp, 0xc
        pop     edi
        pop     esi
        ret
    }
}
