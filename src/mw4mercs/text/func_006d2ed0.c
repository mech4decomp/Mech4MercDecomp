/*
 * FUN_006D2ED0 (123 B) — Archive entry refcount decrement + lookup.
 *
 * __thiscall (ECX = this), RET 4. Calls FUN_00412570 twice,
 * FUN_004128E0, FUN_00412AB0, then FUN_006D2F50. Decrements
 * refcount (byte at ptr[-1]) on two pointers, freeing via
 * FUN_004084E0 if refcount reaches zero.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00412570(void *);
extern void __cdecl FUN_004128e0(void);
extern int __cdecl FUN_00412ab0(void *);
extern int __cdecl FUN_006d2f50(int);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void __cdecl FUN_006d2ed0(void)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     esi, ecx
        push    edi
        lea     ecx, [esp + 0xc]
        call    FUN_00412570
        push    edi
        lea     ecx, [esp + 0x14]
        call    FUN_00412570
        lea     ecx, [esp + 0x10]
        call    FUN_004128e0
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        call    FUN_00412ab0
        add     esp, 4
        push    eax
        mov     ecx, esi
        call    FUN_006d2f50
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      l_dec2
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_dec2
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_dec2:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        jz      l_done
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_done
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_done:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     4
    }
}
