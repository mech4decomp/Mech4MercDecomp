/*
 * FUN_00430c60 (101 B) — MLR look-up-light destructor. __thiscall.
 * Sets vtable, zeroes + frees the lookup table, decrements a refcount
 * string, then calls FUN_00482590.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_76e254;
extern void FUN_004084e0(void);
extern void FUN_00482590(void);

__declspec(naked) void FUN_00430c60(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     edx, dword ptr [esi+0xac]
        test    edx, edx
        mov     dword ptr [esi], offset g_76e254
        jz      skip_free
        mov     ecx, dword ptr [esi+0xa0]
        imul    ecx, dword ptr [esi+0x9c]
        test    ecx, ecx
        jle     do_free
        push    edi
        xor     eax, eax
        mov     edi, edx
        rep stosd
        pop     edi
do_free:
        push    edx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi+0xac], 0
skip_free:
        mov     eax, dword ptr [esi+0xa4]
        test    eax, eax
        jz      done
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     done
        push    eax
        call    FUN_004084e0
        add     esp, 4
done:
        mov     ecx, esi
        call    FUN_00482590
        pop     esi
        ret
    }
}
