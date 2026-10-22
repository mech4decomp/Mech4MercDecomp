/*
 * FUN_00743af0 (292 B) — table init/dedup: zeroes counters, loads
 * language strings, dedups 0x336-dword records, finds a free slot.
 *
 * __cdecl, no params, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_8597c8;   /* 0x008597c8 */
extern int  g_8abe4c;   /* 0x008abe4c */
extern int  g_8abe54;   /* 0x008abe54 */
extern int  g_8abe50;   /* 0x008abe50 */
extern int  g_8b2610;   /* 0x008b2610 */
extern int  g_8abe58;   /* 0x008abe58 */
extern char g_8abe60[]; /* 0x008abe60 */
extern char g_745400[]; /* 0x00745400 */
extern char g_745430[]; /* 0x00745430 */
extern int  g_85894c;   /* 0x0085894c */
extern char g_8ac288[]; /* 0x008ac288 */
extern char g_8ac41c[]; /* 0x008ac41c */

extern void __cdecl FUN_006faa30(void);
extern void __cdecl FUN_00734ec0(void);
extern void __cdecl FUN_00745280(void);

__declspec(naked) void __stdcall FUN_00743af0(void)
{
    __asm {
        mov     eax, [g_8597c8]
        push    esi
        xor     esi, esi
        cmp     eax, esi
        mov     [g_8abe4c], esi
        mov     [g_8abe54], esi
        mov     [g_8abe50], esi
        mov     [g_8b2610], esi
        mov     [g_8abe58], offset g_8abe60
        jnz     L3c12
        push    ebp
        push    edi
        push    esi
        push    esi
        call    FUN_006faa30
        push    esi
        push    offset g_745400
        push    offset g_745430
        call    FUN_00734ec0
        push    esi
        push    1
        call    FUN_006faa30
        call    FUN_00745280
        cmp     dword ptr [g_8abe4c], 2
        mov     ebp, dword ptr [g_8abe54]
        jc      L3bcf
        cmp     ebp, esi
        jz      L3bcf
        mov     edx, 1
        cmp     ebp, edx
        jbe     L3bcf
        push    ebx
L3b65:
        mov     eax, edx
        shl     eax, 4
        add     eax, edx
        lea     eax, [edx + eax * 8]
        lea     eax, [eax + eax * 2]
        shl     eax, 3
        mov     ecx, 4
        mov     edi, offset g_8ac288
        lea     esi, [eax + g_8ac288]
        xor     ebx, ebx
        repe    cmpsd
        jnz     L3bc1
        lea     eax, [eax + g_8abe60]
        lea     ebx, [edx + 1]
        cmp     ebx, ebp
        mov     ecx, 0x336
        mov     esi, eax
        mov     edi, offset g_8abe60
        rep     movsd
        jnc     L3bc0
L3ba6:
        lea     esi, [eax + 0xcd8]
        mov     edi, eax
        inc     edx
        add     eax, 0xcd8
        inc     ebx
        cmp     ebx, ebp
        mov     ecx, 0x336
        rep     movsd
        jc      L3ba6
L3bc0:
        dec     ebp
L3bc1:
        inc     edx
        cmp     edx, ebp
        jc      L3b65
        pop     ebx
        mov     [g_8abe54], ebp
        xor     esi, esi
L3bcf:
        mov     edx, dword ptr [g_85894c]
        cmp     edx, -1
        jnz     L3c02
        xor     eax, eax
        cmp     ebp, esi
        jbe     L3c02
        mov     ecx, offset g_8ac41c
L3be5:
        test    dword ptr [ecx], 0x80000
        jnz     L3bfa
        inc     eax
        add     ecx, 0xcd8
        cmp     eax, ebp
        jc      L3be5
        jmp     L3c02
L3bfa:
        mov     edx, eax
        mov     [g_85894c], edx
L3c02:
        pop     edi
        cmp     edx, ebp
        pop     ebp
        jnc     L3c0c
        cmp     edx, esi
        jge     L3c12
L3c0c:
        mov     [g_85894c], esi
L3c12:
        pop     esi
        ret
    }
}
