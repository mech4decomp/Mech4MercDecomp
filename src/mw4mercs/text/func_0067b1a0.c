/*
 * FUN_0067b1a0 (174 B) — Counts matching entries across two arrays
 * (at the XOR-decoded object +0x18 and +0x70), calling FUN_0041fd80
 * and FUN_00415230 per element, and returns min(count, 0x27).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;
extern int g_7dab40;
extern int g_7f25c0;
extern int g_7f2574;

extern void *__cdecl FUN_0041fd80(void);
extern char __cdecl FUN_00415230(int p);

__declspec(naked) unsigned int __cdecl FUN_0067b1a0(void)
{
    __asm {
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        push    ebx
        xor     ecx, dword ptr [g_7dab40]
        mov     eax, dword ptr [ecx + 0x10]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x1c]
        add     eax, 0x18
        push    esi
        xor     ebx, ebx
        test    ecx, ecx
        push    edi
        jbe     l_loop2
    l_loop1:
        mov     esi, dword ptr [eax]
        add     esi, 0x14
        mov     edi, ecx
    l_inner1:
        mov     ecx, dword ptr [esi]
        call    FUN_0041fd80
        test    eax, eax
        jz      l_next1
        mov     ecx, dword ptr [g_7f25c0]
        push    ecx
        mov     ecx, dword ptr [eax + 4]
        call    FUN_00415230
        cmp     al, 1
        jnz     l_next1
        inc     ebx
    l_next1:
        add     esi, 0x1c
        dec     edi
        jnz     l_inner1
    l_loop2:
        mov     edx, dword ptr [g_7dab44]
        mov     ecx, dword ptr [g_7dab40]
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     eax, dword ptr [eax + 0x10]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x74]
        add     eax, 0x70
        test    ecx, ecx
        jbe     l_done
    l_loop2b:
        mov     esi, dword ptr [eax]
        add     esi, 0x14
        mov     edi, ecx
    l_inner2:
        mov     ecx, dword ptr [esi]
        call    FUN_0041fd80
        test    eax, eax
        jz      l_next2
        mov     ecx, dword ptr [g_7f2574]
        push    ecx
        mov     ecx, dword ptr [eax + 4]
        call    FUN_00415230
        cmp     al, 1
        jnz     l_next2
        inc     ebx
    l_next2:
        add     esi, 0x1c
        dec     edi
        jnz     l_inner2
    l_done:
        cmp     ebx, 0x27
        mov     eax, 0x27
        ja      l_ret
        mov     eax, ebx
    l_ret:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
