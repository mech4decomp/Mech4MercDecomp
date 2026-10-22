/*
 * FUN_00405fd0 (252 B) -- frees the four GUN chat arrays (0x7e90/0x7e8c/
 * 0x7e88/0x7e84), then reorders/compacts the chat list in place using a
 * pointer-difference loop. Updates DAT_007b7e80 (count).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4230(void);
extern int g_007b7e90;
extern int g_007b7e8c;
extern int g_007b7e88;
extern int g_007b7e84;
extern int g_007b7e80;

__declspec(naked) void FUN_00405fd0(void)
{
    __asm {
        mov     eax, dword ptr [g_007b7e90]
        mov     ecx, dword ptr [eax]
        sub     esp, 0x14
        push    ebx
        push    esi
        push    ecx
        call    FUN_006f4230
        mov     edx, dword ptr [g_007b7e8c]
        mov     eax, dword ptr [edx]
        push    eax
        call    FUN_006f4230
        mov     ecx, dword ptr [g_007b7e88]
        mov     edx, dword ptr [ecx]
        push    edx
        call    FUN_006f4230
        mov     eax, dword ptr [g_007b7e84]
        mov     ecx, dword ptr [eax]
        push    ecx
        call    FUN_006f4230
        mov     ebx, dword ptr [g_007b7e80]
        cmp     ebx, 1
        mov     edx, dword ptr [g_007b7e8c]
        mov     esi, dword ptr [g_007b7e88]
        jle     L_a1
        push    ebp
        mov     ebp, esi
        sub     ebp, edx
        mov     dword ptr [esp+0x14], ebp
        mov     ebp, dword ptr [g_007b7e84]
        sub     ebp, edx
        mov     dword ptr [esp+0x1c], ebp
        mov     ebp, dword ptr [g_007b7e90]
        sub     ebp, esi
        push    edi
        mov     edi, dword ptr [g_007b7e90]
        mov     dword ptr [esp+0x14], ebp
        mov     ebp, dword ptr [g_007b7e84]
        sub     ebp, esi
        sub     edi, edx
        dec     ebx
        lea     ecx, [esi+0x4]
        mov     eax, edx
        mov     dword ptr [esp+0x1c], ebp
        mov     dword ptr [esp+0x10], ebx
loop_:
        mov     ebx, dword ptr [esp+0x14]
        mov     ebx, dword ptr [ebx+ecx]
        mov     ebp, dword ptr [esp+0x18]
        mov     dword ptr [edi+eax], ebx
        mov     ebx, dword ptr [eax+0x4]
        mov     dword ptr [eax], ebx
        mov     ebx, dword ptr [ecx]
        mov     dword ptr [eax+ebp], ebx
        mov     ebx, dword ptr [esp+0x1c]
        mov     ebx, dword ptr [ebx+ecx]
        mov     ebp, dword ptr [esp+0x20]
        mov     dword ptr [eax+ebp], ebx
        mov     ebx, dword ptr [esp+0x10]
        add     eax, 4
        add     ecx, 4
        dec     ebx
        mov     dword ptr [esp+0x10], ebx
        jnz     loop_
        mov     ebx, dword ptr [g_007b7e80]
        pop     edi
        pop     ebp
L_a1:
        mov     ecx, dword ptr [g_007b7e90]
        xor     eax, eax
        mov     dword ptr [edx+ebx*4-4], eax
        mov     edx, dword ptr [g_007b7e84]
        mov     dword ptr [esi+ebx*4-4], eax
        mov     dword ptr [ecx+ebx*4-4], eax
        mov     dword ptr [edx+ebx*4-4], eax
        dec     ebx
        pop     esi
        mov     dword ptr [g_007b7e80], ebx
        pop     ebx
        add     esp, 0x14
        ret
    }
}
