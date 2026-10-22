/*
 * FUN_004d77f0 (236 B) — network entry adder. If the entry count at
 * [esi+0x17bc] equals the capacity at [esi+0x17c0], returns 0. Otherwise
 * strncpy's name/address strings (via IAT 0x0076b320) into a 0xa4-byte
 * slot, stores a value, increments the count, and optionally calls
 * FUN_004d7da0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b320;                 /* IAT: strncpy */
extern void __cdecl FUN_004d7da0(void);

__declspec(naked) void FUN_004d77f0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+8]
        mov     eax, dword ptr [esi+17bch]
        cmp     eax, dword ptr [esi+17c0h]
        jnz     L7809
        xor     al, al
        pop     esi
        ret     14h
    L7809:
        mov     ecx, dword ptr [esp+10h]
        push    ebx
        xor     ebx, ebx
        cmp     ecx, ebx
        push    edi
        mov     edi, dword ptr [g_0076b320]
        jz      L7846
        push    50h
        push    ecx
        lea     ecx, [eax+eax*4]
        lea     edx, [eax+ecx*8]
        lea     eax, [esi+edx*4+158h]
        push    eax
        call    edi
        mov     eax, dword ptr [esi+17bch]
        lea     ecx, [eax+eax*4]
        lea     edx, [eax+ecx*8]
        add     esp, 0ch
        mov     byte ptr [esi+edx*4+1a7h], bl
        jmp     L7853
    L7846:
        lea     ecx, [eax+eax*4]
        lea     edx, [eax+ecx*8]
        mov     byte ptr [esi+edx*4+158h], bl
    L7853:
        mov     eax, dword ptr [esp+1ch]
        cmp     eax, ebx
        jz      L788C
        push    50h
        push    eax
        mov     eax, dword ptr [esi+17bch]
        lea     ecx, [eax+eax*4]
        lea     edx, [eax+ecx*8]
        lea     eax, [esi+edx*4+1a8h]
        push    eax
        call    edi
        mov     eax, dword ptr [esi+17bch]
        lea     ecx, [eax+eax*4]
        lea     edx, [eax+ecx*8]
        add     esp, 0ch
        mov     byte ptr [esi+edx*4+1f7h], bl
        jmp     L789F
    L788C:
        mov     eax, dword ptr [esi+17bch]
        lea     ecx, [eax+eax*4]
        lea     edx, [eax+ecx*8]
        mov     byte ptr [esi+edx*4+1a8h], bl
    L789F:
        mov     eax, dword ptr [esi+17bch]
        lea     ecx, [eax+eax*4]
        lea     edx, [eax+ecx*8]
        mov     eax, dword ptr [esp+14h]
        mov     dword ptr [esi+edx*4+1f8h], eax
        mov     ecx, dword ptr [esi+17bch]
        mov     al, byte ptr [esi+17b8h]
        inc     ecx
        pop     edi
        cmp     al, bl
        mov     dword ptr [esi+17bch], ecx
        pop     ebx
        jz      L78D6
        mov     ecx, esi
        call    FUN_004d7da0
    L78D6:
        mov     al, 1
        pop     esi
        ret     14h
    }
}
