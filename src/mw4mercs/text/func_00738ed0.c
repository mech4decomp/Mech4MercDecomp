/*
 * FUN_00738ed0 (229 B) — thread-creation / mutex-guarded worker setup.
 *
 * Validates mutex handles, waits on the mutex, allocates and initializes a
 * worker array, creates a thread, and releases the mutex. Uses IAT calls
 * (WaitForSingleObject, CreateThread, ReleaseMutex) via extern int symbols and
 * two internal calls (FUN_00739c00, FUN_00738c90).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_76b0f4;   /* IAT: WaitForSingleObject */
extern int g_76b218;   /* IAT: CreateThread */
extern int g_76b210;   /* IAT: ReleaseMutex */

extern void *__stdcall FUN_00739c00(int size);
extern void __stdcall FUN_00738c90(void);

__declspec(naked) void __stdcall FUN_00738ed0(void)
{
    __asm {
        push    edi
        mov     edi, dword ptr [esp + 8]
        mov     eax, dword ptr [edi + 0x50]
        test    eax, eax
        jnz     L_e5
        mov     eax, 0x8000ffff
        pop     edi
        ret     8
L_e5:
        mov     ecx, dword ptr [edi + 0x54]
        test    ecx, ecx
        jnz     L_f5
        mov     eax, 0x8000ffff
        pop     edi
        ret     8
L_f5:
        push    -1
        push    eax
        call    dword ptr [g_76b0f4]
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      L_a5
        mov     ecx, dword ptr [edi + 0x18]
        test    ecx, ecx
        jnz     L_a5
        test    eax, 0xfffffffe
        mov     dword ptr [edi + 0x18], eax
        jnz     L_26
        mov     dword ptr [edi + 0x18], 2
L_26:
        push    ebx
        mov     ebx, dword ptr [edi + 0x18]
        mov     eax, ebx
        push    ebp
        shl     eax, 5
        push    eax
        mov     dword ptr [edi + 0x1c], ebx
        call    FUN_00739c00
        mov     ebp, eax
        test    ebp, ebp
        jz      L_60
        lea     eax, [ebx - 1]
        test    eax, eax
        push    esi
        mov     esi, ebp
        jl      L_5b
        lea     ebx, [eax + 1]
L_4c:
        push    0
        mov     ecx, esi
        call    FUN_00738c90
        add     esi, 0x20
        dec     ebx
        jnz     L_4c
L_5b:
        mov     eax, ebp
        pop     esi
        jmp     L_62
L_60:
        xor     eax, eax
L_62:
        test    eax, eax
        pop     ebp
        mov     dword ptr [edi + 4], eax
        pop     ebx
        jz      L_8c
        lea     ecx, [esp + 8]
        push    ecx
        push    0
        push    edi
        push    0x7394f0
        push    0x1000
        push    0
        call    dword ptr [g_76b218]
        test    eax, eax
        mov     dword ptr [edi + 0x48], eax
        jnz     L_a5
L_8c:
        mov     edx, dword ptr [edi]
        push    edi
        call    dword ptr [edx + 4]
        mov     eax, dword ptr [edi + 0x50]
        push    eax
        call    dword ptr [g_76b210]
        mov     eax, 0x80004005
        pop     edi
        ret     8
L_a5:
        mov     ecx, dword ptr [edi + 0x50]
        push    ecx
        call    dword ptr [g_76b210]
        xor     eax, eax
        pop     edi
        ret     8
    }
}
