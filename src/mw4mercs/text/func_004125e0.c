/*
 * FUN_004125e0 (131 B) — __thiscall constructor taking two string args
 * (param_1, param_2). Allocates a refcounted buffer sized to hold both
 * strings (len1 + len2 + 2), stores refcount byte 1 at the front, copies
 * both strings (with NULs) after it, and stores the buffer pointer at
 * [this]. Returns `this` in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b87f0;
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void *);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004125e0(void)
{
    __asm {
        mov     eax, dword ptr [g_007b87f0]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        mov     ebx, ecx
        call    FUN_006f4950
        mov     esi, dword ptr [esp + 0x14]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        mov     edi, dword ptr [esp + 0x18]
        not     ecx
        dec     ecx
        mov     ebp, ecx
        or      ecx, 0xffffffff
        repne   scasb
        not     ecx
        dec     ecx
        mov     dword ptr [esp + 0x14], ecx
        lea     ecx, [ecx + ebp + 2]
        push    ecx
        call    FUN_004084d0
        mov     byte ptr [eax], 1
        lea     edi, [eax + 1]
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [ebx], edi
        mov     ecx, ebp
        mov     edx, ecx
        shr     ecx, 2
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     edi, dword ptr [ebx]
        mov     esi, dword ptr [esp + 0x1c]
        lea     ecx, [eax + 1]
        mov     edx, ecx
        shr     ecx, 2
        add     edi, ebp
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        add     esp, 4
        rep     movsb
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        ret     8
    }
}
