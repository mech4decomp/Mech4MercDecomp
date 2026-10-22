/*
 * FUN_00706c20 (220 B) — Object constructor.
 *
 * Allocates a 0x19b8-byte object, zero-initializes several fields, sets
 * vtable pointers, copies a string literal ("IP" or "LAN") into the object,
 * calls FUN_006f88c0, then returns atoi(object+0x14).
 *
 * __cdecl, RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void __cdecl FUN_006f88c0(void *obj);
extern void *g_76b320;   /* IAT: strncpy */
extern void *g_76b318;   /* IAT: atoi */
extern char g_7a1348[];  /* vtable ptr */
extern char g_7a1344[];  /* "IP" string literal */
extern char g_7a1340[];  /* "LAN" string literal */
extern char g_79fb38[];  /* vtable ptr (else branch) */
extern char g_79fb34[];  /* vtable ptr (if branch) */
extern char g_7a2e30[];  /* vtable ptr */

__declspec(naked) int __cdecl FUN_00706c20(char *param_1)
{
    __asm {
        push    ebx
        push    ebp
        push    0x19b8
        call    FUN_004084d0
        mov     ebp, eax
        xor     ebx, ebx
        add     esp, 4
        cmp     ebp, ebx
        jz      loc_706ca5
        mov     eax, dword ptr [esp + 0xc]
        cmp     eax, ebx
        push    esi
        mov     dword ptr [ebp + 0x20], ebx
        mov     byte ptr [ebp + 0x4], bl
        mov     dword ptr [ebp + 0x24], ebx
        mov     dword ptr [ebp + 0x28], ebx
        mov     dword ptr [ebp + 0x68], ebx
        mov     byte ptr [ebp + 0x70], bl
        mov     dword ptr [ebp + 0x1874], ebx
        mov     dword ptr [ebp], offset g_7a1348
        push    edi
        jz      loc_706cac
        cmp     byte ptr [eax], bl
        jz      loc_706cac
        push    0x1e
        push    eax
        lea     eax, [ebp + 0x2c]
        push    eax
        call    dword ptr [g_76b320]
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0xc
        mov     edi, offset g_7a1344
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        lea     edx, [ebp + 0x4a]
        mov     byte ptr [ebp + 0x49], bl
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     dword ptr [ebp + 0x78], offset g_79fb38
        jmp     loc_706cdb
loc_706ca5:
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     4
loc_706cac:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7a1340
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        lea     edx, [ebp + 0x4a]
        mov     byte ptr [ebp + 0x2c], bl
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     dword ptr [ebp + 0x78], offset g_79fb34
loc_706cdb:
        push    ebp
        mov     dword ptr [ebp + 0x74], offset g_7a2e30
        call    FUN_006f88c0
        add     ebp, 0x14
        push    ebp
        call    dword ptr [g_76b318]
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
