/*
 * FUN_00738960 (217 B) — Frees a set of DLL module handles via
 * FreeLibrary, then calls CoUninitialize.
 *
 * __cdecl, RET (no stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8aadac;
extern int g_8aad98;
extern int g_8aad94;
extern int g_8aad90;
extern int g_8aad9c;
extern int g_8aada0;
extern int g_8aada4;
extern int g_8aada8;
extern int g_8aadb0;
extern int g_8aadb8;
extern int g_8aadb4;
extern void *g_76b0b8;   /* IAT: FreeLibrary */
extern void *g_76b63c;   /* IAT: CoUninitialize */

__declspec(naked) void FUN_00738960(void)
{
    __asm {
        mov     eax, dword ptr [g_8aadac]
        push    esi
        mov     esi, dword ptr [g_76b0b8]
        push    edi
        xor     edi, edi
        cmp     eax, edi
        jz      L1
        push    eax
        call    esi
        mov     dword ptr [g_8aadac], edi
    L1:
        mov     eax, dword ptr [g_8aad98]
        cmp     eax, edi
        jz      L2
        push    eax
        call    esi
        mov     dword ptr [g_8aad98], edi
    L2:
        mov     eax, dword ptr [g_8aad94]
        cmp     eax, edi
        jz      L3
        push    eax
        call    esi
        mov     dword ptr [g_8aad94], edi
    L3:
        mov     eax, dword ptr [g_8aad90]
        cmp     eax, edi
        jz      L4
        push    eax
        call    esi
        mov     dword ptr [g_8aad90], edi
    L4:
        mov     eax, dword ptr [g_8aad9c]
        cmp     eax, edi
        jz      L5
        push    eax
        call    esi
        mov     dword ptr [g_8aad9c], edi
    L5:
        mov     eax, dword ptr [g_8aada0]
        cmp     eax, edi
        jz      L6
        push    eax
        call    esi
        mov     dword ptr [g_8aada0], edi
    L6:
        mov     eax, dword ptr [g_8aada4]
        cmp     eax, edi
        jz      L7
        push    eax
        call    esi
        mov     dword ptr [g_8aada4], edi
    L7:
        mov     eax, dword ptr [g_8aada8]
        cmp     eax, edi
        jz      L8
        push    eax
        call    esi
        mov     dword ptr [g_8aada8], edi
    L8:
        mov     eax, dword ptr [g_8aadb0]
        cmp     eax, edi
        jz      L9
        push    eax
        call    esi
        mov     dword ptr [g_8aadb0], edi
    L9:
        mov     eax, dword ptr [g_8aadb8]
        cmp     eax, edi
        jz      L10
        push    eax
        call    esi
        mov     dword ptr [g_8aadb8], edi
    L10:
        mov     eax, dword ptr [g_8aadb4]
        cmp     eax, edi
        jz      L11
        push    eax
        call    esi
        mov     dword ptr [g_8aadb4], edi
    L11:
        call    dword ptr [g_76b63c]
        pop     edi
        pop     esi
        ret
    }
}
