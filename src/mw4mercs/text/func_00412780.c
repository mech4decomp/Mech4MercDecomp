/*
 * FUN_00412780 (127 B) — __thiscall setter. Decrefs the existing owned buffer
 * at [this]; if the incoming string arg is null, stores null and returns.
 * Otherwise allocates a refcounted copy (len+2), stores refcount byte 1 at
 * the front, copies the string, and stores the buffer pointer at [this].
 * Returns `this` in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b87f0;
extern void __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void *);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_00412780(void)
{
    __asm {
        push    ebp
        mov     ebp, ecx
        mov     eax, dword ptr [ebp]
        test    eax, eax
        push    esi
        jz      L1
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L1
        push    eax
        call    FUN_004084e0
        add     esp, 4
L1:
        mov     esi, dword ptr [esp + 0xc]
        test    esi, esi
        jnz     L2
        mov     dword ptr [ebp], esi
        pop     esi
        mov     eax, ebp
        pop     ebp
        ret     4
L2:
        mov     eax, dword ptr [g_007b87f0]
        push    ebx
        push    edi
        push    eax
        call    FUN_006f4950
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        mov     ebx, ecx
        add     ebx, 2
        push    ebx
        call    FUN_004084d0
        lea     ecx, [ebx - 1]
        mov     edx, ecx
        shr     ecx, 2
        lea     edi, [eax + 1]
        mov     byte ptr [eax], 1
        mov     dword ptr [ebp], edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        add     esp, 4
        rep     movsb
        call    FUN_006f49a0
        pop     edi
        pop     ebx
        pop     esi
        mov     eax, ebp
        pop     ebp
        ret     4
    }
}
