/*
 * FUN_00412670 (103 B) — __thiscall constructor taking a string arg and a
 * trailing char (param_2). Allocates a refcounted buffer (len+3), stores
 * refcount byte 1 at the front, copies the string, then appends the char
 * and a NUL terminator. Stores the buffer pointer at [this]. Returns
 * `this` in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b87f0;
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void *);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_00412670(void)
{
    __asm {
        mov     eax, dword ptr [g_007b87f0]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        mov     ebp, ecx
        call    FUN_006f4950
        mov     esi, dword ptr [esp + 0x14]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        mov     ebx, ecx
        add     ebx, 3
        push    ebx
        call    FUN_004084d0
        mov     byte ptr [eax], 1
        lea     edi, [eax + 1]
        lea     ecx, [ebx - 3]
        mov     edx, ecx
        shr     ecx, 2
        mov     dword ptr [ebp], edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     eax, dword ptr [ebp]
        mov     cl, byte ptr [esp + 0x1c]
        add     eax, ebx
        mov     byte ptr [eax - 3], cl
        add     esp, 4
        mov     byte ptr [eax - 2], 0
        call    FUN_006f49a0
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     8
    }
}
