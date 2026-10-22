/*
 * FUN_006c30c0 (317 B) — Parse a token triple from a global string cursor.
 *
 * If param_2 == 0, dispatches on the current token type (from FUN_006c12e0)
 * to fill param_1[0..2] from various global structures. Otherwise parses
 * three comma/space-separated tokens from the global cursor 0x0082f328 via
 * FUN_006c3450.
 *
 * __cdecl, RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char *g_82f328;
extern void *g_82f320;
extern int __cdecl FUN_006c12e0(void);
extern int __cdecl FUN_006c8660(void *p);
extern int __cdecl FUN_006c8670(void *p);
extern void *__cdecl FUN_006ca220(void *p);
extern int __cdecl FUN_006c3450(void);

__declspec(naked) int __cdecl FUN_006c30c0(int *param_1, int param_2)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        push    esi
        push    edi
        xor     edi, edi
        cmp     eax, edi
        jnz     loc_6c31a3
        mov     esi, dword ptr [g_82f328]
        call    FUN_006c12e0
        cmp     eax, 0x6e
        jnz     loc_6c3103
        mov     eax, dword ptr [g_82f320]
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [ecx + 0x44]
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [eax + 0x14]
        mov     eax, dword ptr [eax + 0x10]
        mov     dword ptr [ecx + 8], edi
        pop     edi
        mov     dword ptr [ecx + 4], eax
        mov     dword ptr [ecx], edx
        xor     eax, eax
        pop     esi
        ret     8
loc_6c3103:
        cmp     eax, 0x67
        jnz     loc_6c3136
        mov     ecx, dword ptr [g_82f320]
        mov     edx, dword ptr [ecx]
        push    edx
        call    FUN_006c8660
        mov     esi, dword ptr [esp + 0xc]
        mov     dword ptr [esi], eax
        mov     eax, dword ptr [g_82f320]
        mov     ecx, dword ptr [eax]
        push    ecx
        call    FUN_006c8670
        mov     dword ptr [esi + 8], edi
        mov     dword ptr [esi + 4], eax
        pop     edi
        xor     eax, eax
        pop     esi
        ret     8
loc_6c3136:
        cmp     eax, 0x6d
        jnz     loc_6c3176
        mov     edx, dword ptr [g_82f320]
        mov     eax, dword ptr [edx]
        push    eax
        call    FUN_006ca220
        push    eax
        call    FUN_006c8660
        mov     ecx, dword ptr [g_82f320]
        mov     edx, dword ptr [ecx]
        mov     esi, dword ptr [esp + 0xc]
        push    edx
        mov     dword ptr [esi], eax
        call    FUN_006ca220
        push    eax
        call    FUN_006c8670
        mov     dword ptr [esi + 8], edi
        mov     dword ptr [esi + 4], eax
        pop     edi
        xor     eax, eax
        pop     esi
        ret     8
loc_6c3176:
        cmp     eax, 0x66
        jnz     loc_6c319d
        mov     eax, dword ptr [g_82f320]
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [esp + 0xc]
        mov     dword ptr [edx], eax
        mov     eax, dword ptr [ecx + 4]
        mov     ecx, dword ptr [ecx + 8]
        mov     dword ptr [edx + 4], eax
        pop     edi
        mov     dword ptr [edx + 8], ecx
        xor     eax, eax
        pop     esi
        ret     8
loc_6c319d:
        mov     dword ptr [g_82f328], esi
loc_6c31a3:
        call    FUN_006c3450
        mov     edx, dword ptr [g_82f328]
        mov     esi, dword ptr [esp + 0xc]
        inc     edx
        mov     dword ptr [esi], eax
        mov     dword ptr [g_82f328], edx
        call    FUN_006c3450
        mov     dword ptr [esi + 4], eax
        mov     eax, dword ptr [g_82f328]
        cmp     byte ptr [eax], 0x20
        jnz     loc_6c31d3
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6c31d3:
        cmp     byte ptr [eax], 0x2c
        jz      loc_6c31e5
        mov     dword ptr [esi + 8], edi
        pop     edi
        mov     eax, 1
        pop     esi
        ret     8
loc_6c31e5:
        inc     eax
        mov     dword ptr [g_82f328], eax
        call    FUN_006c3450
        mov     dword ptr [esi + 8], eax
        pop     edi
        mov     eax, 1
        pop     esi
        ret     8
    }
}
