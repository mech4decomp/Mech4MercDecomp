/*
 * FUN_004d7480 (213 B) — network config helper. Calls a virtual method
 * (slot 0xc), strncpy's several buffers (via IAT 0x0076b320), selects a
 * "Yes"/"No" string, copies a 16-byte struct, then calls
 * FUN_004d7b00 / FUN_004d7b50 to establish a connection.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004d79d0(void);
extern void __cdecl FUN_004d7b00(void);
extern void __cdecl FUN_004d7b50(void);
extern void *g_0076b320;                 /* IAT: strncpy */
extern char g_00770d38[];                /* "Yes" */
extern char g_00770d24[];                /* "No" */
extern char g_00772f40[];                /* "localhost" */
extern char g_00772ec4[];                /* "mech4" */

__declspec(naked) void FUN_004d7480(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+8]
        mov     eax, dword ptr [esi]
        push    edi
        push    esi
        call    dword ptr [eax+0ch]
        push    50h
        call    FUN_004d79d0
        mov     edi, dword ptr [g_0076b320]
        push    eax
        lea     ecx, [esi+104h]
        push    ecx
        call    edi
        mov     edx, dword ptr [esp+1ch]
        push    50h
        push    edx
        lea     eax, [esi+15d8h]
        push    eax
        call    edi
        mov     eax, dword ptr [esp+30h]
        add     esp, 18h
        test    eax, eax
        jz      L74D3
        cmp     byte ptr [eax], 0
        jz      L74D3
        push    50h
        push    offset g_00770d38
        lea     ecx, [esi+1628h]
        push    ecx
        jmp     L74E1
    L74D3:
        push    50h
        push    offset g_00770d24
        lea     edx, [esi+1628h]
        push    edx
    L74E1:
        call    edi
        mov     eax, dword ptr [esp+20h]
        mov     edx, dword ptr [esp+28h]
        mov     dword ptr [esi+17c0h], eax
        mov     eax, dword ptr [edx]
        lea     ecx, [esi+17c8h]
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [edx+4]
        add     esp, 0ch
        mov     dword ptr [ecx+4], eax
        mov     eax, dword ptr [edx+8]
        mov     edx, dword ptr [edx+0ch]
        push    0
        mov     dword ptr [ecx+8], eax
        mov     eax, dword ptr [esp+24h]
        push    offset g_00772f40
        push    offset g_00772ec4
        mov     dword ptr [esi+17bch], 0
        mov     dword ptr [ecx+0ch], edx
        mov     dword ptr [esi+17f0h], eax
        call    FUN_004d7b00
        push    eax
        mov     ecx, esi
        call    FUN_004d7b50
        test    eax, eax
        jnz     L754E
        mov     al, 1
        pop     edi
        mov     byte ptr [esi+17b8h], al
        pop     esi
        ret     18h
    L754E:
        pop     edi
        xor     al, al
        pop     esi
        ret     18h
    }
}
