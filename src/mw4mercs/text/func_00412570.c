/*
 * FUN_00412570 (106 B) — __thiscall constructor. Stores a reference-counted
 * copy of a string. If the source string is null, stores 0 and returns.
 * Otherwise allocates a buffer (len+2), stores a refcount byte of 1 at the
 * front, and copies the string (including NUL) after it; the buffer pointer
 * is stored at [this]. Returns `this` in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b87f0;
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_004084d0(void *);

__declspec(naked) void FUN_00412570(void)
{
    __asm {
        mov     eax, dword ptr [g_007b87f0]
        push    ebp
        push    esi
        push    eax
        mov     ebp, ecx
        call    FUN_006f4950
        mov     esi, dword ptr [esp + 0xc]
        test    esi, esi
        jnz     L1
        mov     dword ptr [ebp], esi
        call    FUN_006f49a0
        pop     esi
        mov     eax, ebp
        pop     ebp
        ret     4
L1:
        push    ebx
        push    edi
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
        add     esp, 4
        and     ecx, 3
        rep     movsb
        pop     edi
        pop     ebx
        call    FUN_006f49a0
        pop     esi
        mov     eax, ebp
        pop     ebp
        ret     4
    }
}
